# 6. 应用层

## 网络应用模型

### 客户/服务器模型

1. 各计算机地位不平等
2. 客户机不直接通信
3. 可扩展性不佳

服务器的性能好坏决定了整个系统的性能

### P2P模型

任何一对计算机直接通信

PPlive、BitTorrent

优点：

1. 减轻了服务器的计算压力
2. 多个客户机之间可以直接通信
3. 可扩展性好
4. 网络健壮性强

获取服务的同时，还要给其他结点提供服务

缺点：会占用较多的内存，影响整机速度。经常进行 P2P 下载还会对硬盘造成较大损伤

## 域名系统（DNS）

Domain Name System

采用 C/S 模型，协议运行在 UDP 之上，采用 53 号端口

### 层次域名空间

1. 英文不区分大小写
2. 除连字符（-）外不能使用其他标点符号
3. 每个标号不超过63个字符，多标号组成的完整域名不超过255个字符
4. 级别最低的域名写在最左边，最高的顶级域名写在最右边

![域名空间树状结构](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017152100596.png)

### 域名服务器

域名系统被设计为一个联机分布式的数据库系统

没有一台域名服务器具有因特网上所有主机的映射

#### 根域名服务器

所有的根域名服务器都知道所有的顶级域名服务器的IP地址

#### 顶级域名服务器

管理该顶级域名服务器注册的所有二级域名

#### 授权域名服务器（权限域名服务器）

#### 本地域名服务器

![DNS 层次结构](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017152740808.png)

### 域名解析过程

将域名映射为 IP 地址或把 IP 地址映射为域名。UDP 数据报方式

1. 递归查询：给根域名服务造成负载过大，几乎不使用
2. 递归与迭代相结合

![两种域名解析方式](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017153040065.png)

为提高效率，使用高速缓存。由于映射关系非永久，一段时间后丢弃缓存。

## 文件传输协议（FTP）

### FTP的工作原理

TCP

### 控制连接与数据连接

控制端口 21 数据端口 20

#### 控制连接

控制信息采用 7位 ASCII 格式传送

整个会话期间一直保持打开状态

#### 数据连接

- 主动模式 PORT：服务器连接到客户机的端口
- 被动模式 PASV：客户机连接到服务器的端口

选择权在客户端

NFS 网络文件系统：允许进程打开一个远程文件，在某个特定位置读写。可使用户复制一个大文件中的很小片段，而不需要复制整个大文件。

## 电子邮件

### 电子邮件系统的组成结构

异步通信方式

- 用户代理：用户与电子邮件系统的接口。通常为电子邮件客户端软件
- 邮件服务器：发送和接收邮件，向发件人报告邮件传送情况。采用客户/服务器工作方式，必须能同时充当客户和服务器
- 电子邮件使用协议：发送协议（如SMTP）与读取协议（如POP3）

### 电子邮件格式与MIME

#### 电子邮件格式

电子邮件：

1. 信封
2. 内容
   1. 首部
   2. 主体

用户写好首部后，邮件系统自动将信封所需的内容提取出来并写在信封上，用户不需要亲自填写信封上的信息

首部包含一些首部行（Key:Value），最重要的关键字是 `To`（必须，一个或多个收件人地址） 和 `Subject`（可选，邮件主题）`From`（必填，邮件系统自动填入）

多用途网际邮件扩充（MIME）

Multipurpose Internet Mail Extensions

SMTP 只能传送一定长度的 ASCII 码邮件

MIME 并未改动 SMTP 或取代它，只是定义了传送非 ASCII 码的编码规则

包含：

1. 5个邮件首部字段，MIME版本、内容描述、内容标识、传送编码和内容类型
2. 定义了许多邮件内容的格式
3. 定义了传送编码，可对任何内容格式进行转换

### SMTP和POP3

#### SMTP（Simple Mail Transfer Protocol）

TCP 连接，端口号 25，Push

1. 连接建立：
2. 邮件传送
3. 连接释放

#### POP3（Post Office Protocol）和IMAP

非常简单但功能有限的邮件读取协议

TCP，端口号110，Pull

另一个邮件读取协议是因特网报文存取协议（IMAP）

维护了会话用户的状态信息，另一特性是允许用户代理只获取报文的某些部分

基于万维网的电子邮件，如 Hotmail、Gmail等

特点：用户浏览器与 Hotmail 或 Gmail 之间的邮件发送和接收使用 HTTP，仅在不同邮件服务器之间传送邮件时才使用 SMTP

## 万维网（WWW）

World Wide Web 分布式、联机式的信息存储空间

### WWW的概念与组成结构

三个标准：

1. 统一资源定位符（URL）
2. 超文本传输协议（HTTP）
3. 超文本标记语言（HTML）

URL 一般形式：<协议>://<主机>:<端口>/<路径>

URL 不区分大小写

### 超文本传输协议（HTTP）

HyperText Markup Language

面向事务的应用层协议

#### HTTP的操作过程

#### HTTP的特点

TCP 作为传输层协议，保证数据可靠传输，HTTP 本身是无连接的，无状态的

无状态特性使服务器更容易支持大量并发的 HTTP 请求

HTTP 既可使用非持久连接，也可使用持久连接（HTTP/1.1 支持）

- 非持久连接：对于每个网页元素对象的传输，都需要单独建立一个 TCP 连接
- 持久连接：发送响应后仍保持这条连接
  - 非流水线：收到前一个响应才能发出下一个请求
  - 流水线（HTTP/1.1 默认）：每遇到一个对象引用就立即发出一个请求

![HTTP 连接](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017161258134.png)

#### HTTP的报文结构

面向文本的，报文中每个字段都是一些 ASCII 码串，每个字段长度都是不确定的

- 请求报文
- 响应报文

![HTTP 报文结构](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017161330992.png)

![请求报文常见方法](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017161432286.png)

![常见应用层协议](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231017161456179.png)