# 1. 计算机系统概述

## 操作系统的基本概念

### 操作系统的概念

> 操作系统是指控制和管理整个计算机系统的硬件与软件资源，合理地组织、调度计算机的工作与资源的分配，进而为用户和其他软件提供方便接口与环境的程序集合。
>
> 操作系统是计算机系统中最基本的系统软件。

### 操作系统的特征

#### 1. 并发

> 两个或多个事件在同一时间间隔内发生

同一时间间隔➡️并发

同一时刻➡️并行

多道程序环境下，一段时间内宏观上有多道程序在同时执行，而在每个时刻，单处理机环境下实际仅有一道程序执行。微观上这些程序仍是分时交替执行的。

操作系统的并发性是通过分时得以实现的。

#### 2. 共享

> 系统中的资源可供内存中多个并发执行的进程共同使用

##### （1）互斥共享方式

> 一段时间内只允许一个进程访问。这种资源称为**临界资源**。

##### （2）同时访问方式

> 允许在一段时间内由多个进程“同时“访问。
>
> 这里的”同时“通常是宏观上的，微观上，这些进程可能是交替地对该资源进行访问。

典型资源➡️磁盘设备

并发和共享是操作系统的两个<u>最基本</u>的特征，两者之间互为存在的条件：

1. 资源共享是以程序并发为条件的。若系统不允许程序并发，则自然不存在资源共享问题；
2. 若系统不能对资源共享实施有效的管理，则必将影响到程序的并发执行，甚至根本无法并发执行。

#### 3. 虚拟

> 把物理上的实体变为若干逻辑上的对应物。

虚拟处理器：利用多道程序设计将一个物理上的CPU虚拟为多个逻辑上的CPU

虚拟存储器：将一台机器上的物理存储器变为虚拟存储器，从逻辑上扩充存储器的容量

操作系统的虚拟技术可归纳为：时分复用技术➡️处理器的时分复用；空分复用技术➡️虚拟存储器

#### 4. 异步

> 多道程序环境允许多个程序并发执行，但由于资源限制，进程的执行并不是一贯到底的，而是走走停停，以不可预知的速度向前推进

### 操作系统的目标和功能

#### 操作系统作为计算机系统资源的管理者

##### （1）处理机管理

> 多道程序环境下，处理机的分配和运行都是以进程（或线程）为基本单位，因而对处理机的管理可归结为对进程的管理。

进程管理的主要功能包括进程控制、进程同步、进程通信、死锁处理、处理机调度等。

##### （2）存储器管理

> 给程序提供良好环境，方便用户使用及提高内存利用率

包括内存分配与回收、地址映射、内存保护与共享和内存扩充等功能。

##### （3）文件管理

包括文件存储空间的管理、目录管理及文件读写管理和保护等。

##### （4）设备管理

> 完成用户的I/O请求，方便用户使用各种设备，并提高设备利用率

包括缓冲管理、设备分配、设备处理和虚拟设备等。

#### 操作系统作为用户与计算机硬件系统之间的接口

##### （1）命令接口

> 用户利用这些操作命令来组织和控制作业的执行

联机控制方式

###### 联机命令接口

> 又称交互式命令接口，适用于分时或实时系统的接口

由一组键盘操作命令组成。用户通过控制台或终端输入命令

###### 脱机命令接口

> 又称批处理命令接口，适用于批处理系统

由一组作业控制命令组成。

##### （2）程序接口

> 由一组系统调用（也称广义指令）组成。

最为流行的是图形用户界面（GUI），即图形接口。

图形接口不是操作系统的一部分，但图形接口所调用的系统调用命令是操作系统的一部分。

#### 操作系统实现了对计算机资源的扩充

裸机：没有任何软件支持

扩充机器（或虚拟机）：覆盖了软件的机器

操作系统所提供的资源管理功能和方便用户的各种服务功能，将裸机改造成功能更强、使用更方便的机器。

## 操作系统的发展历程

### 手工操作系统（此阶段无操作系统）

> 所有工作都要人工干预

突出缺点：

- 用户独占全机，资源利用率低
- CPU 等待手工操作，CPU 的利用不充分

### 批处理阶段（操作系统开始出现）

解决人机矛盾及 CPU 与 I/O 设备之间速度不匹配的矛盾

#### 单道批处理系统

> 系统对作业的处理是成批进行的，但内存中始终保持一道作业

### 分时操作系统

### 实时操作系统

### 网络操作系统和分布式计算机系统

### 个人计算机操作系统

## 操作系统运行环境

### 处理器运行模式

### :star2: 中断和异常的概念

#### 中断和异常的定义

- 中断（Interruption）也称外中断，指 CPU 执行指令外部的事件
- 异常（Exception） 也称内中断，指来自 CPU 执行指令内部的事件
  - 如程序非法操作码、地址越界、运算溢出、虚存系统缺页及专门的陷入指令
  - 异常不能被屏蔽

![中断与异常](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231123165932062.png)

#### 中断和异常的分类

外中断：

- 可屏蔽中断：通过 INTR 线发出的中断请求，通过改变屏蔽字可以实现多重中断
- 不可屏蔽中断：通过 NMI 线发出的中断请求，通常是紧急的硬件故障

异常：

- 故障：通常是指令引起的异常，如非法操作码、缺页故障、除数为0，运算溢出等
- 自陷：一种事先安排好的“异常“，用于调用操作系统内核程序，如条件陷阱指令
- 终止：出现了使 CPU 无法继续执行的硬件故障，如控制器出错、存储器校验错

### 系统调用

## 操作系统结构

## 操作系统引导

## 虚拟机

### 虚拟机的基本概念

