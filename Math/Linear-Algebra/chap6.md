# 6. 二次型

## 定义

### 二次型

n 个变量的二次齐次函数称为 n 元二次型，二次型有矩阵表示

$f(x_1,x_2,\cdotp\cdotp\cdotp,x_n)=x^\mathrm{T}Ax$

$\text{其中}\pmb{x}=(\begin{matrix}x_1,x_2,\cdots,x_n\end{matrix})^{T},\pmb{A}=\begin{bmatrix}a_{ij}\end{bmatrix}\text{且}\pmb{A}^{T}=\pmb{A}\bold{是对称矩阵}$

**A** 为==二次型的矩阵==，秩 r(**A**) 称为==二次型的秩==，记为 r(f)

二次型的矩阵为对称矩阵

### 标准形

二次型只有平方项

### 规范形

标准型且系数只能是 0，-1，1



- **正惯性指数**：标准型中正平方项个数
- **负惯性指数**：标准型中负平方项个数



### 坐标变换

$$
\left.\left\{\begin{matrix}
x_1=c_{11}y_1+c_{12}y_2+c_{13}y_3,\\
x_2=c_{21}y_1+c_{22}y_2+c_{23}y_3,\\
x_3=c_{31}y_1+c_{32}y_2+c_{33}y_3\end{matrix}\right.\right.\\
\text{满足}\\
\mid\textbf{C}\mid=
\begin{vmatrix}
c_{11}&c_{12}&c_{13}\\
c_{21}&c_{22}&c_{23}\\
c_{31}&c_{32}&c_{33}
\end{vmatrix}\neq0,\\
\text{称}\text{为由}x=(x_1,x_2,x_3)^T\text{ 到 }y=(y_1,y_2,y_3)^\text{T }\text{的坐标变换}.
$$

坐标变换用矩阵表示
$$
\begin{bmatrix}x_1\\\\x_2\\\\x_3\end{bmatrix}=\begin{bmatrix}c_{11}&c_{12}&c_{13}\\\\c_{21}&c_{22}&c_{23}\\\\c_{31}&c_{32}&c_{33}\end{bmatrix}\begin{bmatrix}y_1\\\\y_2\\\\y_3\end{bmatrix},\text{或}\quad\boldsymbol{x}=\mathbf{Cy},
$$
**C** 为可逆矩阵

### 合同

两个 n 阶矩阵 A 和 B，存在可逆矩阵 C，使得

$\mathbf{C}^\mathrm{T}A\mathbf{C}=\mathbf{B}$

$\begin{aligned}
&\text{就称矩阵 }A\text{ 和 }\boldsymbol{B}\text{ 合同},\text{记作 }A\simeq\boldsymbol{B}.\text{ 并称由 }\boldsymbol{A}\text{ 到}\boldsymbol{B}\text{ 的变换为合同变换},\text{称 }\mathbf{C} \\
&\text{为合同变换的矩阵.}
\end{aligned}$



- 正定二次型：对于任何 $x \ne 0$ 恒有 $x^\mathrm{T}Ax \gt 0$
- 正定矩阵：实对称矩阵 A

## 定理

### 坐标变换后合同，正交变换合同且相似

$x^\mathrm{T}Ax \text{ 经坐标变换 } \boldsymbol{x}=\mathbf{Cy} \text{ 后，化为 } \mathbf{y}^{\mathrm{T}}\mathbf{B}\mathbf{y}, \mathbf{B}=\mathbf{C}^\mathrm{T}A\mathbf{C}$

$x^{T}Ax=(Cy)^{T}A(Cy)=y^{T}C^{T}ACy=y^{T}By$

B 为对称矩阵 $B^T=(C^TAC)^T=C^TA^T(C^T)^T=C^TAC=B$

经过坐标变换的二次型矩阵是合同的

特别地，若为正交变换，即 C 为正交矩阵，则有

$B=C^{T}AC=C^{-1}AC$

经过正交变换，二次型不仅合同，而且相似

### 二次型可化为标准型

任意二次型都可通过坐标变换化为标准型

### 实对称矩阵合同于对角矩阵

$\text{任一 }n\text{ 阶实对称矩阵}A\text{,总可以合同于一个对角矩阵},\text{即}\\
\mathbf{C}^\mathrm{T}\mathbf{A}\mathbf{C}=\begin{bmatrix}d_1\\&d_2\\&&\ddots\\&&&d_n\end{bmatrix}$

### 惯性定理

二次型正负惯性指数（p，q）是确定的

$\begin{aligned}
&\text{若}x^\mathrm{T}Ax \text{ 经坐标变换 } \boldsymbol{x}=\mathbf{Cy} \text{ 化为 } \mathbf{y}^{\mathrm{T}}\mathbf{B}\mathbf{y}\\
&\Leftrightarrow \mathbf{C}^\mathrm{T}A\mathbf{C}=\mathbf{B}\\
&\Leftrightarrow p_{A}=p_{B},q_{A}=q_{B}  \\
&\Leftrightarrow x^{\mathrm{T}}Ax\text{ 与 }y^{\mathrm{T}}By\text{ 有相同的规范形}.
\end{aligned}$

A，B 合同，充要条件是正负惯性指数相同，有相同规范形

### 二次型正交变换

二次型的矩阵为实对称矩阵，则必存在正交变换化为标准形

$\begin{aligned}
&\text{A为} \text{实对称矩阵,}\exists\text{ 正交矩阵 }Q,\text{使 }Q^{-1}AQ=\Lambda.  \\
&对x^{T}Ax,令x=Qy,则  \text{:}  \\
&\text{x}^T Ax=(Qy)^{\mathrm{T}}A(Qy)=y^{\mathrm{T}}Q^{\mathrm{T}}AQy  \\
&\quad\quad\quad =y^\mathrm{T}Q^{-1}AQy=y^\mathrm{T}\Lambda y \\
&\quad\quad\quad =\lambda_{1}y_{1}^{2}+\lambda_{2}y_{2}^{2}+\lambda_{3}y_{3}^{2}.
\end{aligned}$

### 正定充要条件

1. 正惯性指数为 n
2. 与 E 合同
3. 所有特征值均为正数
4. 各阶顺序主子式均大于零

推论

#### 必要条件

1. 对角线元素大于零
2. 行列式大于零



## 等价、相似、合同

### 等价

1. 经过初等变换可相互得到
2. 秩相等

### 相似

#### 判断相似

1. $A\sim \Lambda,B\sim \Lambda,则A\sim B.$ （找中介对角矩阵）
2. $\text{实对称矩阵 }A\sim B\Leftrightarrow\lambda_A=\lambda_B.$ （实对称矩阵特征值相等）

#### 判断不相似

1. 迹不相等；特征值不相等；秩不相等；行列式不相等；A + kE ≠ B + kE
2. A 可相似对角化，B 不能相似对角化

### 合同

正负惯性指数相同

## 做题方法

二次型化标准形

1. 配方法
2. 正交变换法