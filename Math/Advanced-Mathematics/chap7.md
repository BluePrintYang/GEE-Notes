# 7. 无穷级数

## 常数项级数

### 级数的概念与性质

#### 概念

$\begin{aligned}
&\text{设}\set{u_{n}}\text{是一数列},\text{则表达式}\sum_{n=1}^{\infty}u_{n}=u_{1}+u_{2}+\cdots+u_{n}+\cdots\text{称为无穷级数,简称级数}. \\
&S_n=\sum_{i=1}^nu_i\textbf{ 称为级数的部分和 }.\text{若部分和数列}\set{S_n}\text{有极限}S,\text{即}\lim_{n\to\infty}S_n=S,\textbf{则称级数}\sum_{n=1}^\infty u_n\text{收敛 },\text{并} \\
&\text{称这个极限值 }S\text{为级数}\sum_{n=1}^\infty u_n\text{ 的和 ,记为}\sum_{n=1}^\infty u_n=\text{S. 如果极限}\operatorname*{lim}_{n\to\infty} S_n \text{ 不存在,则称级数}\sum_{n=1}^\infty u_n\text{发散 }.
\end{aligned}$

#### 性质

1. $\text{若级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 收敛于 S },\text{则级数}\sum_{n=1}^\infty ku_n\text{ 也收敛},\text{且其和为 }kS.$
2. $\text{若}\displaystyle\sum_{n=1}^\infty u_n\text{ 和}\sum_{n=1}^\infty v_n\text{ 分别收敛于S ,}\sigma,\text{则}\sum_{n=1}^\infty(u_n\pm v_n)\text{ 收敛于 }S\pm\sigma.$
3. 在级数中去掉、加上或改变有限项,不会改变级数的敛散性
4. 收敛级数加括号仍收敛且和不变
5. $(\textbf{级数收敛的必要条件)若级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 收敛},\underset{n\rightarrow\infty}{\operatorname*{\text{则}lim}}u_n=0.$

:heavy_exclamation_mark: Attention

1. 一个收敛，一个发散，其和/差必发散
2. 两个都发散，其和/差敛散性不定
3. 级数加括号后收敛，原级数不一定收敛
4. 级数加括号后发散，原级数一定发散
5. $\underset{n\rightarrow\infty}{\operatorname*{lim}}u_n=0,\text{级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 不一定收敛}$
6. $\underset{n\rightarrow\infty}{\operatorname*{lim}}u_n \ne 0,\text{级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 一定发散}$

### 级数的审敛准则

#### 正项级数

$$
(\sum_{n=1}^{\infty}u_{n},u_{n}\geqslant0)
$$

基本定理：$\displaystyle\sum_{n=1}^\infty u_n\text{ 收敛}\Leftrightarrow\mathcal{S}_n\text{ 有界}.$

1. 比较判别法：

$$
\begin{aligned}\text{设 }&u_n\leqslant v_n,\text{则}\\\sum_{n=1}^\infty&v_n\text{ 收敛}\Rightarrow\sum_{n=1}^\infty u_n\text{ 收敛;}\sum_{n=1}^\infty u_n\text{ 发散}\Rightarrow\sum_{n=1}^\infty v_n\text{ 发散}.\end{aligned}
$$

> 通项，大的收敛，小的收敛；小的发散，大的发散

2. 比较法极限形式

$$
\begin{aligned}
&\text{设}\operatorname*{lim}_{n\rightarrow\infty}\frac{u_{n}}{v_{n}}=l(0\leqslant l\leqslant+\infty), \\
&\text{ ① 若 }0<l<+\infty,\text{则}\sum_{n=1}^\infty u_n\text{ 与}\sum_{n=1}^\infty v_n\text{ 同敛散;} \\
&\text{ ② 若 }l=0,\text{则}\sum_{n=1}^{\infty}v_{n}\text{ 收敛}\Rightarrow\sum_{n=1}^{\infty}u_{n}\text{ 收敛 },\sum_{n=1}^{\infty}u_{n}\text{ 发散}\Rightarrow\sum_{n=1}^{\infty}v_{n}\text{ 发散;}  \\
&\text{ ③ 若 }l=+\infty,\text{则}\sum_{n=1}^{\infty}v_{n}\text{发散}\Rightarrow\sum_{n=1}^{\infty}u,\text{发散 },\sum_{n=1}^{\infty}u_{n}\text{收敛}\Rightarrow\sum_{n=1}^{\infty}v_{n}\text{收敛}. 
\end{aligned}
$$

> n 趋于无穷，通项之比。常数，同敛散；0 ，下面大； 无穷，上面大。

常用 p 级数和等比级数
$$
\begin{aligned}\sum_{n=1}^\infty\frac1{n^p} \quad & \text{当 }p>1\text{ 时收敛,当 }p\leqslant1\textbf{ 时发散}.\\
\sum_{n=1}^\infty aq^n \quad & \text{当 }q<1\text{ 时收敛,当 }q\geqslant1\text{ 时发散,其中 }a\text{ 和 }q\text{ 为正数}.\end{aligned}
$$

3. 比值法

$$
\text{若}\lim_{n\to\infty}\frac{u_{n+1}}{u_n}=\rho,\text{则}\sum_{n=1}^\infty u_n\begin{cases}\textbf{收敛,}&\rho<1\text{,}\\\text{发散,}&\rho>1\text{,}\\\text{不一定,}&\rho=1.&\end{cases}
$$

4. 根值法

$$
\text{若}\lim_{n\to\infty}\sqrt[n]{u_n}=\rho,\text{则}\sum_{n=1}^\infty u_n\begin{cases}\text{收敛,}&\rho<1\text{,}\\\text{发散,}&\rho>1\text{,}\\\text{不一定,}&\rho=1.&\end{cases}
$$

5. 积分判别法

$\text{ 设 }f(x)\text{ 是}[1,+\infty)\textbf{上单调减},\text{非负的连续函数,且}a_n=f(n),\text{则}\displaystyle\sum_{n=1}^\infty a_n\text{ 与}\int_1^{+\infty}f(x)\mathrm{d}x\text{ 同敛散}$

> 与通项对应函数的反常积分同敛散

#### 交错级数

$$
(\sum_{n=1}^{\infty}(-1)^{n-1}u_{n},u_{n}>0).
$$

莱布尼兹准则：$\text{若:}(1)u_n\text{单调减};(2)\lim\limits_{n\to\infty}u_n=0,\text{则}\displaystyle\sum_{n=1}^{\infty}(-1)^{n-1}u_n\text{收敛}.$

> 单调减，极限趋于0

#### 任意项级数

$$
(\sum_{n=1}^{\infty}u_{n},u_{n}\textbf{为任意实数)}
$$

1. 绝对收敛与条件收敛概念
   1. $\text{若级数}\displaystyle\sum_{n=1}^\infty|u_n\mid\text{收敛,则}\sum_{n=1}^\infty u_n\textbf{ 必收敛,此时称级数}\sum_{n=1}^\infty u_n\text{ 绝对收敛;}$
   2. $\text{若级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 收敛,但}\sum_{n=1}^\infty|u_n|\textbf{发散,此时称级数}\sum_{n=1}^\infty u_n\text{ 条件收敛}.$

2. 绝对收敛与条件收敛基本结论
   1. 绝对收敛的级数一定收敛
   2. 条件收敛的级数的所有正项（或负项）构成的级数一定发散

$\text{即}\displaystyle\sum_{n=1}^\infty u_n\text{ 条件收敛}\Rightarrow\sum_{n=1}^\infty\frac{u_n+\mid u_n\mid}2\text{ 和}\sum_{n=1}^\infty\frac{u_n-\mid u_n\mid}2\text{发散}.$

:star2:常用结论:

1. 绝对收敛 ± 条件收敛 = 条件收敛:
2. 绝对收敛 ± 绝对收敛 = 绝对收敛:
3. 条件收敛 ± 条件收敛 = 条件收敛或绝对收敛

## 幂级数

### 收敛半径、收敛区间、收敛域

**定义1**：
$$
\begin{aligned}&\quad\text{形如}\quad\sum_{n=0}^\infty a_nx^n=a_0+a_1x+a_2x^2+\cdots+a_nx^n+\cdots\\&\text{或者}\quad\sum_{n=0}^\infty a_n(x-x_0)^n=a_0+a_1(x-x_0)+\cdots+a_n(x-x_0)^n+\cdots\\&\text{的函数项级数称为幂级数}.\end{aligned}
$$
**定理1**：（阿贝尔定理）

1. $\text{若}\displaystyle\sum_{n=0}^{\infty}a_{n}x^{n}\text{ 当 }x=x_{0}\left(x_{0}\neq0\right)\text{时收敛,则当}\mid x\mid<\mid x_{0}\mid\text{时,}\sum_{n=0}^{\infty}a_{\pi}x^{n}\text{ 绝对收敛;}$
2. $\text{若}\displaystyle\sum_{n=0}^\infty a_n x^n\text{当 }x=x_0\text{ 时发散,则当}\mid x\mid>\mid x_0\mid\text{时,}\sum_{n=0}^\infty a_nx^n\text{ 发散}.$

**定理2**：幂级数$\displaystyle\sum_{n=0}^{\infty}a_{n}x^{n}$的敛散性有且仅有以下三种可能

1. 对任何 $x \in (-\infty, +\infty)$ 都收敛
2. 仅在 x = 0 处收敛
3. 存在一个正数 R ，当 | x | < R 时绝对收敛，当 | x | > R 时发散

**定义2**：

**收敛半径**：定理2中的正数 R

**收敛区间**：开区间 (-R, R)

**收敛域**：$\text{再考察 }x=\pm R\text{时}\displaystyle\sum_{n=0}^\infty a_nx^n\text{ 的收敛性,可得出该级数收敛点的全体}.$

**定理3**：
$$
\text{如果}\lim_{n\to\infty}\left|\frac{a_{n+1}}{a_n}\right|=\rho,\text{则}R=\frac1\rho.
$$
**定理4**：
$$
\text{如果}\lim_{n\to\infty}\sqrt[n]{\mid a_n\mid}=\rho,\text{则}R=\frac1\rho.
$$

### 幂级数的性质

#### 有理运算性质

$\textbf{设幂级数}\displaystyle\sum_{n=0}^\infty a_n x^n\text{ 的收敛半径为 }R_1,\sum_{n=0}^\infty b_n x^n\text{ 的收敛半径为 }R_2\text{ ,令 }R=\min\left<R_1,R_2\right>,\text{则有}$

1. 加法：$\displaystyle\sum_{n=0}^{\infty}a_{n}x^{n}+\sum_{n=0}^{\infty}b_{n}x^{n}=\sum_{n=0}^{\infty}\left(a_{n}+b_{n}\right)x^{n},\quad x\in(-R,R).$

2. 减法：$\displaystyle\sum_{n=0}^{\infty}a_{n}x^{n}-\sum_{n=0}^{\infty}b_{n}x^{n}=\sum_{n=0}^{\infty}\left(a_{n}-b_{n}\right)x^{n},\quad x\in(-R,R).$

3. 乘法：$\begin{aligned}&(\sum_{n=0}^\infty a_nx^n)\cdot(\sum_{n=0}^\infty b_nx^n)\\&=a_0b_0+(a_0b_1+a_1b_0)x+(a_0b_2+a_1b_1+a_2b_0)x^2+\cdots+\\&\quad(a_0b_n+a_1b_{n-1}+\cdots+a_nb_0)x^*+\cdots,\quad x\in(-R,R).\end{aligned}$

4. 除法：$\displaystyle\frac{\displaystyle\sum_{n=0}^{\infty}a_{n}x^{n}}{\displaystyle\sum_{n=0}^{\infty}b_{n}x^{n}}=\sum_{n=0}^{\infty}c_{n}x^{n},\quad x\in(-R,R).$

   $\displaystyle\text{其中系数 }c_n(n=0,1,2\cdotp\cdotp\cdotp)\text{由(}\sum_{n=0}^\infty b_nx^n)\cdot(\sum_{n=0}^\infty c_nx^n)=\sum_{n=0}^\infty a_nx^n\text{ 所确定}.$

#### 分析性质

$\displaystyle\textbf{设幂级数}\sum_{n=0}^\infty a_nx^n\text{ 的收敛半径为}R,\text{和函数为 }S(x),\text{则}$

1. 连续性：S(x) 在收敛域上连续

2. 可导性：S(x) 在收敛区间 (-R, R) 内可导，且可逐项求导，即
   $$
   S^{\prime}(x)=\big(\sum_{n=0}^{\infty}a_{n}x^{n}\big)^{\prime}=\sum_{n=0}^{\infty}\big(a_{n}x^{n}\big)^{\prime}=\sum_{n=1}^{\infty}na_{n}x^{n-1},
   $$
   求导后的幂级数与原幂级数有相同的收敛半径

3. 可积性：S(x) 在收敛域上可积，且可逐项积分，即
   $$
   \int_0^xf(t)\mathrm{d}t=\int_0^x\sum_{n=0}^\infty a_nt^n\mathrm{d}t=\sum_{n=0}^\infty\int_0^xa_nt^n\mathrm{d}t=\sum_{n=0}^\infty\frac{1}{n+1}a_nx^{n+1},
   $$
   积分后的幂级数与原幂级数有相同的收敛半径

### 函数的幂级数展开

**定义1**：
$$
\textbf{设函数 }f(x)\text{在区间}(x_0-R,x_0+R\text{)上有定义,若} \\
f(x)=\sum_{n=0}^{\infty}a_{n}(x-x_{0})^{n}, \\
\text{对任意的 }x\in(x_0-R,x_0+R)\text{都成立},\textbf{则称函数}f(x)\\
\text{ 在区间}(x_0-R,x_0+R)\text{ 上能展开为}x-x_0\text{ 的幂级数}.
$$
**定理1**：

如果能展开，那么在区间上任意阶可导，展开式唯一

$a_{n}=\cfrac{f^{(n)}\left(x_{0}\right)}{n!}(n=0,1,2,\cdots).$

**定义2**：
$$
\text{若函数}f(x)\text{在}x=x_0\text{处任意阶可导},\text{则称幂级数} \\
\sum_{n=0}^{\infty}\frac{f^{(n)}\left(x_{0}\right)}{n!}(x-x_{0})^{n},\\
\text{为}f(x)\text{在}x=x_0\text{处的泰勒级数}.\\
\text{特别地,}x_0=0\text{处的泰勒级数}\sum_{n=0}^\infty\frac{f^{(n)}(0)}{n!}x^n\text{称为函数}f(x)\text{的麦克劳林级数}.
$$
**定理2**：
$$
\text{设 }f(x)\text{ 在 }x=x_0\text{ 处任意阶可导,则}\sum_{n=0}^\infty\frac{f^{(n)}(x_0)}{n!}(x-x_0)^n\text{ 在}(x_0-R,x_0+R)\text{ 上}\\
\text{收敛于}f(x)\Leftrightarrow\lim\limits_{n\to\infty}R_n(x)=0,\text{其中}R_n(x)=\frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}\text{为}f(x)\text{在}x_0\text{处的泰勒公式}\\
f(x)=\sum_{k=0}^{n}\frac{f^{(k)}(x_{0})}{k!}(x-x_{0})^{k}+R_{n}(x)\\
\text{中的余项}
$$
几个常用的展开式

1. $\displaystyle\frac1{1-x}=1+x+x^2+\cdots+x^n+\cdots=\sum_{n=0}^\infty x^n\quad\quad\quad(-1<x<1)$
2. $\displaystyle\frac{1}{1+x}=1-x+x^{2}-\cdots+(-1)^{n}x^{n}+\cdots=\sum_{n=0}^{\infty}(-1)^{n}x^{n}\quad(-1<x<1)$
3. $\displaystyle\mathrm{e}^{x}=1+x+\frac{x^{2}}{2!}+\cdots+\frac{x^{n}}{n!}+\cdots=\sum_{n=0}^{\infty}\frac{x^{n}}{n!}\quad(-\infty<x<+\infty)$
4. $\displaystyle\sin x=x-\frac{x^{3}}{3!}+\cdots+\frac{(-1)^{n}x^{2\pi+1}}{(2n+1)!}+\cdots=\sum_{n=0}^{\infty}\frac{(-1)^{n}x^{2\pi+1}}{(2n+1)!}\quad(-\infty<x<+\infty)$
5. $\displaystyle\cos x=1-\frac{x^{2}}{2!}+\cdots+\frac{(-1)^{n}x^{2n}}{\left(2n\right)!}+\cdots=\sum_{n=0}\frac{(-1)^{n}x^{2n}}{\left(2n\right)!}\quad(-\infty<x<+\infty)$
6. $\displaystyle\ln(1+x)=x-{\frac{x^{2}}{2}}+\cdots+{\frac{(-1)^{n-1}x^{n}}{n}}+\cdots=\sum_{n=1}^{\infty}{\frac{(-1)^{n-1}x^{n}}{n}}\quad(-1<x\leqslant1)$
7. $\displaystyle(1+x)^{a}=1+ax+\frac{a(a-1)}{2!}x^{2}+\cdots+\frac{a(a-1)\cdots(a-n+1)}{n!}x^{n}+\cdots =\sum_{n=0}^{\infty}\frac{a(a-1)\cdot\cdot\cdot(a-n+1)}{n!}x^{n}\quad(-1<x<1)$

函数展开为幂级数的两种方法

1. 直接展开法

   1. $\displaystyle\text{求出 }f(x)\text{ 在 }x_0\textbf{ 处的各阶导数 }f^{(n)}(x_0)\text{,并写出 }f(x)\text{ 在 }x=x_0\text{ 处的泰勒级数 }f(x)\sim\sum_{n=0}^\infty\frac{f^{(n)}\left(x_0\right)}{n!}(x-x_0)^n;$
   2. $\displaystyle\text{考察}\lim\limits_{n\rightarrow\infty}R_{n}(x)=\lim_{n\rightarrow\infty}\frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_{0})^{n+1}=0\text{ 是否成立}.$

2. 间接展开法

   根据函数展开为幂级数的唯一性，从某些已知函数的展开式出发，利用幂级数的性质(四则运算,逐项求导,逐项积分)及变量代换等方法,求得所给函数的展开式

直接展开法分两步，但这两步都比较困难，主要用于一开始推导一些基本展开式；有了基本展开式后，主要用间接展开法

