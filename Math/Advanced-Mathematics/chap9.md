# 9. 多元函数积分学及其应用

## 三重积分与线面积分

### 三重积分

#### 定义

$\iiint\limits_{\Omega}f(x,y,z)\mathrm{d}V=\lim\limits_{d\to0}\sum\limits_{k=1}^{n}f(\xi_{k},\eta_{k},\xi_{k})\Delta v_{k}.$

#### 性质

与二重积分类似

#### 计算

##### 直角坐标

1. 先一后二（先单后重）

   $D_{xy} \text{为 } \Omega \text{ 在 } xOy \text{ 面上的投影}$

   $\iiint\limits_{\Omega}f(x,y,z)\mathrm{d}v=\iint\limits_{D_{xy}}\mathrm{d}\sigma\int_{z_{1}(x,y)}^{z_{2}(x,y)}f(x,y,z)\mathrm{d}z.$

2. 先二后一（先重后单）

   $\iiint\limits_{\Omega}f(x,y,z)\mathrm{d}v=\int_{c_{1}}^{c_{2}}\mathrm{d}z\iint\limits_{D_{z}}f(x,y,z)\mathrm{d}x\mathrm{d}y.$

##### 柱坐标

$$
\text{柱坐标与直角坐标的关系为}\\
\begin{cases}
x=r\cos\theta,& 0\leqslant r<+\infty,\\
y=r\sin\theta,& 0\leqslant\theta\leqslant2\pi,\\
z=z,& -\infty<z<+\infty.
\end{cases}\\
\text{体积微元 } dv = rdrd\theta dz\\
\iiint\limits_{\Omega}f(x,y,z)\mathrm{d}v=\iiint\limits_{\Omega}f(r\cos\theta,r\sin\theta,z)r\mathrm{d}r\mathrm{d}\theta\mathrm{d}z.
$$

##### 球坐标

$$
\text{球坐标与直角坐标的关系为}\\
\begin{cases}
x=r\sin\varphi\mathrm{cos}\theta,&0\leqslant r<+\infty,\\
y=r\mathrm{sin}\varphi\mathrm{sin}\theta,&0\leqslant\varphi\leqslant\pi,\\
z=r\mathrm{cos}\varphi,&0\leqslant\theta\leqslant2\pi.&
\end{cases}\\
\text{体积微元}\quad\mathrm{d}v=r^2\sin\varphi\mathrm{d}r\mathrm{d}\varphi\mathrm{d}\theta\\
\iiint\limits_{\Omega}f(x,y,z)\mathrm{d}v=\iiint\limits_{\Omega}f(r\sin\varphi\text{cos }\theta,r\text{sin }\varphi\text{sin }\theta,r\text{cos }\varphi)r^2\sin\varphi\mathrm{d}r\mathrm{d}\varphi\mathrm{d}\theta
$$

##### 奇偶性

$$
\begin{aligned}
\text{若积分域 }\Omega\text{ 关于 }x\text{Oy 坐标面对称},f(x,y,z)\text{ 关于 }z\text{ 有奇偶性},\text{则}\\
\iiint\limits_{\boldsymbol{\Omega}}f\left(x,y,z\right)\mathrm{d}v=\begin{cases}2\iiint\limits_{\boldsymbol{\Omega_{z}}\geqslant0}f\left(x,y,\boldsymbol{z}\right)\mathrm{d}v,&f\left(x,y,z\right)\text{关于}z\text{是偶函数,}\\\\0,&f\left(x,y,\boldsymbol{z}\right)\text{关于}z\text{是奇函数}.\end{cases}
\end{aligned}
$$

##### 利用变量对称性

### 对弧长的线积分（第一类线积分）

#### 定义

$\int_{L}f(x,y)\mathrm{d}s=\lim_{\lambda\to0}\sum_{i=1}^{n}f(\xi_{i},\eta_{i})\Delta s_{i}.$

#### 性质

$\int_{L(\widehat{AB})}f(x,y)ds=\int_{L(\widehat{BA})}f(x,y)ds\quad(\text{与积分路径方向无关}).$

#### 计算（平面）

##### 直接法

1. 参数方程 $\left.L:\left\{\begin{matrix}{x=x(t),}\\{y=y(t)}\\\end{matrix}\right.\right.(\alpha\leqslant t\leqslant\beta)$

   $\int_{L}f(x,y)\mathrm{d}s=\int_{a}^{\beta}f(x(t),y(t))\sqrt{x^{\prime2}(t)+y^{\prime2}(t)}\mathrm{d}t.$

2. 直角坐标方程 $L_{:}y=y(x)(a\leqslant x\leqslant b)$

   $\int_{L}f(x,y)ds=\int_{a}^{b}f(x,y(x))\sqrt{1+y^{\prime2}(x)}\mathrm{d}x.$

3. 极坐标方程 $L:r=r(\theta)(\alpha\leqslant\theta\leqslant\beta)$

   $\int_{L}f(x,y)\mathrm{d}s=\int_{a}^{\beta}f(r\cos\theta,r\sin\theta)\sqrt{r^{2}+r^{\prime2}}\mathrm{d}\theta.$

##### 利用奇偶性

1. 曲线 L 关于 y 轴对称

   $\left.\int_{L}f(x,y)\mathrm{d}s=\left\{\begin{matrix}2\int_{L,x\geqslant0}f(x,y)\mathrm{d}s,&\text{当 }f(x,y)\text{关于 }x\text{为偶函数,}\\\\0,&\text{当 }f(x,y)\text{关于 }x\text{为奇函数}.\end{matrix}\right.\right.$

2. 曲线 L 关于 x 轴对称

   $\left.\int_Lf(x,y)ds=\left\{\begin{matrix}2\int_{L,y\geqslant0}f(x,y)ds,&\text{当}f(x,y)\text{ 关于 }y\text{为偶函数,}\\0,&\text{当}f(x,y)\text{关于 }y\text{为奇函数}.\end{matrix}\right.\right.$

##### 利用对称性

$$
\text{若积分曲线关于直线 }y=x\text{ 对称,则}\int_Lf(x,y)\mathrm{d}s=\int_Lf(y,x)\mathrm{d}s.\\\text{特别地,}\int_Lf(x)\mathrm{d}s=\int_Lf(y)\mathrm{d}s.\\
\text{对空间曲线积分}\int_Lf(x,y,z)\mathrm{d}s,\text{通常化为定积分计算},\text{即}\\
\text{若曲线 }L\text{ 的方程为}:x=x(t),y=y(t),z=z(t)\quad(a\leqslant t\leqslant\beta),\text{则}\\
\int_{L}f\left(x,y,z\right)\mathrm{d}s=\int_{\alpha}^{\beta}f\left(x(t),y(t),z(t)\right)\sqrt{x^{\prime2}(t)+y^{\prime2}(t)+z^{\prime2}(t)}\mathrm{d}t.
$$



### 对坐标的线积分（第二类线积分）

#### 定义

$\int_{L}P(x,y)\mathrm{d}x+Q(x,y)\mathrm{d}y=\lim_{\lambda\to0}\sum_{i=1}^{n}\bigl[P(\xi_{i},\eta_{i})\Delta x_{i}+Q(\xi_{i},\eta_{i})\Delta y_{i}\bigr].$

#### 性质

$\int_{L(\widehat{AB})}P\mathrm{d}x+Q\mathrm{d}y=-\int_{L(\widehat{BA})}P\mathrm{d}x+Q\mathrm{d}y\quad(\text{与积分路径方向有关}).$

#### 计算方法（平面）

##### 直接法

$$
\left.L:\left\{\begin{matrix}{x=x(t),}\\{y=y(t)}\\\end{matrix}\right.\right. t\in\begin{bmatrix}a,\beta\end{bmatrix},\text{其起点和终点分别对应参数 }t=\alpha\text{ 和}t=\beta,\\
P(x,y),Q(x,y)\text{ 在 }L\text{ 上连续,则}\\\int_{L}P\mathrm{d}x+\mathbf{Q}\mathrm{d}y=\int_{\alpha}^{\beta}[P(x(t),y(t))x^{\prime}(t)+\mathbf{Q}(x(t),y(t))y^{\prime}(t)]\mathrm{d}t.
$$

##### 格林公式

闭区域，函数 P Q 具有一阶连续偏导数，将线积分转化为二重积分

$\oint_{L}P\mathrm{d}x+Q\mathrm{d}y=\iint\limits_{D}\left(\frac{\partial Q}{\partial x}-\frac{\partial P}{\partial y}\right)\mathrm{d}\sigma,$

L 为 D 取正向的边界曲线

##### 补线用格林公式

##### 利用线积分与路径无关

判定 ${\frac{\partial P}{\partial y}}={\frac{\partial Q}{\partial x}},\forall(x,y)\in D$

计算

1. 改换路径

   $\begin{aligned}\int_{(x_{1},y_{2})}^{(x_{2},y_{2})}P\mathrm{d}x+Q\mathrm{d}y&=\int_{x_{1}}^{x_{2}}Q(x,y_{1})\mathrm{d}x+\int_{y_{1}}^{y_{2}}Q(x_{2},y)\mathrm{d}y\\\int_{(x_{1},y_{1})}^{(x_{2},y_{2})}P\mathrm{d}x+Q\mathrm{d}y&=\int_{y_{1}}^{y_{2}}Q(x_{1},y)\mathrm{d}y+\int_{x_{1}}^{x_{2}}P(x,y_{2})\mathrm{d}x.\end{aligned}$

2. 利用原函数

   $\text{设}P\mathrm{d}x+Q\mathrm{d}y=\mathrm{d}F(x,y),\text{即}F(x,y)\text{为}P\mathrm{d}x+Q\mathrm{d}y\text{的原函数,则}\\\int_{(x_{1},y_{1})}^{(x_{2},y_{2})}P\mathrm{d}x+Q\mathrm{d}y=F(x_{2},y_{2})-F(x_{1},y_{1}),$

#### 两类线积分联系

$\oint_{L}P\mathrm{d}x+\mathrm{Q}\mathrm{d}y=\oint_{L}\left(P\cos\alpha+\mathrm{Q}\cos\beta\right)\mathrm{d}s.$

#### 计算方法（空间）

##### 直接法

##### 斯托克斯公式

转为平面（区域为平面投影）