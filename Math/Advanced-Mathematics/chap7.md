# 无穷级数

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
   2. $\text{若级数}\displaystyle\sum_{n=1}^\infty u_n\text{ 收敛,但}\sum_{n=1}^\infty|u_n|\textbf{发散,此时称级数}\sum_{n=1}^\infty u_n\text{ 条件收敛}. $

2. 绝对收敛与条件收敛基本结论
   1. 绝对收敛的级数一定收敛
   2. 条件收敛的级数的所有正项（或负项）构成的级数一定发散

