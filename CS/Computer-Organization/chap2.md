# 2. 数据的表示和运算

## 数制与编码

### 进位计数制及其相互转化

#### 进位计数法

#### 不同进制数之间的相互转化

##### 二进制转八进制和十六进制

3位一组/4位一组转为对应八/十六进制数

例：二进制数：1111000010.01101

对应八进制数：1702.32（001 111 000 010.011 010）

对应十六进制数：3C2.68（0011 1100 0010.0110 1000）

##### 任意进制转十进制

$(11011.1)_{2}=1\times2^{4}+1\times2^{3}+0\times2^{2}+1\times2^{1}+1\times2^{0}+1\times2^{-1}=27.5$

##### 十进制转任意进制

整数部分除基取余（倒序），小数部分乘基取整（顺序）

例：十进制 123.6875 转二进制数 1111011.1011

![除基取余](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905160836977.png)

![乘基取余](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905160915187.png)

#### 真值和机器数

### BCD码*

1. 8421码

    > 每四位代表一个十进制数，6个无效码，➕6修正
    >
    > 例如：1001 0110 代表 十进制数 96

2. 余三码

    > 无权码。8421码基础上加(0011)形成的

3. 2421码

    > 权值为 2 4 2 1
    >
    > 大于或等于5的最高位为1，小于5的最高位为0

### 定点数的编码表示

#### 机器数的定点表示

#### 原码、反码、补码、移码

![几种码表示整数](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/2gzb3h.jpg)

![码的转换](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/gkpprl.jpg)

:star2:转换

|      | 正数           | 负数                                 |
| ---- | -------------- | ------------------------------------ |
| 原码 | 符号位为0      | 符号位为1                            |
| 反码 | 与原码相同     | 符号位与原码相同，其余为原码按位取反 |
| 补码 | 与原码相同     | 反码+1                               |
| 移码 | 补码符号位取反 | 补码符号位取反                       |

:star2:原码与补码相互转换：符号位不变，从右往左找到第一个1，1左边取反，右边（包括1本身）不变

补码与负补码相互转换：从右往左找到第一个1，1左边取反（包括符号位），右边（包括1本身）不变

补码 1000 0000 表示为-128

### 整数的表示

#### 无符号整数的表示

n位无符号数表示范围 0～2^n^ - 1

#### 带符号整数的表示

补码优势：

1. 0的表示唯一
2. 运算规则简单，符号位可参与运算
3. 补码比原码和反码多表示一个最小负数

:star2::star2:计算机中带符号数都使用补码表示，故n位带符号数表示范围为 -2^n-1^ ～ 2^n-1^ - 1（补码）

:star2::star2:原码反码则为  -2^n-1^ - 1 ～ 2^n-1^ - 1

## 运算方法和运算电路

### 基本运算部件

#### 一位全加器

输入：加数A~i~，加数B~i~，低位进位C~i-1~

输出：本位和S~i~，向高位进位C~i~

和表达式：==S ~i~ = A~i~⊕B~i~⊕C~i-1~==

进位表达式：==C~i~ = A~i~B~i~ + (A ~i~⊕B~i~)C~i-1~==

#### 串行进位加法器

低位运算产生的进位所需的时间将影响高位运算的时间，最长运算时间主要由进位信号的传递时间决定

#### 并行进位加法器

令==G~i~ = A~i~B~i~==（*进位产生函数（本地进位）*），==P~i~ = A~i~⊕B~i~==（*进位传递函数（进位传递条件）*）

进位表达式：==C~i~ = G~i~ + P~i~C~i-1~==（G~i~ = 1 或 P~i~C~i-1~ = 1 时，C~i~ = 1）

> 这种进位方式是快速的，与位数无关。但随着位数的增加，C~i~ 的逻辑表达式会变得越来越长，使得电路很复杂。

#### 带标志加法器

#### 算术逻辑单元（ALU）

### 定点数的移位运算

> 若不溢出，左移➡️乘2，右移➡️除以2

#### 算术移位

|      | 码制             | 添加代码 |
| ---- | ---------------- | -------- |
| 正数 | 原码、反码、补码 | 0        |
| 负数 | 原码             | 0        |
|      | 补码             | 左移添0  |
|      |                  | 右移添1  |
|      | 反码             | 1        |

#### 逻辑移位

将操作数视为无符号数，添0

#### 循环移位

分为带标志位循环移位和不带标志位循环移位

:star2:最高位会进入标志位

![循环移位](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905221328604.png)

### 定点数的加减运算

#### 补码的加减法运算

1. 按二进制运算规则运算，逢二进一
2. 若做加法，两数补码直接相加；若做减法，则将被减数与减数的机器负数相加
3. 符号位与数值位一起参与运算，结果的符号位也在运算中直接得出
4. 最终结果的高位丢弃，保留n+1位，运算结果同为补码

#### 补码加减运算电路

#### 溢出判别方法

> 仅当两个符号相同的数相加或两个符号相异的数相减才可能溢出

##### 采用一位符号位

> 两个数符号相同，结果与原符号不同，则溢出

设A的符号为A~s~，B的符号为B~s~，运算结果为S~s~，溢出逻辑表达式为：

$V = A_s B_s \bar S_s + \bar A_s \bar B_s S_s$

V = 0，表示无溢出；V = 1，表示有溢出

##### 采用双符号位

> 也称模4补码。运算结果的两个符号位S~s1~ S~s2~相同，表示未溢出；两个符号位不同代表溢出。此时最高符号位代表真正的符号。

1. S~s1~ S~s2~ = 00：结果为正数，无溢出
2. S~s1~ S~s2~ = 01：结果正溢出
3. S~s1~ S~s2~ = 10：结果负溢出
4. S~s1~ S~s2~ = 11：结果为负数，无溢出

##### 采用一位符号位根据数据位的进位情况判断溢出

:star2::star2:符号位的进位与最高数位的进位相同，则说明没有溢出，否则溢出

==符号位进位与最高数位不同则溢出==

#### 原码的加减法运算（了解）

### 定点数的乘除运算

#### 乘法

原码一位乘法

> 符号位与数值位分开计算，符号位异或，数值部分为绝对值相乘之积

![原码一位乘法](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905172547919.png)

补码一位乘法

![补码一位乘法](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905173046113.png)

#### 除法

原码除法运算（不恢复余数法）

![原码除法运算](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905173541617.png)

加减交替法

![加减交替法](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905173636130.png)

### C语言中的整数类型及类型转换

#### 有符号数和无符号数的转换

强制类型转换的结果保持位值不变，仅改变了解释这些位的方式

#### 不同字长整数之间的转换

当大字长变量向小字长变量强制类型转换时，系统把多余的高位字长部分直接截断，低位直接赋值

短字长整数到长字长整数的转换，不仅要使相应的位值相等，高位部分还会扩展为原数字的符号位

### 数据的存储和排列

#### 数据的“大端方式”和“小端方式”存储

大端方式按从坡高有效字节到最低有效字节的顺序存储数据，即最高有效字节存放在前面;小端方式按从最低有效宇节到最高有效字节的顺序存储数据，即最低有效字节存放在前面

#### 数据按“边界对齐”方式存储

数据可一次访存取出

空间换时间的想法

## 浮点数的表示和运算

### 浮点数的表示

#### 浮点数的表示格式

> 浮点数由数符、阶码和尾数三部分组成

$N = (-1)^S \times M \times R^E$

S （数符）：取 0 或 1，代表浮点数的符号；
M（尾数）：一个二进制定点小数，称为尾数，一般用定点原码小数表示
E （阶码）：一个二进制定点整数，称为阶码或指数，用移码表示
R：基数（隐含）

#### 浮点数的表示范围

运算结果大于最大正数称为正上溢，小于绝对值最大负数时称为负上溢，统称上溢。数据产生上溢，计算机必须中断运算操作，进行溢出处理。
运算结果在0至最小正数之间称为正下溢，在0至绝对值最小负数之间称为负下溢，统称下溢。下溢时，数值趋于零，计算机仅将其当作0处理。

#### 浮点数的规格化

> 调整浮点数尾数和阶码大小，使得非零的浮点数在尾数的最高数位上保证是一个有效值。

左规：±0.0···0x···x的形式。每左移一位，阶码减1。左规可能需要进行多次。

右规：尾数右移一位，阶码加1。需要右规时，只需要进行一次。

尾数M应满足 $1/R \leqslant |M| < 1$

1. 正数为0.1xxx···x的形式，最大值表示为0.11···1，最小值表示为0.100···0。表示范围为$1/2 \leq M \leq (1-2^{-n})$
2. 负数为1.1xx···x的形式，最大值为1.10···0，最小值为1.11···1。表示范围为$-(1-2^{-n} \leq M \leq -1/2)$

:star2::star2:==基数为2时，原码规格化的尾数最高位一定是1；基数为4时，最高两位不全为0==

:heavy_exclamation_mark: 注意是原码表示，题目给补码可以转换一下

#### IEEE754标准

1. 32位单精度：1位符号，8位阶码，23位尾数
2. 64位双精度：1位符号，11位阶码，52位尾数

> IEEE754标准的浮点数，是尾数采用隐藏位策略的原码展示。规格化的浮点数最高位总是“1”，为了能使尾数多表示一位有效位，将这个“1”隐藏，隐藏23位尾数实际上表示了24位有效数字。阶码用移码表示。（由于全0有特殊含义，真值为正常移码值+1）

IEEE754标准中，规格化的短浮点数真值为$(-1)^S\times1.M\times2^{E-127}$，规格化的长浮点数真值为$(-1)^S\times1.M\times2^{E-1023}$

短浮点数E的取值为1～254(8位表示)，长浮点数E的取值为1～2046(11位表示)

:star2:阶码全0或全1时，有特别的解释：

1. 全0阶码全0尾数：+0/-0.零的符号取决于数符S，一般情况下+0和-0等价。
2. 全1阶码全0尾数：+∞/-∞。引入目的：计算过程中出现异常使得程序能继续进行。

![阶码移码偏置](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230905213811174.png)

:star2::star2:==IEEE 移码最小 -126 对应 0000 0001 最大 127 对应 1111 1110==

#### 定点、浮点表示的区别

1. 数值范围：若字长相同，浮点表示远大于定点表示
2. 精度：浮点数范围扩大，精度降低
3. 数的运算：浮点数需要计算尾数和码阶两部分，结果还要进行规格化。
4. 溢出问题：定点数运算结果超出表示范围时，发生溢出；浮点数运算结果超出尾数表示范围不一定溢出，规格化后的阶码超出表示范围时，才发生溢出。

### 浮点数的加减法运算

#### 对阶

> 使阶码相等

先求阶差，**以小向大看齐原则**，将阶码小的尾数右移一位，阶加1，直到阶相等。右移时，舍弃有效位会产生误差，**影响精度**。

:star2: 对阶不涉及左规！

#### 尾数求和

按定点数加减法运算规则处理

#### 规格化

IEEE754规格化尾数的形式为±1.x···x

1. 右规：当结果为±1x.x···x时。尾数右移一位，阶码加1。最高位被移到小数点前一位作为隐藏位，最后一位被移出时，需要考虑舍入。
2. 左规：当结果为±0.0···01x···x时。尾数左移一位，阶码减1。可能需要多次左规，直到第一位1移到小数点左边。

:heavy_exclamation_mark:注意：①左规一次相当于乘2，右规一次相当于除2；②需要右规时，只需要进行一次。

#### 舍入

:star2::star2:==对阶==和==尾数右规==时，可能会对尾数进行右移，一般将低位移出的两位保留下来，参与中间过程运算，最后将运算结果进行舍入，还原成IEEE754格式。

常见舍入方法：

1. 0舍1入法：最高位为0，则舍去，最高位为1，则末尾加1。可能会使尾数溢出，需再做一次右规。
2. 恒置1法：末尾始终置1。
3. 截断法：直接丢弃。最简单。

#### 溢出判断

正指数超过最大允许值（127或1023），发生指数上溢，产生异常。

负指数超过最小允许值（-126或-1022），则发生指数下溢，通常按机器0处理。

1. 右规和尾数舍入。数值很大的尾数舍入时，可能因为末尾加1发生尾数溢出，需要通过右规调整尾数和阶。右规时阶➕1，导致阶增大。当前阶为1111_1110时，➕1会变成1111_1111而发生指数上溢。
2. 左规。左规时阶➖1，导致阶减小。判断阶码是否全0来确定是否指数下溢。

#### C语言中的浮点数类型



:heavy_exclamation_mark: 做题时注意IEEE 一定是规格化的数
