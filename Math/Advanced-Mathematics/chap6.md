# 6. 二重积分

## 概念

$$
\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \lim _ { \lambda \to 0 } \sum _ { i = 1 } ^ { n } f ( \xi _ { i } , \eta _ { i } ) \Delta \sigma _ { i }
$$

## 几何意义

$二重积分\displaystyle\iint\limits_{D} f ( x , y ) d \sigma是一个数，当 f(x, y) \ge 0 时，其值等于以积分域 D 为底，以曲面 z = f(x, y) 为曲顶的曲顶柱体的体积$

## 二重积分的性质

### 不等式性质

1. $若在 D 上 f ( x , y ) \leq g ( x , y )，则 \displaystyle\iint\limits_{D} f ( x , y ) d \sigma  \le \displaystyle\iint\limits_{D} g ( x , y ) d \sigma$
2. $若f ( x , y ) 在 D 上连续，则 mS \le \displaystyle\iint\limits_{D} f ( x , y ) d \sigma \le MS，其中 m 和 M 分别为 f(x, y) 在 D 上的最大值和最小值，S为积分域 D 的面积$
3. $|\displaystyle\iint\limits_{D} f ( x , y ) d \sigma |  \lt \displaystyle\iint\limits_{D} |f ( x , y )| d \sigma$

### 积分中值定理

$若f ( x , y ) 在 D 上连续，则 \displaystyle\iint\limits_{D} f ( x , y ) d \sigma  f(\xi, \eta)S ，其中 (\xi, \eta) \in D, S为积分域 D 的面积$

## 二重积分的计算

### 利用直角坐标计算

#### 先 x 后 y

$\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \int _ { a } ^ { b } d x \int _ { y _1 ( x ) } ^ { y _ 2 (x) } f ( x , y ) d y$

#### 先 y 后 x

$\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \int _ { c } ^ { d } d y \int _ { x _ 1 ( y ) } ^ { x _ 2 (y) } f ( x , y ) d x$

### 利用极坐标计算

#### 先 𝓇 后 θ

$\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \int _ { a } ^ { \beta } d \theta \int _ { r_1 (\theta) } ^ { r _ 2 (\theta) } f ( r \cos \theta , r \sin \theta ) r d r$

:star2: 适合极坐标的二重积分特征

1. 适合的被积函数

$f ( \sqrt { x ^ { 2 } + y ^ { 2 } } ) , f ( \cfrac { y } { x } ) , f ( \cfrac{x}{y} )$

2. 适合的积分域

$x ^ { 2 } + y ^ { 2 } \leq R ^ { 2 } ; r ^ { 2 } \leq x ^ { 2 } + y ^ { 2 } \leq R ^ { 2 } ; x ^ { 2 } + y ^ { 2 } \leq 2 a x ; x ^ { 2 } + y ^ { 2 } \leq 2 b y$

### 利用对称性和奇偶性计算

#### 积分域关于 y 轴对称，f(x, y) 关于 x 有奇偶性

$$
\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \begin{cases}
    2 \displaystyle\iint\limits_{D_{x \ge 0}} f ( x , y ) d \sigma , & f(-x, y) = f(x, y)\\
    0,       & f(-x, y) = -f(x, y)
\end{cases}
$$

#### 积分域关于 x 轴对称，f(x, y) 关于 y 有奇偶性

$$
\displaystyle\iint\limits_{D} f ( x , y ) d \sigma = \begin{cases}
    2 \displaystyle\iint\limits_{D_{y \ge 0}} f ( x , y ) d \sigma , & f(x, -y) = f(x, y)\\
    0,       & f(x, -y) = -f(x, y)
\end{cases}
$$

### 利用变量对称性计算

$$
\displaystyle\iint\limits_{D_{(x, y)}} f ( x , y ) d \sigma  = \displaystyle\iint\limits_{D_{(y, x)}} f ( y , x ) d \sigma
$$

$若D关于直线 y = x 对称，此时 D_{(x, y)} = D_{(y, x)}$
$$
\displaystyle\iint\limits_{D} f ( x , y ) d \sigma  = \displaystyle\iint\limits_{D} f ( y , x ) d \sigma
$$
即当积分域关于直线 y = x 对称时，将被积函数的 x 和 y 对调，积分值不变