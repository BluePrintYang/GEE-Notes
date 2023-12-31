# 计算机组成原理

## Content

1. [计算机系统概述](chap1.md)
2. [数据的表示和运算](chap2.md)
3. [存储系统](chap3.md)
4. [指令系统](chap4.md)
5. [中央处理器](chap5.md)
6. [总线](chap6.md)
7. [输入/输出系统](chap7.md)

## 重点（or不熟悉）

- [x] 磁盘访问时间计算
- [x] 中断过程
- [x] 多核处理器
- [x] cache行的位数，标记+（LRU位+有效位+脏位）+数据位，容量再乘以行数
- [x] 总线部分
- [x] I/O 接口是什么
- [x] 溢出标志判断，进位/借位标志
- [x] 主频，CPI 相关计算  指令数 * CPI / 主频
- [x] 控制存储器与微指令
- [x] 数据通路
- [x] DMA 过程，开始和结束时是否都有中断请求
- [ ] 数据冒险

### 磁盘访问时间计算

- 寻道时间
- 平均旋转延迟时间：$\displaystyle\frac{60 \times 1000}{n \quad rpm} \times \frac12$ ms
- 传输时间：$\displaystyle\frac{60 \times 1000}{n \quad rpm \times [每磁道m扇区]}$ ms

### 中断过程

内部异常，外部中断

CPU在统一时刻**每条指令执行阶段结束前**向接口发出中断查询信号，获取I/O的中断请求，也就是说， CPU响应中断的时间是在每条指令执行阶段的结束时刻。

中断隐指令的任务:

1. 关中断。在中断服务程序中，为保护中断现场不会再被新的中断打断，就必须关中断
2. 保存断点。保证“回得来”
3. 引出中断服务程序

由硬件产生向量地址，再由向量地址找到入口地址

**中断服务程序的任务**

1. 保护现场。保存通用寄存器和状态寄存器的内容。
2. 开中断。允许更高级中断请求。
3. 中断服务。主体部分。例如将需要打印的字符传送到打印机的缓冲存储器中。
4. 关中断。保证恢复现场不被中断
5. 恢复现场。通过出栈或取值把之前保存的信息传送回寄存器中。
6. 中断返回。通过中断返回指令回到原程序断点处。

### 多核处理器

不存在MISD（多指令单数据）

向量处理器是 SIMD 的变体

### 总线

数据总线，地址总线，控制总线。

应答信号通过控制总线传输

USB标准：用于设备和设备控制器（I/O 接口）之间互连；PCI、AGP、PCI-E通常用于主存、网卡、视频卡等

总线之间需通过桥接器相连。PCI-E采用串行数据包传输

### I/O 接口

主机与外设之间的交接界面

I/O 指令为特权指令

I/O 端口：I/O 接口中用于缓存信息的，可直接被CPU访问的寄存器

- 统一编址
- 独立编址

### [溢出标志判断，进位/借位标志](chap2.md#溢出判别方法)

溢出标志OF：**对于无符号数无意义**

进/借位标志CF：表示无符号数，加法时CF=1表示结果溢出；减法时CF=1表示有借位；**对于有符号数CF无意义**

### 数据通路

数据在功能部件之间传送的路径

数据通路由控制部件控制，不包括控制部件。

包括程序计数器，ALU，通用寄存器，状态寄存器，异常和中断处理逻辑等

### 控制存储器与微指令

每条机器指令转化为一段微程序并存入一个专门的存储器（控制存储器）

#### 微指令地址形成方式

1. 直接由微指令的下地址字段指出
2. 根据机器指令的微操作码形成

### 程序员可见不可见寄存器

可见：通用寄存器，程序状态字寄存器，基址寄存器

不可见：存储器地址寄存器，存储器数据寄存器，指令寄存器

### DMA 过程

1. 预处理。I/O设备向DMA控制器发送DMA请求，DMA控制器向CPU发送总线请求
2. 数据传送
3. 后处理。DMA控制器向CPU发送中断请求
