# 5. 传输层

## 传输层提供的功能

### 传输层的功能

不同主机进程之间（端到端）

- 端到端通信
- 复用和分用
- 差错检测（首部和数据部分）
- 提供两种不同传输协议（面向连接 TCP、无连接 UDP）

### 传输层的寻址与端口

#### 端口的作用

标识主机进程

#### 端口号

长度16bit 65536 个端口

#### 套接字

### 无连接服务与面向连接服务

## UDP协议

### UDP数据报

#### UDP概述

- 无需建立连接
- 无连接状态
- 分组首部开销小 8B
- 没有拥塞控制
- 支持一对一、一对多、多对一和多对多

完整报文，不分割

#### UDP的首部格式

> 首部和用户数据
>
> 8B，4个2B字段

- 源端口
- 目的端口
- 长度：包括首部和数据，最小 8
- 校验和：可选

### UDP校验

![UDP 首部与伪首部](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231014170220318.png)

增加 12B 伪首部，既不向下传递又不向上递交

校验首部和数据

## TCP协议

### TCP协议的特点

- 面向连接
- 只能有两个端点，一对一，点对点
- 可靠交付
- 全双工
- 面向字节流

### TCP报文段

首部 20B，后面 4N 字节，长度为 4B 整数倍

![TCP报文段](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231014170119509.png)

- 源端口和目的端口：各 2B
- 序号：4B，$0 \textasciitilde 2^{32} -1$，本报文段所发送数据的第一个字节的序号
- 确认号：4B，期望收到==下一个报文段的第一个序号==
- 数据偏移（首部长度）：4位，单位是 4B，能表示最大 15，因此最大首部长度为 60B
- 保留：6位
- 紧急位URG：1有效
- 确认位ACK：1有效
- 推送位
- 复位位：TCP 连接出现严重差错
- 同步位SYN
- 终止位FIN
- 窗口：2B，范围为 $0 \textasciitilde 2^{16}-1$，允许对方发送的数据量
- 校验和：2B，包括首部和数据
- 紧急指针：2B
- 选项：可变
- 填充：使首部长度为 4B 整数倍

### TCP连接管理

解决三个问题：

1. 确认对方存在
2. 允许双方协商一些参数
3. 对运输实体资源进行分配

TCP 连接的端口是套接字

#### TCP连接的建立

![三次握手建立TCP连接](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231014170258817.png)

#### TCP连接的释放

![四次挥手释放TCP连接](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231014170438858.png)

1. 连接建立
   1. SYN = 1, seq = x
   2. SYN = 1, ACK = 1, seq = y, ack = x + 1
   3. ACK = 1, seq = x + 1, ack = y + 1
2. 释放连接
   1. FIN = 1, seq = u
   2. ACK = 1, seq = v, ack = u + 1
   3. FIN = 1, ACK = 1, seq = w, ack = u + 1
   4. ACK = 1,seq = u + 1, ack = w + 1

==ACK、SYN、FIN 一定为1==

### TCP可靠传输

#### 序号

建立在字节流之上，值为所发送的报文的第一个字节的序号

#### 确认

期望收到==下一个报文段的第一个序号==

累计确认

#### 重传

1. 超时
2. 冗余 ACK：收到对同一个报文的3个冗余 ACK

### TCP流量控制

数据链路层的滑动窗口大小不能动态变化，传输层可以动态变化

### TCP拥塞控制

防止过多数据注入网络，表现为通信时延增加

- 接收窗口 rwnd：反映接收方容量
- 拥塞窗口 cwnd：反映网络的当前容量

$\text{发送上限} = min[rwnd, cwnd]$

#### 慢开始和拥塞避免

##### 慢开始

先令 cwnd = 1，经过一个 RTT（往返时延） 之后加倍，增大到阈值 ssthresh 之后，改用拥塞避免

##### 拥塞避免

每经过一个往返时延把 cwnd 加 1

##### 拥塞处理

出现拥塞，将 ssthresh 设置为出现拥塞时的发送方的 cwnd 的一半（但不小于2）。拥塞窗口重新设置为 1，执行慢开始

若 2cwnd > sshthred，则下一个 RTT 后 cwnd = ssthred

#### 快重传和快恢复

##### 快重传

收到三个冗余ACK报文，直接重传

##### 快恢复

发送方连续收到3个冗余 ACK 时，执行“乘法减小”算法，把 ssthresh 设置为此时发送方 cwnd 的一半，将 cwnd 设置为 ssthresh，执行拥塞避免算法

跳过了慢启动