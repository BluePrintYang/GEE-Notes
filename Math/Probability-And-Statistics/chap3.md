# 3. 二维随机变量及其分布

## 多维随机变量及其分布

### 多维随机变量

#### 定义

$设X = X(\omega), Y = Y(\omega), \omega \in \Omega 是定义在同一样本空间上的两个随机变量，称二维随机变量 (X, Y) 为二维随机变量，\\
类似地，称 (X_1, X_2, \dotsb, X_n) 为n维随机变量$

### 随机变量的联合分布函数

#### 定义

$F(x, y) = P\set{(X \leq x) \cap (Y \leq y)} \xlongequal{记成} P\set{X \leq x, Y \leq y}, x,y \in (-\infty, +\infty)$

#### 性质

1. $0 \leq F(x, y) \leq 1, F(-\infty, -\infty) = F(-\infty, y) = F(x, -\infty) = 0, F(+\infty, +\infty) = 1$
2. $F(x, y)关于每个变量是单调不减的函数$
3. $F(x, y)关于每个变量右连续$
4. $对任意 x_1 \lt x_2, y_1 \lt y_2, 有 P\set{x_1 \lt X \leq x_2, y_1 \lt Y \leq y_2} = F(x_2, y_2) - F(x_2, y_1) - F(x_1, y_2) + F(x_1, y_1) \ge 0$

## 二维随机变量的概率分布、边缘分布和条件分布

### 理解二维离散型随机变量的概率分布、边缘分布和条件分布

#### 二维离散型随机变量的定义

(X, Y)的取值为有限或可列无穷多个点

#### （联合）概率分布律

$P\set{X = x_1, Y = y_1} = p_{ij}, i = 1,2,\dotsb;j = 1,2,\dotsb$

性质

1. $p_{ij} \ge 0$
2. $\displaystyle\sum_i\sum_j p_{ij} = 1$

#### 概率的计算

$P\set{(X, Y) \in D} = \displaystyle\sum_{(x_i, y_j) \in D} p_{ij}$

#### 二维离散型随机变量的边缘分布律

$P\set{X = x_i} = P\set{X = x_i, Y \lt +\infty} = \displaystyle\sum_{j} p_{ij} \xlongequal{记成} p_{i\cdot},i = 1,2,\dotsb;(二维表格横向求和)$
$P\set{Y = y_j} = P\set{X \lt +\infty, Y = y_i} = \displaystyle\sum_{i} p_{ij} \xlongequal{记成} p_{\cdot j},j = 1,2,\dotsb;(二维表格纵向求和)$

#### 二维离散型随机变量的条件分布律

$在 Y = y_i(p_{\cdot j} \gt 0) 的条件下， X的条件分布律为$
$P\set{X = x_i | Y = y_i} = \frac{p_{ij}}{p_{\cdot j}},i=1,2,\dotsb,也记为$

$$(X|Y=y_j) \sim
\begin{pmatrix}
   x_1 & x_2 & \cdots & x_i & \cdots \\
   \frac{p_{1j}}{p_{\cdot j}} & \frac{p_{2j}}{p_{\cdot j}} & \cdots & \frac{p_{ij}}{p_{\cdot j}} & \cdots
\end{pmatrix} 或$$

| X                    | $x_1$                        | $x_2$                        | $\cdots$ | $x_i$                        | $\cdots$ |
| -------------------- | ---------------------------- | ---------------------------- | -------- | ---------------------------- | -------- |
| $P\set{\cdot\|Y=y_j}$ | $\frac{p_{1j}}{p_{\cdot j}}$ | $\frac{p_{2j}}{p_{\cdot j}}$ | $\cdots$ | $\frac{p_{ij}}{p_{\cdot j}}$ | $\cdots$ |

$同理在X = x_i(p_{i\cdot} \gt 0) 的条件下， Y的条件分布律为$
$P\set{Y = y_j | X = x_i} = \frac{p_{ij}}{p_{i\cdot }},j=1,2,\dotsb$

### 理解二维连续型随机变量的概率密度、边缘密度和条件密度.会求与二维随机变量相关事件的概率

#### 二维连续型随机变量的定义

若存在非负可积函数f(x,y),使对任意的实数x,y有

$F(x,y) = \int_{-\infty}^x\int_{-\infty}^yf(u,v)dudv,$

则称(X,Y)是连续型的二维随机变量，函数f(x,y)称为(X,Y)的概率密度，或称为X和Y的联合概率密度

#### f(x,y)的性质

1. $f(x,y) \ge 0$
2. $\int_{-\infty}^{+\infty}\int_{-\infty}^{+\infty}f(x,y)dxdy = 1$

#### 概率的计算

$P\set{(X, Y) \in D} = \displaystyle\iint_{D}f(x,y)dxdy$

#### 二维连续型随机变量的边缘密度函数

$f_X(x) = \int_{-\infty}^{+\infty}f(x,y)dy, -\infty \lt x \lt +\infty$
$f_Y(y) = \int_{-\infty}^{+\infty}f(x,y)dx, -\infty \lt y \lt +\infty$

#### 二维连续型随机变量的条件概率密度

$在Y=y(f_Y(y) \gt 0) 的条件下，X的条件概率密度为$
$f_{X|Y}(x|y) = \frac{f(x,y)}{f_Y(y)}, -\infty \lt x \lt +\infty$

## 随机变量的独立性及不相关性

### 随机变量独立的定义

$F(x,y)是(X,Y)联合分布函数,F_X(x),F_Y(y)是边缘分布函数,若对于所有x,y有$

$P\set{X \le x, Y \lt y} = P\set{X \le x}P\set{Y \le y} 即 F(x,y) = F_X(x)F_Y(y)$

则随机变量X和Y相互独立

### 关于独立的两个结论

1. $Y与Y相互独立 \Leftrightarrow 对任意实数集合 L_1,L_2,有 P\set{X \in L_1, Y \in L_2} = P\set{X \in L_1}P\set{Y \in L_2}$
2. 设随机变量X与Y相互独立，若g(x)，h(y)是连续函数，则g(X)与h(Y)也相互独立
   $特别地，若X与Y相互独立，则X^2与Y^2相互独立，反之未必$

## 二维均匀分布和二维正态分布

### 二维均匀分布

> $(X,Y) \sim U(G)$
> 有界区域G面积为A

密度函数为

$$f(x,y) = \begin{dcases}
    \frac{1}{A}, & (x,y) \in G,\\
    0, &  (x,y) \notin G.
\end{dcases}$$

### 二维正态分布

> $(X \lt Y) \sim N(\mu_1, \mu_2; \sigma_1^2, \sigma_2^2; \rho) (\sigma_1 \gt 0, \sigma_2 \gt 0, |\rho| \lt 1)$

密度函数

$f(x,y) =\frac{1}{2\pi\sigma_1\sigma_2\sqrt{1-\rho^2}}e^{-\frac{1}{2(1-\rho^2)}[\frac{(x-\mu_1)^2}{\sigma_1^2}-2\rho\frac{(x-\mu_1)(y-\mu_2)}{\sigma_1\sigma_2}+\frac{(y-\mu_2)^2}{\sigma_2^2}]}$

## 随机变量简单函数的分布

### 当(X,Y)为二维离散型随机变量时

$已知P\set{X = x_1, Y = y_1} = p_{ij}, i = 1,2,\dotsb;j = 1,2,\dotsb,则Z=g(X,Y)也为离散型,且Z=g(X,Y)的分布律为P\set{Z=g(x_i,y_j)} = p_{ij}(i = 1,2,\dotsb;j = 1,2,\dotsb)$

### 当(X,Y)为二维连续型随机变量时

$已知(X,Y)的概率密度为f(x,y)，则Z=g(X,Y)可能为离散型，也可能为连续型，甚至既不是连续型也不是离散型。$

1. Y是离散型➡️求分布律
2. Y是连续型➡️先求分布函数，再求密度
3. Y既不连续也不离散➡️只求分布函数

#### 分布函数法

$设Z=g(X,Y)的分布函数为F_Z(z),则有$

$F_Z(z) = P\set{Z \le z} = P\set{g(X,Y) \lt z} = \displaystyle\iint_{g(x,y) \le z}f(x,y)dxdy, -\infty \lt z \lt +\infty$

$当Z=g(X,Y)为连续型随机变量时，其密度函数为f_Z(z) = F'_Z(z)$

#### 公式法

1. $U = max\set{X, Y}的分布函数$
   $F_U(x) = P\set{max(X, Y) \le x}$
   $=P\set{X \leq x, Y \leq x} \xlongequal{若X,Y独立}P\set{X \le x}P\set{Y \le x} =  F_X(x)F_Y(x) \xlongequal{若X,Y同分布} F_X^2(x)$
2. $V = min\set{X, Y}的分布函数$
   $F_V(x) = P\set{min(X, Y) \le x} = 1 - P\set{min(X, Y) \gt x}$
   $=1 - P\set{X \gt x, Y \gt x} \xlongequal{若X,Y独立} 1 - P\set{X \gt x, Y \gt x} = 1 - [1 - F_X(x)] [1 - F_Y(x)] \xlongequal{若X,Y同分布} 1 - [1 - F_X(x)]^2$

$如果随机变量X_1,X_2,\cdots,X_n相互独立，X_i的密度函数为f_i(x),分布函数为F_i(x),i=1,2,\cdots,n,记$

$M = max\set{X_1,X_2,\cdots,X_n}, N = min\set{X_1,X_2,\cdots,X_n}$

则M和N的分布函数和密度函数分别为

$F_M(x) = P\set{M \le x} = F_1(x)F_2(x)\cdots F_n(x)$

$f_M(x) = F'_M(x)$

$F_N(x) = P\set{N \le x} = 1 - [1 - F_1(x)] [1 - F_2(x)]\cdots [1 - F_n(x)]$

$f_N(x) = F'_N(x)$

$如果随机变量X_1,X_2,\cdots,X_n相互独立且同分布,且f_i(x) = f(x),F_i(x) = F(x), i = 1,2,\cdots , n,则$

$F_M(x) = [F_(x)]^n, f_M(x) = n[F_(x)]^{n-1}f(x)$

$F_N(x) = 1 - [1 - F_(x)]^n, f_N(x) = n[1 - F_(x)]^{n-1}f(x)$
