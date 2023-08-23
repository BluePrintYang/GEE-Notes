# 2. 矩阵

## 矩阵的概念及运算

### 矩阵的概念

定义：m x n 个数排成m行n列的表格

**n阶矩阵**：m=n，也称**n阶方阵**

**零矩阵**：所有元素都为0，简记为**0**

**同型矩阵**：两个矩阵的行列相同，则这两个矩阵为同型矩阵

矩阵相等：对应元素都相等

n阶矩阵的行列式记成｜**A**｜或det**A**

> 矩阵是表格，行列式是数

### 矩阵的运算

加法：同型矩阵可以相加，相加等于各个对应的两个数相加

数量乘法：k是数，**A**是矩阵，简称数乘。
$k\boldsymbol{A} = k[a_{ij}]_{m \times n} = [ka_{ij}]_{m \times n}$
> :bangbang: k与每一个元素相乘，行列式则是只乘一行/列

乘法：需满足**A**的列数=**B**的行数，若m行s列矩阵**A**乘s行n列矩阵**B**，乘积**AB**为m行n列矩阵，记为**C**，其中**C**的第i行j列元素是**A**的第i行s个元素与**B**的第j列的s个对应元素两两乘积之和，即
$c_{ij} = \displaystyle\sum_{k=1}^{s}a_{ik}b{kj} = a_{i1}b_{1j} + a_{i2}b_{2j} + \dots a_{is}b_{sj}$

特别地，设**A**为n阶方阵，则计**A^k^**为**A**的k次幂。

> 1. 矩阵的乘法一般没有交换律。
> 2. 矩阵有零因子。
> 3. 矩阵没有消去律。

特殊矩阵：

1. 单位矩阵
   $\begin{bmatrix}
    1 & 0 \\
    0 & 1
   \end{bmatrix}, \begin{bmatrix}
    1 & 0 & 0 \\
    0 & 1 & 0 \\
    0 & 0 & 1
   \end{bmatrix}, \dots$
2. 对角矩阵
   $\begin{bmatrix}
    a_1 & 0 & 0 \\
    0 & a_2 & 0 \\
    0 & 0 & a_3
   \end{bmatrix}
   \begin{bmatrix}
    b_1 & 0 & 0 \\
    0 & b_2 & 0 \\
    0 & 0 & b_3
   \end{bmatrix} =
   \begin{bmatrix}
    a_1b_1 & 0 & 0 \\
    0 & a_2b_2 & 0 \\
    0 & 0 & a_3b_3
   \end{bmatrix}$
   1. **𝜦~1~𝜦~2~**=**𝜦~2~𝜦~1~**
   2. $\begin{bmatrix}
    a_1 & 0 & 0 \\
    0 & a_2 & 0 \\
    0 & 0 & a_3
   \end{bmatrix}^n=
   \begin{bmatrix}
    a_1^n & 0 & 0 \\
    0 & a_2^n & 0 \\
    0 & 0 & a_3^n
   \end{bmatrix}$

$\alpha = [a_1,a_2,a_3]^T, \beta = [b_1,b_2,b_3]^T,关于\alpha\beta^T,\beta\alpha^T,\alpha^T\beta,\beta^T\alpha,\alpha\alpha^T,\alpha^T\alpha$

> 1. $如A=\alpha\beta^T,则A^T=\beta\alpha^T且r(A)=r(A^T)=1$
> 2. $\alpha^T\beta=\beta^T\alpha=tr(A)$
> 3. $\alpha\alpha^T是对称矩阵，\alpha^T\alpha是平方和$

转置：将m行n列矩阵**A**的行列互换得到的矩阵称为**A**的转置矩阵，记为**A^T^**

矩阵多项式：设**A**是n阶矩阵，$f(x)=a_mx^m + \dots + a_1x + a_0$是x的多项式，则称$a_m\boldsymbol{A}^m + a_{m-1}\boldsymbol{A}^{m-1} + \dots + a_1\boldsymbol{A} + a_0\boldsymbol{E}$为矩阵多项式，记为f(**A**)

运算法则：

1. 加法 **A，B，C**是同型矩阵，则
   $$
   \boldsymbol{A} + \boldsymbol{B} = \boldsymbol{B} + \boldsymbol{A}\space交换律 \\
   (\boldsymbol{A} + \boldsymbol{B}) +\boldsymbol{C} = \boldsymbol{A} + (\boldsymbol{B} + \boldsymbol{C})\space结合律 \\
   \boldsymbol{A} + \boldsymbol{0} = \boldsymbol{A} \\
   \boldsymbol{A} - (-\boldsymbol{A}) = \boldsymbol{0}
   $$
2. 数乘矩阵
   $$
   k(m\boldsymbol{A}) = (km)\boldsymbol{A} = m(k\boldsymbol{A});(k+m)\boldsymbol{A} = k\boldsymbol{A} + m\boldsymbol{A} \\
   k(\boldsymbol{A} + \boldsymbol{B}) = k\boldsymbol{A} + k\boldsymbol{B};1\boldsymbol{A}=\boldsymbol{A},0\boldsymbol{A}=\boldsymbol{0}
   $$
3. 乘法
   $$
   (\boldsymbol{A}\boldsymbol{B})\boldsymbol{C} = \boldsymbol{A}(\boldsymbol{B}\boldsymbol{C}) \\
   \boldsymbol{A}(\boldsymbol{B} + \boldsymbol{C}) = \boldsymbol{A}\boldsymbol{B} + \boldsymbol{A}\boldsymbol{C} \\
   (\boldsymbol{B} + \boldsymbol{C})\boldsymbol{A} = \boldsymbol{B}\boldsymbol{A} + \boldsymbol{C}\boldsymbol{A}
   $$
4. 转置
   $$
   (\boldsymbol{A} + \boldsymbol{B})^T = \boldsymbol{A}^T + \boldsymbol{B}^T;(k\boldsymbol{A})^T = k\boldsymbol{A}^T \\
   (\boldsymbol{A}\boldsymbol{B})^T = \boldsymbol{B}^T\boldsymbol{A}^T;(\boldsymbol{A}^T)^T=\boldsymbol{A}
   $$

### 常见的矩阵

设**A**是n阶矩阵

1. **单位阵**：主对角线元素为1，其余元素为0，记为**E~n~**
2. **数量阵**：数k与单位阵**E**的积
3. **对角阵**：非对角元素都为0的矩阵，记为**𝜦**
4. **上（下）三角阵**
5. **对称阵**：满足$\boldsymbol{A}^T=\boldsymbol{A}$
6. **反对称阵**：满足$\boldsymbol{A}^T=-\boldsymbol{A}$

## 伴随矩阵、可逆矩阵

### 伴随矩阵的概念和公式

伴随矩阵：由矩阵**A**的行列式｜**A**｜所有的代数余子式所构成的形如
$$\begin{bmatrix}
    \boldsymbol{A}_{11} & \boldsymbol{A}_{21} & \dots & \boldsymbol{A}_{n1} \\
    \boldsymbol{A}_{12} & \boldsymbol{A}_{22} & \dots & \boldsymbol{A}_{n2} \\
    \vdots & \vdots & \space & \vdots \\
    \boldsymbol{A}_{1n} & \boldsymbol{A}_{2n} & \dots & \boldsymbol{A}_{nn} \\
   \end{bmatrix}$$
的矩阵，称为**A**的伴随矩阵，记为$\boldsymbol{A}^*$

:star2:伴随矩阵的公式：
$$
\boldsymbol{A}\boldsymbol{A}^* = \boldsymbol{A}^* \boldsymbol{A} = |\boldsymbol{A}|\boldsymbol{E} \\
(\boldsymbol{A}^*)^{-1} = (\boldsymbol{A}^{-1})^* = \cfrac{1}{|\boldsymbol{A}|}\boldsymbol{A} (|\boldsymbol{A}| \ne 0) \\
(k\boldsymbol{A})^* = k^{n-1}\boldsymbol{A}^* \\
(\boldsymbol{A}^*)^T = (\boldsymbol{A}^T)^* \\
|\boldsymbol{A}^*| = |\boldsymbol{A}|^{n-1} \\
(\boldsymbol{A}^*)^* = |\boldsymbol{A}|^{n-2}\boldsymbol{A} (n \ge 2)
$$

### 可逆矩阵的概念与定理

定义：设**A**是n阶矩阵，如果存在n阶矩阵**B**使得$\boldsymbol{A}\boldsymbol{B} = \boldsymbol{B}\boldsymbol{A} = \boldsymbol{E}$成立，则称**A**是**可逆矩阵**或**非奇异矩阵**，**B**是**A**的逆矩阵，记成$\boldsymbol{A}^{-1} = \boldsymbol{B}$

定理：

1. 若**A**可逆，则逆矩阵不唯一
2. $\boldsymbol{A}可逆 \Leftrightarrow ｜\boldsymbol{A}｜ \ne 0$
3. $\boldsymbol{A}\boldsymbol{B} = \boldsymbol{E} \Leftrightarrow \boldsymbol{B}\boldsymbol{A} = \boldsymbol{E}$

### n阶矩阵**A**可逆的充分必要条件

1. 存在n阶矩阵**B**，使$\boldsymbol{A}\boldsymbol{B} = \boldsymbol{E} 或 \boldsymbol{B}\boldsymbol{A} = \boldsymbol{E}$
2. |**A**| ≠ 0，或秩r(**A**) = n，或**A**的列（行）向量线性无关
3. 齐次方程组**A**x=**0**只有零解
4. $\forall \boldsymbol{b}，非齐次线性方程组\boldsymbol{A}x=\boldsymbol{b}总有唯一解$
5. 矩阵**A**的特征值不全为0

### 逆矩阵的运算性质

$$
若k \ne 0, \boldsymbol{A} 可逆，则(k\boldsymbol{A})^{-1} = \cfrac{1}{k}\boldsymbol{A}^{-1}; \\
若\boldsymbol{A,B}可逆，则(\boldsymbol{A}\boldsymbol{B})^{-1} = \boldsymbol{B}^{-1}\boldsymbol{A}^{-1}, \\
特别地(\boldsymbol{A}^2)^{-1} = (\boldsymbol{A}^{-1})^2 \\
若\boldsymbol{A}^T可逆，则(\boldsymbol{A}^{T})^{-1} = (\boldsymbol{A}^{-1})^T;
(\boldsymbol{A}^{-1})^{-1} = \boldsymbol{A};
|\boldsymbol{A}^{-1}| = \cfrac{1}{|\boldsymbol{A}|}
$$

> :bangbang: 即使 $\boldsymbol{A},\boldsymbol{B},\boldsymbol{A} + \boldsymbol{B} 都可逆，一般的(\boldsymbol{A} + \boldsymbol{B})^{-1} \ne \boldsymbol{A}^{-1} + \boldsymbol{B} ^{-1}$

### 求逆矩阵的方法

1. $若|\boldsymbol{A}| \ne 0, \cfrac{1}{|\boldsymbol{A}|}\boldsymbol{A}^*$
2. :star2:初等变换法 $(\boldsymbol{A} \vdots \boldsymbol{E}) \underrightarrow{初等行变化}(\boldsymbol{E} \vdots \boldsymbol{A}^{-1})$
3. 用定义求**B**，使**AB**=**E**
4. 用分块矩阵
   设**B，C**都是可逆矩阵，则
   $\begin{bmatrix}
    \boldsymbol{B} & \boldsymbol{0} \\
    \boldsymbol{0} & \boldsymbol{C}
   \end{bmatrix}^{-1} =
   \begin{bmatrix}
    \boldsymbol{B}^{-1} & \boldsymbol{0} \\
    \boldsymbol{0} & \boldsymbol{C}^{-1}
   \end{bmatrix};
   \begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{B} \\
    \boldsymbol{C} & \boldsymbol{0}
   \end{bmatrix}^{-1} =
   \begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{C}^{-1} \\
    \boldsymbol{B}^{-1} & \boldsymbol{0}
   \end{bmatrix}$

## 初等变换、初等矩阵

### 初等变换与初等矩阵的概念

初等变换定义：设**A**是m x n矩阵

1. 用某个非零常数k乘**A**的某行（列）的每个元素
2. 互换**A**的某两行（列）的位置
3. 将**A**的某两行（列）元素的k倍加到另一行（列）

称为矩阵的三种初等行（列）变换，分别称为**倍乘、互换、倍加**行（列）变换，统称**初等变换**

初等矩阵定义：由单位矩阵经过一次初等变换得到的矩阵

1. 倍乘初等矩阵
2. 互换初等矩阵
3. 倍加初等矩阵

等价矩阵定义：矩阵**A**经过有限次初等变换变成矩阵**B**，则称**A**与**B**等价，记成**A≅B**

### 初等矩阵与初等变换的性质

1. 初等矩阵的转置仍是初等矩阵
2. 初等矩阵是可逆矩阵，其逆矩阵仍是初等矩阵
3. 用初等矩阵**P**左乘（右乘）**A**，其结果**PA**（**AP**），相当于对**A**做相应的初等行（列）变换

定理：矩阵**A**可逆的充要条件是它能表示成一些初等矩阵的乘积

### 行阶梯矩阵，行最间矩阵

行阶梯矩阵：

1. 如果矩阵中有零行，则零行在矩阵底部
2. 每个非零行的主元（该行最左边的第一个非零元），它们的列指标随着行指标的递增而严格增大

行最间矩阵：是行阶梯矩阵，同时还满足：非零行的主元都是1，且主元所在列的其他元素都是0

## 分块矩阵

### 分块矩阵的概念

将矩阵用若干纵线和横线分成许多小块，每一小块称为原矩阵的子矩阵（或子块），把子块看作原矩阵的一个元素，则原矩阵叫分块矩阵

### 分块矩阵的运算

$\begin{bmatrix}
    \boldsymbol{A} & \boldsymbol{B} \\
    \boldsymbol{C} & \boldsymbol{D}
   \end{bmatrix}^T =
   \begin{bmatrix}
    \boldsymbol{A}^T & \boldsymbol{C}^T \\
    \boldsymbol{B}^T & \boldsymbol{D}^T
   \end{bmatrix}$

若**B，C**分别是m阶和n阶可逆矩阵，则

$\begin{bmatrix}
    \boldsymbol{B} & \boldsymbol{0} \\
    \boldsymbol{0} & \boldsymbol{C}
   \end{bmatrix}^{-1} =
   \begin{bmatrix}
    \boldsymbol{B}^{-1} & \boldsymbol{0} \\
    \boldsymbol{0} & \boldsymbol{C}^{-1}
   \end{bmatrix},
   \begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{B} \\
    \boldsymbol{C} & \boldsymbol{0}
   \end{bmatrix}^{-1} =
   \begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{C}^{-1} \\
    \boldsymbol{B}^{-1} & \boldsymbol{0}
   \end{bmatrix}$

## 方阵的行列式

抽象n阶方阵行列式公式

1. 若**A**是n阶矩阵，**A^T^**是**A**的转置矩阵，则｜**A^T^**｜=｜**A**｜
2. 若**A**是n阶矩阵，则｜k**A**｜=k^n^｜**A**｜
3. （行列式乘法公式）若**A，B**都是n阶矩阵，则｜**AB**｜=｜**A**｜｜**B**｜
   特别地｜**A^2^**｜=｜**A**｜^2^
4. 若**A**是n阶矩阵，**A^*^**是**A**的伴随矩阵，则｜**A^*^**｜=｜**A**｜^n-1^
5. 若**A**是n阶可逆矩阵，**A^-1^**是**A**的逆矩阵，则｜**A^-1^**｜=｜**A**｜^-1^
6. **A**是m阶矩阵，**B**是n阶矩阵
   $\begin{bmatrix}
    \boldsymbol{A} & \boldsymbol{0} \\
    \boldsymbol{C} & \boldsymbol{B}
   \end{bmatrix} =
   \begin{bmatrix}
    \boldsymbol{A} & \boldsymbol{D} \\
    \boldsymbol{0} & \boldsymbol{B}
   \end{bmatrix} = |\boldsymbol{A}| \cdot |\boldsymbol{B}|;$

   $\begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{A} \\
    \boldsymbol{B} & \boldsymbol{C}
   \end{bmatrix} =
   \begin{bmatrix}
    \boldsymbol{D} & \boldsymbol{A} \\
    \boldsymbol{B} & \boldsymbol{0}
   \end{bmatrix} = (-1)^{mn} |\boldsymbol{A}| \cdot |\boldsymbol{B}|;$

> 一般情况下，$|\boldsymbol{A} + \boldsymbol{B}| \ne |\boldsymbol{A}| + |\boldsymbol{B}|$

无文字版公式

1. $|\boldsymbol{A}^T| = |\boldsymbol{A}|$
2. $|k\boldsymbol{A}| = k^n|\boldsymbol{A}|$
3. $|\boldsymbol{A}\boldsymbol{B}| = |\boldsymbol{A}||\boldsymbol{B}|$
4. $|\boldsymbol{A}^*| = |\boldsymbol{A}|^{n-1}$
5. $|\boldsymbol{A}^{-1}| = |\boldsymbol{A}|^{-1}$
6. $\begin{bmatrix}
    \boldsymbol{A} & \boldsymbol{0} \\
    \boldsymbol{C} & \boldsymbol{B}
   \end{bmatrix} =
   \begin{bmatrix}
    \boldsymbol{A} & \boldsymbol{D} \\
    \boldsymbol{0} & \boldsymbol{B}
   \end{bmatrix} = |\boldsymbol{A}| \cdot |\boldsymbol{B}|;$

   $\begin{bmatrix}
    \boldsymbol{0} & \boldsymbol{A} \\
    \boldsymbol{B} & \boldsymbol{C}
   \end{bmatrix} =
   \begin{bmatrix}
    \boldsymbol{D} & \boldsymbol{A} \\
    \boldsymbol{B} & \boldsymbol{0}
   \end{bmatrix} = (-1)^{mn} |\boldsymbol{A}| \cdot |\boldsymbol{B}|;$
