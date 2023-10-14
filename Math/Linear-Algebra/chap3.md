# 3. 向量

## 向量的概念、向量组的概念

### 向量定义

> n个数$a_1,a_2,\cdots,a_n$所组成的有序数组叫做n维向量

**列向量**：$\boldsymbol{\alpha}=(a_1,a_2,\cdots,a_n)^T$

**行向量**：$\boldsymbol{\alpha}=(a_1,a_2,\cdots,a_n)$

向量$\alpha$的**分量**（或**坐标**）：$a_1,a_2,\cdots,a_n$

相等：$\boldsymbol{\alpha} = \boldsymbol{\beta} \Leftrightarrow \boldsymbol{\alpha}, \boldsymbol{\beta}同维且对应分量 a_i = b_i,i=1,2,\cdots,n$

### 向量的基本运算

加法 $\boldsymbol{\alpha} + \boldsymbol{\beta} = (a_1 + b_1, a_2 + b_2, \cdots, a_n + b_n)$
数乘 $k \boldsymbol{\alpha} = (ka_1, ka_2, \cdots, ka_n)$

若干个同维数的行向量(或同维数的列向量)所组成的集合叫做**向量组**

$$
向量组 \\
\boldsymbol{\alpha_1}=[a_{11},a_{21},\cdots,a_{r1}]^T, \boldsymbol{\alpha_2}=[a_{12},a_{22},\cdots,a_{r2}]^T, \boldsymbol{\alpha_m}=[a_{1m},a_{2m},\cdots,a_{rm}]^T \\
及 \\
\tilde{\boldsymbol{\alpha_1}}=[a_{11},a_{21},\cdots,a_{r1},\cdots,a_{s1}]^T, \tilde{\boldsymbol{\alpha_2}}=[a_{12},a_{22},\cdots,a_{r2},\cdots,a_{s2}]^T, \tilde{\boldsymbol{\alpha_m}}=[a_{1m},a_{2m},\cdots,a_{rm},\cdots,a_{sm}]^T，\\
其中 s \ge r，则称 \tilde{\boldsymbol{\alpha_1}},\tilde{\boldsymbol{\alpha_2}},\cdots,\tilde{\boldsymbol{\alpha_m}} 为向量组 \boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}的 \bold{延伸组}，反之为\bold{缩短组}
$$

## 线性表出、线性相关

### 线性组合定义

> m个n维向量$\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}$及m个数$k_1, k_2, \cdots, k_m$，则向量
>
> $k_1\boldsymbol{\alpha_1},k_2\boldsymbol{\alpha_2},\cdots,k_m\boldsymbol{\alpha_m}$
>
> 称为向量$\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}$的一个**线性组合**，$k_1, k_2, \cdots, k_m$称为这个线性组合的系数

### 线性表出

若$\boldsymbol{\beta} = k_1\boldsymbol{\alpha_1},k_2\boldsymbol{\alpha_2},\cdots,k_m\boldsymbol{\alpha_m}$，则称$\boldsymbol{\beta} 能由 \boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}$线性表出

### 线性相关

存在不全为0的数$k_1, k_2, \cdots, k_m$使得$k_1\boldsymbol{\alpha_1},k_2\boldsymbol{\alpha_2},\cdots,k_m\boldsymbol{\alpha_m} = \boldsymbol{0}$，则称**向量组$\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}$线性相关**，否则它们**线性无关**

> 显然含量零向量，相等向量或成比例的向量组是线性相关的；单个向量时，零向量是线性相关的

**定理1**

$$
向量 \boldsymbol{\beta} 可由\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}线性表出  \\
\Leftrightarrow \exist 实数 k_1, k_2, \cdots, k_m 使 k_1\boldsymbol{\alpha_1},k_2\boldsymbol{\alpha_2},\cdots,k_m\boldsymbol{\alpha_m} = \boldsymbol{\beta} \\
\Leftrightarrow 方程组 [\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}] \begin{bmatrix} x_1 \\ x_2 \\ \vdots \\ x_m \end{bmatrix} = \boldsymbol{\beta} \\
\Leftrightarrow 秩r(\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}) = r(\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}, \boldsymbol{\beta})
$$

**定理2**

$向量组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m}线性相关$
$\Leftrightarrow 以 \boldsymbol{\alpha_j}为列向量的齐次线性方程组 x_1\boldsymbol{\alpha_1},x_2\boldsymbol{\alpha_2},\cdots,x_m\boldsymbol{\alpha_m} = \boldsymbol{0}$
即
$$
\begin{dcases}
    a_{11}x_1 + a_{12}x_2 + \dotsb + a_{1m}x_m = 0 \\
    a_{21}x_1 + a_{22}x_2 + \dotsb + a_{2m}x_m = 0 \\
    \dotsb \ \dotsb \ \dotsb \\
    a_{n1}x_1 + a_{n2}x_2 + \dotsb + a_{nm}x_m = 0 \\
\end{dcases}
$$
有非零解

**推论1**

$\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_n} 线性相关 \Leftrightarrow 行列式 |\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_n}| = 0$

**推论2**

任何一个n+1个n维向量必线性相关

**定理3**

$任何部分组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_r} 相关 \Rightarrow 整体组 \boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_r},\cdots,\boldsymbol{\alpha_s} 相关$

$整体组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_r},\cdots,\boldsymbol{\alpha_s} 无关 \Rightarrow 任何部分组 \boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_r} 无关$
反之都不成立

**定理4**

$\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m} 线性无关 \Rightarrow 延伸组 \tilde{\boldsymbol{\alpha_1}},\tilde{\boldsymbol{\alpha_2}},\cdots,\tilde{\boldsymbol{\alpha_m}} 线性无关$
延伸组线性相关 ⇨ 缩短组线性相关，反之都不成立

**定理5**

$向量组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s} 线性相关 \Leftrightarrow 至少有一个向量 \boldsymbol{\alpha_i} 可以由其余向量线性表出$

**定理6**

$向量组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s} 线性无关，而向量组\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s},\boldsymbol{\beta} 线性相关， \\
则 \boldsymbol{\beta} 可以由\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s}线性表出，且表出法唯一$

**定理7**

$$
设有两个向量组(I)\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s}，(II)\boldsymbol{\beta_1},\boldsymbol{\beta_2},\cdots,\boldsymbol{\beta_t} \\
(1)若\boldsymbol{\beta_i}(i=1,2,\cdots,t)均可由(I)线性表出，且t \gt s，则(II)线性相关 \\
(2)若\boldsymbol{\beta_i}(i=1,2,\cdots,t)均可由(I)线性表出，且(II)线性无关，则t \le s
$$

## 向量组的秩、矩阵的秩

### 向量组的秩

#### 向量组的秩定义

$向量组(I)\boldsymbol{\alpha_{i_1}},\boldsymbol{\alpha_{i_2}},\cdots,\boldsymbol{\alpha_{i_r}}(1 \le i_r \le s) 是向量组(II) \boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s} 的部分组，满足条件$

(1)向量组(I)线性无关

(2)向量组(I)中加入向量组(II)中的任一向量后形成的新向量组线性相关，则称向量组(I)是向量组(II)的**极大线性无关组**

条件(2)的等价说法是：向量组(II)中的任一向量都可以由向量组(I)线性表出

> 极大线性无关组一般不唯一，但极大线性无关组的向量个数是一样的
>
> 只有一个零向量的向量组没有极大线性无关组
>
> 一个线性无关向量组的极大线性无关组就是该向量组本身

**向量组的秩**：向量组的极大线性无关组的==向量个数==，记为$r(\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s})$

#### 等价向量组定义

设向量组$(I)\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_s}，(II)\boldsymbol{\beta_1},\boldsymbol{\beta_2},\cdots,\boldsymbol{\beta_t}$

向量组(I)中每个向量都可由(II)线性表出，(II)中每个向量都可由(I)线性表出，则称向量组(I)(II)是**等价向量组**，记成$(I) \cong (II)$

向量组和它的极大线性无关组是等价向量组
一个向量组的各极大线性无关组是等价向量组，且向量个数相同

**定理8**

如果向量组(I)可由向量组(II)线性表出，则$r(I) \le r(II)$

**推论**

如果向量组(I)和(II)等价，则$r(I) = r(II)$

### 矩阵的秩

#### 子式定义

$m \times n 矩阵 \boldsymbol{A} 中，任取k行k列，按原来位置构成的k阶行列式，称其为矩阵 \boldsymbol{A} 的一个k阶 \boldsymbol{子式}$

#### 秩的定义
$$
\begin{aligned}
&\boldsymbol{A} 是 m \times n 阶矩阵，若 \boldsymbol{A} 中存在r阶子式不等于0，r阶以上子式均等于0，则称矩阵 \boldsymbol{A} 的秩为r，记成 r(\boldsymbol{A})\\
&零矩阵的秩规定为0\\
&秩 r(\boldsymbol{A}) = r \Leftrightarrow 矩阵\boldsymbol{A} 中非零子式的最高阶数是r\\
&r(\boldsymbol{A}) \lt r \Leftrightarrow \boldsymbol{A} 中每一个r阶子式全为0\\
&r(\boldsymbol{A}) \ge r \Leftrightarrow \boldsymbol{A} 中有r阶子式不为0\\
&特别地，r(\boldsymbol{A}) = 0 \Leftrightarrow \boldsymbol{A} = \boldsymbol{0}, \quad r(\boldsymbol{A}) \ne 0 \Leftrightarrow r(\boldsymbol{A}) \ge 1\\
&若r(\boldsymbol{A})是n阶矩阵，r(\boldsymbol{A}) = n \Leftrightarrow |\boldsymbol{A}| \ne 0 \Leftrightarrow \boldsymbol{A} 可逆 \quad r(\boldsymbol{A}) \lt n \Leftrightarrow |\boldsymbol{A}| = 0 \Leftrightarrow \boldsymbol{A} 不可逆\\
&若\boldsymbol{A}是 m \times n 阶矩阵，则 r(\boldsymbol{A}) \le min(m,n)
\end{aligned}
$$

**定理9**

经初等变换矩阵的秩不变

**矩阵秩的公式**

$r(\boldsymbol{A}) = r(\boldsymbol{A}^T); r(\boldsymbol{A}^T\boldsymbol{A}) = r(\boldsymbol{A})$
$当k \ne 0时，r(k\boldsymbol{A}) = r(\boldsymbol{A}); r(\boldsymbol{A} + \boldsymbol{B}) \le r(\boldsymbol{A}) + r(\boldsymbol{B})，r(\boldsymbol{A}\boldsymbol{B}) \le min(r(\boldsymbol{A}), r(\boldsymbol{B})),max(r(\boldsymbol{A}), r(\boldsymbol{B})) \le r(\boldsymbol{A},\boldsymbol{B}) \le r(\boldsymbol{A}) + r(\boldsymbol{B})$

$若 \boldsymbol{A} 可逆，则r(\boldsymbol{A}\boldsymbol{B}) = r(\boldsymbol{B}), r(\boldsymbol{B}\boldsymbol{A}) = r(\boldsymbol{B}).$
$若 \boldsymbol{A} 是 m \times n 矩阵，\boldsymbol{B} 是 n \times s 矩阵，\boldsymbol{AB} = \boldsymbol{0}，则 r(\boldsymbol{A}) + r(\boldsymbol{B}) \le n.$

$分块矩阵
r\begin{pmatrix}
    \boldsymbol{A} & \boldsymbol{0} \\
    \boldsymbol{0} & \boldsymbol{B}
\end{pmatrix}
=r(\boldsymbol{A}) + r(\boldsymbol{B})$

**定理10** 三秩相等

$设 \boldsymbol{A} 是 m \times n 矩阵，将 \boldsymbol{A} 以行及列分块，得$
$$
\boldsymbol{A_{m \times n}} =
\begin{bmatrix}
    \boldsymbol{\alpha_1} \\
    \boldsymbol{\alpha_2} \\
    \vdots \\
    \boldsymbol{\alpha_m}
\end{bmatrix} =
\begin{bmatrix}
    \boldsymbol{\beta_1}, & \boldsymbol{\beta_2}, & \cdots, & \boldsymbol{\beta_n}
\end{bmatrix}
$$
$则有r(\boldsymbol{A})（矩阵\boldsymbol{A}的秩） = r(\boldsymbol{\alpha_1},\boldsymbol{\alpha_2},\cdots,\boldsymbol{\alpha_m})（\boldsymbol{A}的行秩）= r(\boldsymbol{\beta_1},\boldsymbol{\beta_2},\cdots,\boldsymbol{\beta_n})（\boldsymbol{A}的列秩）$

## 正交规范化、正交矩阵

