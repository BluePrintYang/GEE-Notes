# 3. 一元函数积分学

## 不定积分

## 定积分

## 反常积分

### 无穷区间反常积分

$$
f(x)为[a,+\infty)上的连续函数，极限\lim\limits_{t \to +\infty}\int_a^tf(x)dx存在，\\
则此极限为f(x)在无穷区间上的反常积分，记作\int_a^{+\infty}f(x)dx，即 \\
\int_a^{+\infty}f(x)dx = \lim\limits_{t \to +\infty}\int_a^tf(x)dx
$$

这时也称反常积分==收敛==，如果极限不存在，则==发散==

同理可定义(-∞,b]区间的反常积分

$$
f(x)为(-\infty,+\infty)上的连续函数，反常积分\int_{-\infty}^0f(x)dx和\int_0^{+\infty}f(x)dx都收敛，\\则反常积分 \int_{-\infty}^{+\infty}f(x)dx 收敛，且\\
\int_{-\infty}^{+\infty}f(x)dx = \int_{-\infty}^0f(x)dx + \int_0^{+\infty}f(x)dx
$$

任一发散，则反常积分发散

### 敛散性判定

1. 比较判别法。对于两个函数f(x)与g(x)
   1. 大的收敛，小的收敛
   2. 小的发散，大的发散
2. 比较法极限形式。$\lim\limits_{x \to +\infty}\frac{f(x)}{g(x)}=\lambda$
   1. $\lambda \ne 0，同敛散$
   2. $\lambda = 0，g(x)大，大的收敛，小的收敛$
   3. $\lambda = +\infty，g(x)小，小的发散，大的发散$

:star2::star2::star2:常用结论（P积分）

$$
\int_a^{+\infty}\frac{1}{x^p}dx=
\tag{a > 0}\begin{cases}
    p \gt 1, 收敛 \\
    p \le 1, 发散
\end{cases}
$$

$$
例：\int_a^{+\infty}\frac{1}{x^2}dx收敛；\int_a^{+\infty}\frac{1}{x}dx发散
$$

**无穷区间反常p积分：p大于1收敛，小于等于1发散**

### 无界函数反常积分

函数在点a的任一邻域内无界，点a称为函数的==瑕点==（也叫无界点）。无界函数的反常积分也称==瑕积分==

$$
f(x)为(a,b]上的连续函数，a为瑕点，极限\lim\limits_{t \to a^+}\int_t^bf(x)dx存在，\\
则此极限为f(x)在[a,b]区间上的反常积分，记作\int_a^bf(x)dx，即 \\
\int_a^bf(x)dx = \lim\limits_{t \to a^+}\int_t^bf(x)dx
$$

这时也称反常积分==收敛==，如果极限不存在，则==发散==

同理可定义[a,b)区间的反常积分

对于区间[a,b]上包含瑕点c的函数，反常积分敛散性参考无穷区间(-∞,+∞)

:star2::star2::star2:常用结论（P积分）

$$
\int_a^b\frac{1}{(x-a)^p}dx=
\begin{cases}
    p \lt 1, 收敛, \\
    p \ge 1, 发散;
\end{cases} \\
\int_a^b\frac{1}{(b-x)^p}dx=
\begin{cases}
    p \lt 1, 收敛, \\
    p \ge 1, 发散.
\end{cases}
$$

$$
例：\int_1^2\frac{1}{(x-1)^{0.5}}dx收敛；\int_1^2\frac{1}{x-1}dx发散\\
\\
\int_1^2\frac{1}{(2-x)^{0.5}}dx收敛；\int_1^2\frac{1}{2-x}dx发散
$$

**瑕点p积分：p小于1收敛，大于等于1发散**

##  定积分应用

### 几何应用

#### 平面图形面积

$\iint\limits_{D}1d\sigma$

(1)
$平面域D由曲线y=f(x),y=g(x),x=a,x=b围成，则\\
S=\iint\limits_{D}1d\sigma=\int_a^bdx\int_{g(x)}^{f(x)}1dy=\int_a^b[f(x)-g(x)]dx$

(2)
$平面域D由曲线r=r(\theta),\theta=\alpha, \theta=\beta围成，则\\
S=\iint\limits_{D}1d\sigma=\int_{\alpha}^{\beta}d\theta\int_0^{r(\theta)}rdr=\frac{1}{2}\int_{\alpha}^{\beta}r^2(\theta)d\theta$

#### 空间体的体积

##### 旋转体的体积

一般问题是，平面域D绕直线L：ax+by+c=0（直线不穿过区域D）旋转所得的旋转体体积，记为V

在区域D中取一小区域（d𝛔），其面积记为d𝛔，(x,y)为区域中任一点，则该小区域绕直线L旋转所得的环状体体积近似值为

$dV=2\pi r(x,y)d\sigma$

其中r(x,y)为点(x,y)到直线L距离，即$r(x,y)=\frac{|ax+by+c|}{\sqrt{a^2+b^2}}$，则

$V=2\pi \iint\limits_Dr(x,y)d\sigma$

特别地

1. 绕x轴（r(x,y)=y）

   $V_x=2\pi \iint\limits_D y d\sigma=2\pi\int_a^b dx \int_0^{f(x)} ydy=\pi\int_a^b f^2(x)dx$

2. 绕y轴（r(x,y)=x）

   $V_y=2\pi \iint\limits_D x d\sigma=2\pi\int_a^b dx \int_0^{f(x)} x dy=2\pi\int_a^b xf(x)dx$

##### 已知横截面积的体积

$V=\int_a^bS(x)ds$

#### 曲线弧长

1. 直角坐标

   $s=\int_a^b \sqrt{1+y'^2}dx$

2. 参数方程

   $s=\int_{\alpha}^{\beta} \sqrt{x'^2(t) + y'^2(t)}dt$

3. 极坐标

   $s=\int_{\alpha}^{\beta} \sqrt{r^2(\theta) + r'^2(\theta)}d\theta$

#### 旋转体侧面积

$S=2\pi\int_a^bf(x) \sqrt{1+f'^2(x)}dx$
