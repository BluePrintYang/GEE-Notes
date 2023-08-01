# 1. 行列式

## 行列式的概念

> 行列式是一个数，不同行不同列元素乘积的代数和

$n阶行列式的值=\displaystyle\sum_{j_1j_2 \dots j_n} (-1)^{\tau(j_1j_2 \dots j_n)} a_{1j_1}a_{2j_2} \dots a_{nj_n}$

这个式子叫做n阶行列式的完全展开式

$其中\tau(j_1j_2 \dots j_n)表示排序j_1j_2 \dots j_n的逆序数$

一个排列中，大数排在小数前面，称这两个数构成一个逆序。
如果逆序数是偶数，则称这个排列为偶排序，否则为奇排序。

$例如，a_{12}a_{24}a_{33}a_{41}是4阶行列式中的一项，\tau(2431)=1+2+1=4为偶数，那么该项所带的符号为正号$

## 二阶行列式的性质

1. 转置行列式值不变
2. 两行（列）互换位置，行列式变号
   两行（列）相同，值为零
3. 某行（列）有公因子k，可把k提出行列式外
   a. 某行（列）全为0，行列式为0
   b. 某两行（列）成比例，行列式为0
4. 某行（列）是两个元素之和，可拆为两个行列式之和
5. :star:将某行（列）的k倍加到另一行（列），行列式值不变

## 行列式按行（列）展开公式

$余子式(记为\boldsymbol{M_{ij}})：n阶行列式中，划去a_{ij}所在的第i行，第j列，剩下的元素按原来位置构成的n-1阶行列式，称为a_{ij}的余子式$

$代数余子式(记为\boldsymbol{A_{ij}})：(-1)^{(i+j)}M_{ij}$

### 定理

1. n阶行列式等于它的任何一行（列）元素与其对应代数余子式乘积之和
2. 行列式的任一行（列）元素与另一行（列）元素的代数余子式乘积之和为0

### 特殊行列式

1. 上（下）三角行列式的值等于主对角线元素的乘积
2. 副对角线行列式=$(-1)^{\frac{n(n-1)}{2}a_{1n}a_{2.n-1} \dots a_{n1}}$
3. 两个特殊的拉普拉斯展开式
   如果*A*和*B*分别是m阶和n阶矩阵，则
   $\begin{vmatrix} \boldsymbol{A} & \boldsymbol{*}\\ \boldsymbol{0} & \boldsymbol{B}\end{vmatrix} =
    \begin{vmatrix} \boldsymbol{A} & \boldsymbol{0}\\ \boldsymbol{*} & \boldsymbol{B} \end{vmatrix} = (-1)^{mn}
    |\boldsymbol{A}| \sdot |\boldsymbol{B}|$
4. 范德蒙行列式
   $\begin{vmatrix} 1 & 1 & \dotsb & 1 \\
                    x_1 & x_2 & \dotsb & x_n \\
                    x_1^2 & x_2^2 & \dotsb & x_n^2 \\
                    \vdots & \vdots & & \vdots \\
                    x_1^{n-1} & x_2^{n-1} & \vdots & x_n^{n-1}
    \end{vmatrix} = \displaystyle\prod_{1 \leq j \lt i \leq n}(x_i - x_j)$

### 其他（补充）

1. 爪形处理：第一行的-1倍分别加到其他每一行

## 克拉默法则

$$
\tag{1}\begin{dcases}
    a_{11}x_1 + a_{12}x_2 + \dotsb + a_{1n}x_n = b_1 \\
    a_{21}x_1 + a_{22}x_2 + \dotsb + a_{2n}x_n = b_2 \\
    \dotsb \ \dotsb \ \dotsb \\
    a_{n1}x_1 + a_{n2}x_2 + \dotsb + a_{nn}x_n = b_n \\
\end{dcases}
$$

定理：n个方程n个未知量构成的非齐次线性方程组（1）的系数行列式｜**A**｜≠ 0，则方程组有唯一解，且
$$x_i=\frac{|\boldsymbol{A_i}|}{\boldsymbol{A}},i=1,2,\dotsb,n$$
其中｜**A~i~**｜是｜**A**｜中第i列元素替换成方程组右端的常数项b~1~,b~2~,···,b~n~所构成的行列式
$$
\tag{2}\begin{dcases}
    a_{11}x_1 + a_{12}x_2 + \dotsb + a_{1n}x_n = 0 \\
    a_{21}x_1 + a_{22}x_2 + \dotsb + a_{2n}x_n = 0 \\
    \dotsb \ \dotsb \ \dotsb \\
    a_{n1}x_1 + a_{n2}x_2 + \dotsb + a_{nn}x_n = 0 \\
\end{dcases}
$$

推论：包含n个方程n个未知量的齐次线性方程组（2）的系数行列式|**A**|≠0，则方程组（2）只有零解。反之，若方程组（2）有非零解，则其系数行列式必为0，即|**A**|=0
