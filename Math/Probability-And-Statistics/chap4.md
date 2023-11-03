# 4. 随机变量的数学特征

## 数学期望

### 离散型随机变量数学期望

$\displaystyle E(X)=\sum_{k=1}^{\infty}x_{k}p_{k}$

级数收敛

### 连续型随机变量数学期望

$E(X)=\int_{-\infty}^{+\infty}xf\left(x\right)\mathrm{d}x$

积分绝对收敛

### 期望的性质

1. $E(C)=C$
2. $E(CX)=CE(X)$
3. $E(X\pm Y)=E(X)\pm E(Y)$
4. $E(XY)=E(X)E(Y) \Leftrightarrow \text{X 与 Y 不相关}$

### 随机变量 X 的函数 $Y=g(X)$ 的数学期望

离散型

$\displaystyle E(Y)=E[g(X)]=\sum_{k=1}^{\infty}g(x_{k})p_{k}$

连续型

$E(Y)=E[g(X)]=\int_{-\infty}^{+\infty}g(x)f(x)\mathrm{d}x$

### 随机变量(X,Y) 的函数 $Z=g(X,Y)$ 的数学期望

离散型

$\displaystyle E(Z)=E[g(X,Y)]=\sum_{i=1}^{\infty}\sum_{j=1}^{\infty}g(x_{i},y_{j})p_{ij}$

连续型

$E(Z)=E\bigl[{g}(X,Y)\bigr]=\int_{-\infty}^{+\infty}\int_{-\infty}^{+\infty}g(x,y)f(x,y)\mathrm{d}x\mathrm{d}y$

## 方差

### 定义

$D(X)=E\{[X-E(X)]^2\}$

标准差或均方差

$\sigma(X)=\sqrt{D(X)}$

### 计算

$D(X)=E(X^2)-\begin{bmatrix}E(X)\end{bmatrix}^2$

### 性质

1. $D(C)=0$
2. $D(aX+b)=a^2D(X)$
3. $D(X\pm Y)=D(X)+D(Y) \Leftrightarrow \text{X 与 Y 不相关}$

## 矩、协方差和相关系数

### 矩

$E(X^k),\quad k=1,2,\cdotp\cdotp\cdotp $

若存在，称之为 X 的 k阶原点矩，简称 k阶矩

$E\{[X-E(X)]^k\}$

若存在，称之为 X 的 k阶中心矩

$E(X^kY^l)$

若存在，称之为 X 和 Y 的 k+l阶混合矩

$E\{[X-E(X)]^k[Y-E(Y)]^l\}$

若存在，称之为 X 和 Y 的 k+l阶混合中心矩

### 协方差

$\mathrm{Cov}(X,Y)=E(\begin{bmatrix}X-E(X)\end{bmatrix}[Y-E(Y)])$

#### 公式和性质

1. $Cov(X,Y)=E(XY)-E(X)E(Y)$
2. $D(X\pm Y)=D(X)+D(Y)\pm2\mathrm{Cov}(X,Y)$
3. $\mathrm{Cov}(X,Y)=\mathrm{Cov}(Y,X) \quad  \text{ 特别地 } \mathrm{Cov}(X,X)=D(X)$
4. $\operatorname{Cov}(aX,bY)=ab\operatorname{Cov}(X,Y)$
5. :star2: $\mathrm{Cov}(X_{1}+X_{2},Y)=\mathrm{Cov}(X_{1},Y)+\mathrm{Cov}(X_{2},Y)$****

### 相关系数

$\displaystyle \rho_{XY}=\frac{\mathrm{Cov}(X,Y)}{\sqrt{D(X)}\sqrt{D(Y)}} \quad (D(X)D(Y)\neq0)$

$D(X)D(Y) = 0 \Rightarrow \rho_{xy}=0$

#### 性质

1. $\mid\rho_{XY}\mid\leqslant1$
2. $\mid\rho_{XY}\mid = 1 \Leftrightarrow \exist a \ne 0, P\langle Y=aX+b\rangle=1$
   1. $\rho = 1 \Rightarrow a \gt 0$
   2. $\rho = -1 \Rightarrow a \lt 0$

### 不相关

> 无线性关系

$\rho_{xy}=0$

### 独立与不相关

1. 相互独立必不相关，不相关但不一定相互独立
2. 二维正态随机变量 (X,Y) ，X和Y相互独立的充要条件是 ρ = 0
3. 二维正态随机变量 (X,Y) ，相互独立 ⇔ 不相关