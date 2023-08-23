# 2. 一维随机变量及其分布

## 随机变量、分布函数

### 随机变量

#### 定义

#### 表示事件

### 分布函数

#### 分布函数定义

$F(x) = P \set{ X \leq x }, x \in (-\infty, +\infty)$

$几何意义：X 落在区间 (-\infty, x] 上的概率$

#### 分布函数性质

1. $0 \leq F(x) \leq 1, F(-\infty)=0, F(+\infty)=1$

2. F(x) 单调不减
3. F(x) 处处右连续

#### 分布函数计算概率

$P \set{ a \lt X \leq b } = F(b) - F(a)$

$P \set{ X = x_0 }=F(x_0) - F(x_0 - 0), 其中F(X_0 -0)=\lim \limits_{x \to x_0^-}F(x)$

## 离散型随机变量及其概率分布

### 离散型随机变量

#### 离散型随机变量的定义

#### 概率分布律

#### 分布律的性质

### 常见的离散型随机变量

#### 0-1分布

$$X \sim B(1,p) 或 X \sim
\begin{pmatrix}
  0 & 1 \\
  1-p & p
\end{pmatrix}$$

$P\set{X=k}=p^k(1-p)^{1-k}, k=0,1...$

#### 二项分布

> n次独立重复实验中事件A发生的次数X，P(A)=p

$X \sim B(n,p): P\set{X=k}=C_n^kp^k(1-p)^{n-k}, k=0,1,...,n$

#### 泊松分布

$X \sim P(\lambda): P\set{X=k}= \cfrac{\lambda^k}{k!}e^{-\lambda}, k = 0,1,2,...,\lambda > 0$

#### 几何分布

> 独立重复实验中事件A首次发生时进行的实验次数X服从几何分布

$P\set{X=k}=(1-p)^{k-1}p, k=1,2...,0 \lt p \lt 1$

#### 超几何分布

> 古典概型

## 泊松定理

$X \sim B(n,p) n很大，p很小，np适中，X 近似为泊松分布 X \sim P(np)$

## 连续型随机变量及其概率分布

### 连续型随机变量及其概率密度

1. X为连续型随机变量，其分布函数F(X)必为连续函数
2. $F'(x)=f(x), F(x)=\int_{-\infty}^{x}f(t)dt$

f(x)是某一连续型随机变量X的概率密度的充要条件是

1. $f(x) \geq 0$

2. #### $\int_{-\infty}^{+\infty}f(x)dx=1$

#### 概率的计算

$P\set{a \lt x \leq b} = P\set{a \leq x \leq b} = P\set{a \leq x \lt b}=P\set{a \lt x \lt b}=F(A)-F(B)=\int_a^bf(x)dx$

### 常见的连续型随机变量

#### 均匀分布

$X \sim U(a,b)$

$$概率密度为f(x)=
\begin{dcases}
  \cfrac{1}{b-a}, & a \leq x \leq b \\
  0, & 其他
\end{dcases}$$

$$分布函数为F(x)=
\begin{dcases}
  0, & x \lt a, \\
  \cfrac{x-a}{b-a}, & a \leq x \lt b, \\
  1, & x \geq b
\end{dcases}$$

#### 指数分布

$X \sim E(\lambda)$

> 无记忆性 $P\set{X > s+t | X > s} = P\set{X > t}$

$$概率密度f(x)=
\begin{dcases}
  \lambda e^{-\lambda x}, & x > 0, \\
  0, & x \leq0,
\end{dcases} 参数 \lambda > 0$$

$$分布函数F(x)=
\begin{dcases}
  0, & x \lt 0, \\
  1 - e^{-\lambda x}, & x \geq 0
\end{dcases}$$

#### 正态分布

$X \sim N(\mu,\sigma^2)$

$$密度函数f(x)=\cfrac{1}{\sqrt{2\pi}\sigma}e^{-\cfrac{(x-\mu)^2}{2\sigma^2}}$$

$$分布函数F(x)=\int_{-\infty}^x\cfrac{1}{\sqrt{2\pi}\sigma}e^{-\cfrac{(t-\mu)^2}{2\sigma^2}}dt$$

性质

$f(x)关于 x=\mu对称；F(x)为单调增加的函数$

$若\mu=0,\sigma=1,即X \sim N(0,1),称X服从标准正态分布$

$概率密度:\varphi(x)=\cfrac{1}{\sqrt{2\pi}}e^{-\cfrac{x^2}{2}},分布函数\varPhi(x)=\int_{-\infty}^x\cfrac{1}{\sqrt{2\pi}}e^{-\cfrac{t^2}{2}}dt$

$\varPhi(-x) = 1 - \varPhi(x)$

$若X \sim N(\mu,\sigma^2)，则\cfrac{X-\mu}{\sigma} \sim N(0,1)，从而有 P\set{a \lt X\leq b}=\varPhi(\cfrac{b-\mu}{\sigma})-\varPhi(\cfrac{a-\mu}{\sigma})$

## 随机变量函数的分布

### X为离散型

### X为连续型

$X的概率密度为f_X(x),则Y=g(x)可能为连续型，也可能为离散型，甚至既不连续也不离散。$

1. Y是离散型➡️求分布律
2. Y是连续型➡️先求分布函数，再求密度
3. Y既不连续也不离散➡️只求分布函数

分布函数法求Y的分布函数

$F_Y(y)=P\set{Y\leq y}=P\set{g(X)\leq y}=P\set{\varphi(y) \leq X \leq \psi(y)}=\int_{\varphi(x)}^{\psi(x)}f_X(x)dx$
