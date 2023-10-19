# 5. 特征值和特征向量

## 特征值、特征向量

$\boldsymbol{A}\boldsymbol{\alpha}=\lambda\boldsymbol{\alpha}$

特征多项式

$\mid\lambda\boldsymbol{E}-\boldsymbol{A}\mid=\begin{vmatrix}\lambda-a_{11}&-a_{12}&\cdots&-a_{1n}\\-a_{21}&\lambda-a_{22}&\cdots&-a_{2n}\\\vdots&\vdots&&\vdots\\-a_{n1}&-a_{n2}&\cdots&\lambda-a_{nn}\end{vmatrix}$

$\mid\lambda\boldsymbol{E}-\boldsymbol{A}\mid=0 \text{称为 } \boldsymbol{A} \text{ 的特征方程}$

求特征值，特征向量的方法

1. $\text{先由}\mid\lambda\boldsymbol{E}-\boldsymbol{A}\mid=0\text{ 求矩阵 }\mathbf{A}\text{ 的特征值}\lambda_i(\text{共 }n\text{ 个}).\text{再由}(\lambda_i\boldsymbol{E}-\boldsymbol{A})x=\boldsymbol{0}\\\text{求基础解系,即矩阵 }\mathbf{A}\text{ 属于特征值 }\lambda_i\text{ 的线性无关的特征向量}.$
2. $\text{用定义 }A\alpha=\lambda\alpha\text{ 推理分析}.$

特征值的性质

1. 特征值之和为矩阵迹之和
2. 特征值乘积为行列式的值

## 相似矩阵、矩阵的相似对角化

### 相似矩阵

$P^{-1}AP=B, A \sim B$

相似对角化 $\mathbf{A}\sim\boldsymbol{\Lambda}$

n阶矩阵可相似对角化充分必要条件

1. 有 n 个线性无关的特征向量
2. 不同特征值对应的特征向量线性无关

n 个不同的特征值 ⇒ n 个线性无关的特征向量 ⇔ 可相似对角化

r 重特征值对应的线性无关特征向量个数小于等于 r 个

r 重特征值对应的线性无关特征向量个数 =  r 个 ⇔ 可相似对角化

### 性质

1. 反身性 $\mathbf{A}\sim\boldsymbol{A}$
2. 对称性 $\mathbf{A}\sim\boldsymbol{B} \Rightarrow \mathbf{B}\sim\boldsymbol{A}$
3. :star2: 传递性 $\mathbf{A}\sim\boldsymbol{B}\ , \mathbf{B}\sim\boldsymbol{C} \Rightarrow \mathbf{A}\sim\boldsymbol{C}$

矩阵相似必要条件

1. 特征方程相等
2. 秩相等
3. 有相同特征值
4. 行列式相等且等于特征值之和
5. 迹等于特征值之和

## 实对称矩阵的相似对角化

### 实对称矩阵

元素都是实数的对称矩阵

A 是实对称矩阵 ⇔ $A^T = A$

1. 实对称矩阵特征值都是实数
2. 不同特征值对应特征向量相互正交
3. 实对称矩阵必相似于对角矩阵