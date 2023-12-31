# 6. 总线

## 总线概述

### 总线基本概念

#### 总线的定义

> 一组能为多个部件分时共享的公共信息传送线路

- 分时：同一时刻只允许一个部件向总线发送信息
- 共享：总线上可以挂接多个部件，==多个部件可同时从总线上接收相同信息==

#### 总线设备

- 主设备：获得总线控制权的设备
- 从设备：被主设备访问的设备，只能响应从主设备发来的各种总线命令

#### 总线特征

- 机械特性：尺寸、形状
- 电气特性：传输方向、有效电平范围
- 功能特性：每根传输线的功能
- 时间特性：信号和时序的关系

### 总线分类

#### 片内总线

芯片内部的总线，CPU 内部寄存器与寄存器之间、寄存器与 ALU 之间的公共连接线

#### 系统总线

> 计算机系统内各功能部件之间相互连接的总线

1. 数据总线：传输各功能部件之间的数据信息，双向，位数与机器字长、存储字长有关
2. 地址总线：数据总线上的源数据或目的数据所在的主存单元或I/O端口的地址，==单向==，位数与主存地址空间大小有关
3. 控制总线：传输控制信息，包括 CPU 送出的控制命令和==主存（或外设）返回 CPU 的反馈信号==

:heavy_exclamation_mark:数据通路：各个功能部件通过数据总线连接形成的==数据传输路径==
数据通路表示的是数据流经的路径，而数据总线是承载的介质

#### I/O总线

> 连接中低速的I/O设备

#### 通信总线

> 计算机系统之间或计算机系统与其他系统之间传送信息的总线，也称外部总线

### 系统总线的结构

#### 单总线结构

> CPU、主存、I/O设备挂在一组总线上，相互之间可直接交换信息

- 优点：结构简单，成本低，易于接入新设备
- 缺点：带宽低、负载重，多个部件只能争用唯一的总线，不支持并发传送操作

#### 双总线结构

> 一条主存总线（CPU、主存与通道），一条I/O总线（外部设备与通道）

- 优点：将低速I/O设备分离出来，实现了存储器总线和I/O总线分离
- 缺点：需要增加通道等硬件设备

#### 三总线结构

> 主存总线、I/O总线、直接访问（DMA）总线

- 优点：提高了I/O设备的性能，使其更快地响应命令，提高系统吞吐量
- 缺点：系统工作效率较低

### 常用的总线标准

1. ISA
2. EISA
3. VESA
4. PCI
5. AGP
6. PCI-E
7. RS-232C
8. USB
9. PCMCIA
10. IDE
11. SCSI
12. SATA

### 总线的性能指标

## 总线事务和定时

> 总线在双方交换数据的过程中需要时间上配合关系的控制，实质是一种协议或规则

### 总线事务

> 从请求总线到完成总线使用的操作序列

1. 请求阶段
2. 仲裁阶段
3. 寻址阶段
4. 传输阶段
5. 释放阶段

传输阶段，主、从设备之间一般只能传输一个字长的数据

**突发（猝发）传送方式**能进行连续成组的数据传送，直到一组数据全部传送完毕后，再释放总线

### 同步定时方式

> 采用一个统一的时钟信号来协调发送和接收双方的传送定时关系

- 优点：传送速度快，有较高的传输速率；总线控制逻辑简单
- 缺点：主从设备属于强制性同步；不能及时进行数据通信的有效性检验，可靠性较差

适用于总线长度较短及总线所接部件的存取时间比较接近的系统

### 异步定时方式

> 主设备提出交换信息的“请求”信号，经接口传送到从设备；从设备接到主设备的请求后，通过接口向主设备发出“回答”信号

- 优点：总线周期长度可变，能保证两个工作速度相差很大的部件或设备之间可靠地进行信息交换，自动适应时间的配合
- 缺点：比同步控制方式稍复杂一点，速度比同步定时方式慢

1. 不互锁方式：主设备发出请求信号后，不必等到接到从设备的回答信号，而是经过一段时间便撤销。从设备接到请求信号后，发出回答信号，经过一段时间后自动撤销回答信号
2. 半互锁方式：主设备发出请求信号后，必须接到从设备的回答信号后，才撤销请求信号，有互锁关系；从设备接到请求信号后，发出回答信号，不必等待获取主设备的请求信号撤销，而是隔一段时间后自动撤销回答信号，不存在互锁关系。
3. 全互锁方式：主设备发出请求信号后，必须接到从设备的回答信号后，才撤销请求信号；从设备接到请求信号后，必须获取主设备的请求信号撤销后，撤销回答信号