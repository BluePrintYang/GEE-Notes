# 5. 多元函数微分学

## 重极限、连续、偏导数、全微分

### 1. 重极限

#### 定义

$$
设函数 f(x, y ) 在区域 D 上有定义，点 P_0 (x_0, y_0) \in D 为 D 的聚点,\\
如果 \forall \varepsilon \gt 0, 存在 \delta \gt 0, 当 P(x, y) \in D, \\
且 0 \lt \sqrt{(x - x_0)^2 + (y - y_0)^2} \lt \delta 时，都有\\
|f(x, y) - A| \lt \varepsilon \\
成立，则称常数 A 为函数 f(x, y) 当 (x, y) \to (x_0, y_0) 时的极限，记为\\
\lim \limits_{(x, y) \to (x_0, y_0)} f(x, y) = A 或 \lim_{\substack{x \to x_0 \\ y \to y_0}} f(x, y) = A 或 \lim \limits_{P \to P_0} f(P) = A
$$



:star2: $(x, y) \to (x_0, y_0)$是以 ==”任意方式“==

#### 性质

1. 局部有界性
2. 保号性
3. 有理运算
4. 极限与无穷小的关系
5. 夹逼性

#### :star2:求极重限常用方法

1. 利用极限性质（四则运算法则，夹逼原理）
2. 消去分母中极限为零的因子（有理化，等价无穷小代换）
3. 利用无穷小量与有界变量之积为无穷小

#### 证明重极限不存在

1. 沿两种不同路径得到的极限值不同

### 2. 连续

#### 定义

$$
\lim_{\substack{x \to x_0 \\ y \to y_0}} f(x, y) = f(x_0, y_0)
$$

#### 性质

1. 连续函数的和、差、积、商（分母不为零）及复合仍连续
2. 基本初等函数在其定义域内连续；初等函数在其定义区域内连续
3. 有界闭区域上连续函数性质
   1. 有界性：f在有界闭区域D上连续，则f在D上有界
   2. 最值性：f在有界闭区域D上连续，则f在D上必有最大值和最小值
   3. 介值性：f在有界闭区域D上连续，则f在D上可取到介于最大值和最小值之间的任何值

### 3. 偏导数

#### 定义

$$
f_{x}'(x_0, y_0) = \lim _ { \Delta x \rightarrow 0 } \frac { f ( x _ { 0 } + \Delta x, y _ { 0 } ) - f ( x _ { 0 } , y _ { 0 } ) } { \Delta x } = \cfrac{d}{dx} f(x, y_0)|_{x = x_0} \\
f_{y}'(x_0, y_0) = \lim _ { \Delta y \rightarrow 0 } \frac { f ( x _ { 0 }, y _ { 0 } +  \Delta y ) - f ( x _ { 0 } , y _ { 0 } ) } { \Delta y } = \cfrac{d}{dy} f(x_0, y)|_{y = y_0}
$$

:star2:先代后求

#### 几何意义

$$
f_{x}'(x_0, y_0) 表示曲线 z = f(x, y_0) 在点 (x_0, y_0, f(x_0, y_0)) 处的切线对 x 轴的斜率\\
f_{y}'(x_0, y_0) 表示曲线 z = f(x_0, y) 在点 (x_0, y_0, f(x_0, y_0)) 处的切线对 y 轴的斜率
$$

#### 高阶偏导数

$设 z = f(x, y)$
$$
\frac { \partial ^ { 2 } z } { \partial x ^ { 2 } } = f _ { x x } ^ { \prime \prime } ( x , y ) = \frac { \partial } { \partial x } ( \frac { \partial z } { \partial x } ), 

\enspace 

\frac { \partial ^ { 2 } z } { \partial x \partial y  } = f _ { x y } ^ { \prime \prime } ( x , y ) = \frac { \partial } { \partial y } ( \frac { \partial z } { \partial x } ), \\


\frac { \partial ^ { 2 } z } { \partial y ^ { 2 } } = f _ { y y } ^ { \prime \prime } ( x , y ) = \frac { \partial } { \partial y } ( \frac { \partial z } { \partial y } ),

\enspace 


\frac { \partial ^ { 2 } z } { \partial y  \partial x } = f _ { y x } ^ { \prime \prime } ( x , y ) = \frac { \partial } { \partial x } ( \frac { \partial z } { \partial y } ).
$$
定理：如果函数的两个二阶混合偏导数在区域D内==连续==，则在区域内恒有
$$
f _ { x y } ^ { \prime \prime } ( x , y ) = f _ { y x } ^ { \prime \prime } ( x , y )
$$

### 4. 全微分 :star2:

#### 定义

$$
若  \Delta  z = f ( x _ { 0 } + \Delta x , y _ { 0 } +  \Delta  y ) - f ( x _ { 0 } , y _ { 0 } ) = A \Delta x + B \Delta y + o ( \rho ),\\
则称函数 z = f ( x , y ) 在点 ( x _ { 0 } , y _ { 0 } ) 可微，\\
A \Delta x + B \Delta y 称为函数 z = f ( x , y ) 在点 ( x _ { 0 } , y _ { 0 } ) 的全微分，记为 \\
d z = A \Delta x + B \Delta y
$$

:star2:以下四条等价
$$
(1) \Delta z = f ( x _ { 0 } + \Delta x , y _ { 0 } + \Delta y ) - f ( x _ { 0 } , y _ { 0 } ) = A \Delta x + B \Delta y + o ( \rho ) \\
(2) \lim_{\substack{x \to x_0 \\ y \to y_0}} \cfrac{[ f ( x _ { 0 } + \Delta x , y _ { 0 } + \Delta y ) - f ( x _ { 0 } , y _ { 0 } ) ] - [ A { \Delta } x + B \Delta y ]} { \sqrt { { ( \Delta x ) ^ { 2 } + ( \Delta y ) ^ { 2 } } } } = 0 \\
(3) \Delta z = f ( x , y ) - f ( x - x _ { 0 } , y - y _ { 0 } ) = A ( x - x_0 )  + B ( y - y_0 ) + o ( \rho ) \\
(4) \lim_{\substack{x \to x_0 \\ y \to y_0}} \cfrac{[f ( x , y ) - f ( x - x _ { 0 } , y - y _ { 0 } ) ] - [ A ( x - x_0 )  + B ( y - y_0 ) ]} { \sqrt { { ( x - x_0 ) ^ { 2 } + ( y - y_0 ) ^ { 2 } } } } = 0
$$

#### :star2:可微性判定

$\Delta  z = f ( x _ { 0 } + \Delta x , y _ { 0 } +  \Delta  y ) - f ( x _ { 0 } , y _ { 0 } ) = A \Delta x + B \Delta y + o ( \rho )$

1. 必要条件：$f _ { x } ^ { \prime } ( x _ { 0 } , y _ { 0 } ) 和 f _ { y } ^ { \prime } ( x _ { 0 } , y _ { y } ) 都存在$ ==两个偏导数存在==
2. 充分条件：$f _ { x } ^ { \prime } ( x , y ) 和 f _ { y } ^ { \prime } ( x , y ) 在 (x_0, y_0) 连续$ ==两个偏导数连续==
3. 用定义判断
   1. $f _ { x } ^ { \prime } ( x _ { 0 } , y _ { 0 } ) 和 f _ { y } ^ { \prime } ( x _ { 0 } , y _ { y } ) 是否都存在?$
   2. $\lim_{\substack{x \to x_0 \\ y \to y_0}} \cfrac{[ f ( x _ { 0 } + \Delta x , y _ { 0 } + \Delta y ) - f ( x _ { 0 } , y _ { 0 } ) ] - [ f _ { x } ^ { \prime } ( x _ { 0 } , y _ { 0 } ) { \Delta } x + f _ { y } ^ { \prime } ( x _ { 0 } , y _ { y } ) \Delta y ]} { \sqrt { { ( \Delta x ) ^ { 2 } + ( \Delta y ) ^ { 2 } } } } = 0$ 是否为0

#### 计算

$若 f ( x , y ) 可微，则 d z = \cfrac { \partial f } { \partial x } d x + \cfrac { \partial f } { \partial y } d y$

### 5. 连续、可导、可微的关系

![image-20230824111403585](https://p.ipic.vip/x6033c.png)

:star2:偏导存在只与两条线上函数值有关，而连续和可微是整个邻域

偏导连续：
$$
\lim_{\substack{x \to 0 \\ y \to 0}} f_x(x, y)  = f _ { x } ( 0,0 ) \\
\lim_{\substack{x \to 0 \\ y \to 0}} f_y(x, y)  = f _ { y } ( 0,0 )
$$
:heavy_exclamation_mark: 注意是二重极限

## 偏导数与全微分的计算

### 复合函数求导法

$$
设 u = u (x, y), v = v(x, y ) 可导， z = f(u, v) 在相应点有连续一阶偏导数，则\\
\frac { \partial z } { \partial x } = \frac { \partial f } { \partial u } \frac { \partial u } { \partial x } +  \frac { \partial f } { \partial v } \frac { \partial v } { \partial x } \\
\frac { \partial z } { \partial y } = \frac { \partial f } { \partial u } \frac { \partial u } { \partial y } +  \frac { \partial f } { \partial v } \frac { \partial v } { \partial y }
$$



### 全微分形式不变性

$$
设 z = f (u, v), u = u(x, y )， v = v(x, y) 都有连续一阶偏导数，则\\
dz = \frac { \partial z } { \partial x } dx + \frac { \partial z } { \partial y } dy,\\
dz = \frac { \partial z } { \partial u } du + \frac { \partial z } { \partial v } dv
$$

### 隐函数求导法

#### 由一个方程所确定的隐函数

$设 F(x, y, y) 有连续一阶偏导数， F'_z \ne 0, z = z(x, y) 由 F(x, y, z) = 0所确定$

方法

1. 公式：$\cfrac { \partial z } { \partial x } = - \cfrac{F'_x}{F'_z}, \cfrac { \partial z } { \partial y } = - \cfrac{F'_y}{F'_z}$
2. 等式两边求导：$F'_x + F'_z \cfrac { \partial z } { \partial x } = 0, F'_y + F'_z \cfrac { \partial z } { \partial y } = 0$
3. 利用微分形式不变性：$F'_x dx + F'_y dy + F'_z dz = 0$

#### 由方程组所确定的隐函数

$设 u = u(x, y), v = v(x, y) 由 \begin{cases}
   F (x, y, u, v) = 0 \\
   G (x, y, u, v) = 0
\end{cases} 所确定$

方法

1. 等式两边同时求导$\begin{cases}
   F'_x + F'_u \cfrac { \partial u } { \partial x } + F'_v \cfrac { \partial v } { \partial x } = 0\\
   G'_x + G'_u \cfrac { \partial u } { \partial x } + G'_v \cfrac { \partial v } { \partial x } = 0\\
   \end{cases}$
2. 利用微分形式不变性$\begin{cases}
   F'_x dx + F'_y dy + F'_u du + F'_v dv = 0\\
   G'_x dx + G'_y dy + G'_u du + G'_v dv = 0
   \end{cases}$

## 极值与最值

### 无条件极值

#### 定义

$$
设函数 z = f(x, y) 在点 P(x_0, y_0) 的某邻域内有定义，\\
若对该邻域内任意的点 P(x, y) 均有 \\
f(x, y) \le f(x_0, y_0) （或f(x, y) \ge f(x_0, y_0) ） \\
则称 (x_0, y_0) 为 f(x, y) 的极大值点（或极小值点）；\\
称 f(x_0 y_0) 为 f(x, y) 的极大值（或极小值）
$$

定理1（极值的必要条件）
$$
设 z = f(x, y) 在点 (x_0, y_0) 存在偏导数，\\
且 (x_0, y_0) 为 f(x, y) 的极值点，则 \\
f'_x (x_0, y_0) = 0, f'_y (x_0, y_0) = 0
$$
定理2（极值的充分条件）
$$
设 z = f(x, y) 在点 (x_0, y_0) 的某邻域内有二阶连续偏导数，\\
又 f'_x (x_0, y_0), f'_y (x_0, y_0) = 0. 记 \\
A = f''_{xx} (x_0, y_0), B = f'_{xy} (x_0, y_0), C = f'_{yy} (x_0, y_0).
$$
则有下述结论：

1. $若 AC - B^2 \gt 0, 则 (x_0, y_0) 为 f (x, y) 的极值点$
   1. $A \lt 0, (x_0, y_0) 为极大值点$
   2. $A \gt 0, (x_0, y_0) 为极小值点$
2. $若 AC - B^2 \lt 0, 则 (x_0, y_0) 不为 f (x, y) 的极值点$
3. $若 AC - B^2 = 0, 则不一定是极值点（一般需要用定义判定）$

求具有二阶连续偏导数二元函数 z = f(x, y) 极值的一般步骤

1. $求出f(x, y)的驻点 P_1, \cdots, P_k$
2. 利用极值的充分条件判定驻点 $P_i$ 是否为极值点

:heavy_exclamation_mark:偏导数不存在的点也可能取到极值，例如$f(x,y) = \sqrt{x^2 + y^2}$，这种点一般用极值定义判定

### 条件极值及拉格朗日乘数法

求 z = f (x, y) 在条件 𝛗 (x, y) = 0 下的条件极值的一般方法为：

1. 构造拉格朗日函数 $F(x,y, \lambda) = f(x,y) + \lambda \varphi (x, y)$

2. 将 F (x, y, 𝛌) 分别对 x, y, 𝛌 求偏导，构造方程组
   $$
   \begin{cases}
      f'_x (x, y) + \lambda \varphi'_ x (x, y) = 0, \\
      f'_y (x, y) + \lambda \varphi'_ y (x, y) = 0, \\
      \varphi (x, y) = 0
   \end{cases}
   $$

解出 x, y 及 𝛌 ，则其中 (x, y) 就是函数 f (x, y) 在条件 𝛗 (x, y) = 0 下的可能的极值点。

由以上方法可推广到对于 n 元函数在 m 个约束条件下的极值问题，如求 u = f(x, y, z) 在条件 𝛗 (x, y, z) = 0, 𝛙 (x, y, z)  = 0 下的极值，可构造拉格朗日函数
$$
F (x, y, z, \lambda, \mu) = f + \lambda \varphi + \mu \psi
$$
将 F 对 x, y, z, 𝛌, 𝛍 分别求偏导，并构造方程组
$$
\begin{cases}
   f'_x (x,y,z) + \lambda \varphi'_x (x,y,z) + \mu \psi'_x (x,y,z) = 0\\
   f'_y (x,y,z) + \lambda \varphi'_y (x,y,z) + \mu \psi'_y (x,y,z) = 0\\
   f'_z (x,y,z) + \lambda \varphi'_z (x,y,z) + \mu \psi'_z (x,y,z) = 0\\
   \varphi (x,y,z) = 0\\
   \psi (x,y,z) = 0
\end{cases}
$$
解出 x, y,z, 𝛌 及 𝛍 ，则其中 (x, y, z) 就是可能的极值点。

对于实际问题，如果驻点唯一，且由实际意义知问题存在最大（小）值，则该驻点即为最大（小）值。如果存在多个驻点，且由实际意义知道问题既存在最大值也存在最小值，只需比较各驻点处的函数值，最大的则为最大值，最小的则为最小值

## 最大最小值

### 求连续函数 f (x, y) 在有界闭区域D上的最大最小值三部曲

1. 求 f(x, y) 在D内部可能的极值点
2. 求 f(x, y) 在D边界上的最大最小值
3. 比较

### 应用题
