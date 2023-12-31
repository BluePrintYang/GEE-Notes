# 1. 计算机网络体系结构

## 计算机网络概述

### 概念

将分散的、具有独立功能的计算机系统，通过通信设备与线路连接起来，由功能完善的软件实现资源共享和信息传递的系统

互连的、自治的计算机系统的集合

#### 广义观点

实现了远程信息处理的系统或能进一步达到资源共享的系统

#### 资源共享观点

以能够相互共享资源的方式互连起来的自治计算机系统的集合

1. 目的——资源共享
2. 组成单元——分布在不同地理位置的多台独立的自治计算机
3. 网络中的计算机必须遵循的统一规则——网络协议

用户透明性观点

### 组成

组成部分看：硬件、软件、协议

工作方式看：边缘部分和核心部分

功能组成看：通信子网和资源子网

### 功能

#### 数据通信

最基本最重要的功能

#### 资源共享

#### 分布式处理

#### 提高可靠性

#### 负载均衡

### 分类

#### 按分布范围分类

1. 广域网（WAN）
2. 城域网（MAN）
3. 局域网（LAN）
4. 个人区域网（PAN），无线个人区域网（WPAN）

局域网使用广播技术，广域网使用交换技术

#### 按传输技术分类

1. 广播式网络
2. 点对点网络

是否使用存储转发和路由选择机制是点对点式网络与广播式网络的重要区别，广域网基本都属于点对点网络

#### 按拓扑结构分类

1. 总线形
2. 星形
3. 环形
4. 网状

#### 按使用者分类

1. 公用网
2. 专用网

#### 按交换技术分类

1. 电路交换
2. 报文交换
3. 分组交换

#### 按传输介质分类

### 标准化工作

### 性能指标

1. 带宽
2. 时延
3. 时延带宽积
4. 往返时延（Round-trip Time, RTT）
5. 吞吐量
6. 速率
7. 信道利用率

## 计算机网络体系结构参考模型

### :star2:分层结构

第 n 层实现的服务为第 n+1 层所利用。第 n 层称为服务提供者，第 n+1 层则服务于用户

- 服务数据单元（SDU）：为完成用户所要求的功能而应传送的数据
- 协议控制单元（PCI）：控制协议操作的信息
- 协议数据单元（PDU）：对等层次之间传送的数据单元称为该层的PDU。物理层为比特，数据链路层为帧，网络层为分组，传输层为报文段

$$
\mathrm{~}n\text{-}\mathrm{SDU}+n\text{-}\mathrm{PCI}=n\text{-}\mathrm{PDU}=(n-1)\text{-}\mathrm{SDU}
$$

### 协议、接口、服务的概念

#### 协议

- 语法：数据传输格式
- 语义：所要完成的功能
- 同步：各种操作的条件、时序关系

#### 接口

同一结点内相邻两层间交换信息的连接点

同一结点相邻两层的实体服务通过服务访问点（Service Access Point，SAP）进行交互。

SAP 是一个抽象的概念，实际上是一个逻辑接口

#### 服务

下层为紧邻的上层提供的功能调用，是垂直的。

1. 面向连接服务和无连接服务
2. 可靠服务和不可靠服务
3. 有应答服务和无应答服务

### ISO/OSI参考模型和TCP/IP模型

#### OSI 参考模型（参考）

7层：物理层、数据链路层、传输层、网络层、会话层、表示层、应用层

低三层为通信子网；高三层为资源子网。

- 数据链路层功能：成帧、差错控制、流量控制和传输管理
- 网络层：路由选择、流量控制、拥塞控制、差错控制和网际互连
- 传输层：为端到端连接提供流量控制、差错控制、服务质量、数据传输管理
- 表示层：提供数据压缩、加密和解密的数据表示变换功能

应用层的服务访问点称为用户界面

#### TCP/IP 模型（实际使用）

4层：网络接口层、网际层、传输层和应用层

- 网络层：不保证可靠传输，尽最大努力交付
- 传输层：包含面向连接和无连接

#### TCP/IP 模型与 OSI 模型的比较

:star2:

- OSI 参考模型在网络层支持无连接和面向连接的通信，但在传输层仅有面向连接的通信
- TCP/IP 模型在网际层仅有无连接的通信模式，但传输层支持无连接和面向连接两种模式