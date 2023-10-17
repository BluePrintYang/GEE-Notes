# 4. 线性方程组

## 克拉默法则

n个方程 n个未知数 构成的 ==非齐次线性方程组== 的系数行列式 |A| ≠ 0，则方程组有唯一解 $x_{i}=\frac{\mid\boldsymbol{A}_{i}\mid}{\mid\boldsymbol{A}\mid},i=1,2,\cdots,n.$

推论：

n个方程 n个未知数 构成的 ==齐次线性方程组== 的系数行列式 |A| ≠ 0 ⇔ 方程组只有零解

有非零解 ⇔ 系数行列式 |A| = 0

## 齐次线性方程组

### 表达形式

n 个未知量 , m 个方程组成的方程组
$$
\begin{cases} a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n=0,\\
a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n=0,\\
\cdots\cdots\\
a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n=0,\end{cases}
$$
向量形式
$$
\boldsymbol{\alpha}_1x_1+\boldsymbol{\alpha}_2x_2+\cdots+\boldsymbol{\alpha}_nx_n =0\\
\text{其中 }\boldsymbol{\alpha}_j=(\boldsymbol{\alpha}_{1j},\boldsymbol{\alpha}_{2j},\cdots,\boldsymbol{\alpha}_{mj})^{\mathrm{T}},j=1,2,\cdots,n,\boldsymbol{0}=(0,0,\cdots,0)^{\mathrm{T}}
$$


矩阵形式
$$
\boldsymbol{A}_{m\times n}x=0\\
\text{其中 A}=\begin{bmatrix}a_{11}&a_{12}&\cdots&a_{1n}\\a_{21}&a_{22}&\cdots&a_{2n}\\\vdots&\vdots&&\vdots\\a_{m1}&a_{m2}&\cdots&a_{m}\end{bmatrix},\quad\mathbf{x}=\begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix},\quad\mathbf{0}=\begin{bmatrix}0\\0\\\vdots\\0\end{bmatrix}.
$$

### 齐次方程组的解

必有零解

### 基础解系

$$
\begin{aligned}
&\text{如果 }\boldsymbol{\eta}_1,\boldsymbol{\eta}_2,\cdotp\cdotp\cdotp,\boldsymbol{\eta}_t\text{ 是齐次方程组 A}x=\boldsymbol{0}\text{ 的解},\text{而且满足}\\
&(1)\boldsymbol{\eta}_1,\boldsymbol{\eta}_2,\cdot\cdot\cdot,\boldsymbol{\eta}_t\text{线性无关},\\&(2)\boldsymbol{A}\boldsymbol{x}=\boldsymbol{0}\text{ 的任一个解 }\boldsymbol{\eta}\text{都可由 }\boldsymbol{\eta}_1,\boldsymbol{\eta}_2,\cdot\cdot\cdot\boldsymbol{\eta}_t\text{线性表出,}\end{aligned}
$$

### 解的性质

解倍乘仍为解

### 有解条件

1. 列向量线性相关
2. 秩小于n

齐次方程组$\boldsymbol{A}_{m\times n}x=0$有非零解 ⇔ $r(\boldsymbol{A}) \lt n$

推论

1. $m \lt n$，必有非零解
2. $m = n, \text{有非零解 } \Leftrightarrow |\boldsymbol{A}| = 0$

:star2:基础解系向量个数为 $n -r(\boldsymbol{A})$

### 基础解系与通解求法

系数矩阵初等行变换

## 非齐次线性方程组

n 个未知量 , m 个方程组成的方程组
$$
\begin{cases} a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n=b_1,\\
a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n=b_2,\\
\cdots\cdots\\
a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n=b_m,\end{cases}
$$
向量形式
$$
\boldsymbol{\alpha}_1x_1+\boldsymbol{\alpha}_2x_2+\cdots+\boldsymbol{\alpha}_nx_n =\boldsymbol{b}\\
\text{其中 }\boldsymbol{\alpha}_j=(\boldsymbol{\alpha}_{1j},\boldsymbol{\alpha}_{2j},\cdots,\boldsymbol{\alpha}_{mj})^{\mathrm{T}},j=1,2,\cdots,n,\boldsymbol{b}=(b_1,b_2,\cdots,b_m)^{\mathrm{T}}
$$


矩阵形式
$$
\boldsymbol{A}_{m\times n}x=\boldsymbol{b}\\
\text{其中 A}=\begin{bmatrix}a_{11}&a_{12}&\cdots&a_{1n}\\a_{21}&a_{22}&\cdots&a_{2n}\\\vdots&\vdots&&\vdots\\a_{m1}&a_{m2}&\cdots&a_{m}\end{bmatrix},\quad\mathbf{x}=\begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix},\quad\mathbf{b}=\begin{bmatrix}b_1\\b_2\\\vdots\\b_m\end{bmatrix}.
$$

### 非齐次方程组的解

### 解的性质

两个非齐次解作差为齐次方程解

### 有解条件

- 无解
  - b 不能由列向量线性表出
  - 系数矩阵秩不等于增广矩阵的秩 （增广矩阵秩比系数矩阵秩大一）
- 有解
  - b 可由列向量线性表出
  - 系数矩阵秩等于增广矩阵的秩
    - 秩相等且等于 n ，唯一解
    - 秩相等且小于 n ，表示方式不唯一，有无穷多解

### 通解结构

齐次通解+非齐次特解

## 公共解、同解

$\text{方程组 }A_{m\times n}x=0\text{ 和 }B_{s\times n}x=0\text{ 的公共解是满足方程组}\begin{bmatrix}A\\B\end{bmatrix}x=0\text{ 的解}.$

给定两个线性方程组，联立求公共解

$\text{两个方程组 }A_{m\times n}x=0\text{ 和 }B_{m\times n}x=0\text{ 有完全相同的解 },\text{则称为同解方程组}.$

## 方程组的应用