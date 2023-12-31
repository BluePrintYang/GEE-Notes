# 4. 指令系统

## 指令系统

> 指令系统（指令集）

### 指令的基本格式

包括：操作码字段和地址码字段

指令长度相同：定长指令字结构 ➡️ 执行速度快，控制简单

指令长度不同：变长指令字结构 ➡️ 多为字节的整数倍

#### 零地址指令

#### 一地址指令

#### 二地址指令

#### 三地址指令

#### 四地址指令

### 定长操作码指令格式

> 有利于简化计算机硬件设计，提高指令译码和识别速度

### 扩展操作码指令格式

注意

1. 不允许短码是长码的前缀
2. 各指令操作码不能重复

> 通常频率高的指令分配较短的操作码

### 指令的操作类型

#### 数据传送

#### 算术和逻辑运算

#### 移位操作

#### 转移操作

#### 输入输出操作

## 指令的寻址方式

> 寻找指令或操作数有效地址的方式
>
> 记号
>
> A：形式地址（A可以是寄存器编号，也可以是内存地址）
>
> EA：有效地址
>
> (A)：地址A的数值或相应内存单元的数值

### 指令寻址和数据寻址

#### 指令寻址

1. 顺序寻址
2. 跳跃寻址

#### 数据寻址

### 常见的数据寻址方式

#### 隐含地址

#### 立即（数）寻址

#### 直接寻址

#### 间接寻址

#### 寄存器寻址

#### 寄存器间接寻址

#### 相对寻址

#### 基址寻址

#### 变址寻址

#### 堆栈寻址

## 程序的机器级代码表示

### 常用汇编指令介绍

#### 相关寄存器

#### 汇编指令格式

- AT&T	源	目	内存寻址用( )	寄存器前面加%	立即数前面加$
- Intel	源	目	内存寻址用 [ ]

#### 常用指令

sub bx, ax 是 bx - ax 然后存到bx中

### 过程调用的机器级表示

### 选择语句的机器级表示

### 循环语句的机器级表示

## CISC和RISC的基本概念

### 复杂指令系统计算机（CISC）

[Complex instruction set computer](https://en.wikipedia.org/wiki/Complex_instruction_set_computer)

特点

1. 指令系统复杂庞大，指令数目200条以上
2. 指令长度不固定，指令格式多，寻址方式多
3. 可以访存的指令不受限制
4. 各种指令使用频率相差很大
5. 各种指令的执行时间相差很大
6. 控制器大多采用微程序控制。指令复杂无法采用硬布线
7. 难以用优化编译生成高效的目标代码

### 精简指令系统计算机（RISC）

[Reduced instruction set computer](https://en.wikipedia.org/wiki/Reduced_instruction_set_computer)

特点

1. 选取使用频率最高的一些简单指令，复杂指令由简单指令组合实现
2. 指令长度固定，指令种类少，寻址方式少
3. 只有 Load/Store 指令访存
4. CPU 中通用寄存器的数量相当多
5. 一定采用指令流水线技术，大部分指令在一个时钟周期内完成
6. 以硬布线控制为主，不用或少用微程序控制
7. 特别重视编译优化工作

从指令兼容性来看，CISC 大多能实现软件兼容；RISC 简化了指令系统，大多数 RISC 不能与老机器兼容

### CISC和RISC的比较

1. RISC 更能充分利用 VLSI 芯片的面积
2. RISC 更能提高运算速度
3. RISC 便于设计，可降低成本，提高可靠性
4. RISC 有利于编译程序代码优化

![CISC和RISC的比较](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231123164928215.png)
