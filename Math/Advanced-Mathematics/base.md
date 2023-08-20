---
title: 三大计算
---

## 三大计算

### 无穷小量：极限为0

$x \to 0, x^{3}, x^{5}, \sin x, \tan x, \cos x - 1 \to 0$

注：

- 变量，并不代表一个很小的数值
- $x \to 0$：
  - 当 $x \to 0,x^{3}$ 为一个无穷小量
  - 当 $x \to 6,(x - 6)^{3}$ 为一个无穷小量
  - 当 $x \to \infty,\frac{1}{x^{3}}$ 为一个无穷小量
- 极限为0：
- 数字为0：
- 孤帆远影碧空尽，唯见长江天际流

### 指数函数极限

(1)
$\lim\limits_{x \to \infty}\frac{3x^{3}+4x^{2}+1}{5x^{5}+3x^{2}+8}=0$

$\lim\limits_{x \to \infty}\frac{3x^{5}+4x^{2}+1}{5x^{3}+3x^{2}+8}=\infty$

(2)
$
\lim\limits_{n \to \infty}a^{n}= \begin{cases}
+\infty,\quad a>1 \\
1,\quad a=1 \\
0,\quad \lvert{a}\rvert <1 \quad (\lim\limits_{n \to \infty}(\frac{1}{3})^{n}=0)
\end{cases}
$

[graphs of |a| < 1](https://www.wolframalpha.com/input?i=y%3D%281%2F3%29%5Ex)

(3) 左、右极限

$\lim\limits_{x \to x_{0}}f(x)=A \Leftrightarrow \lim\limits_{x \to x_{0}^{+}}f(x) = \lim\limits_{x \to x_{0}^{-}}f(x) = A$

$\lim\limits_{x \to \infty}f(x)=A \Leftrightarrow \lim\limits_{x \to +\infty}f(x) = \lim\limits_{x \to -\infty}f(x) = A$

:star2: 左右极限不相同的函数

- ==$e^{x}$== [graph](https://www.wolframalpha.com/input?i=y%3De%5Ex)
  - $\lim\limits_{x \to +\infty}e^{x}=e^{+\infty}=+\infty(\text{不存在})$
  - $\lim\limits_{x \to -\infty}e^{x}=e^{-\infty}=\frac{1}{e^{\infty}}=0(\text{不存在})$
  - 变形
  - $\lim\limits_{x \to 0^{+}}e^{\frac{1}{x}} \Leftrightarrow \lim\limits_{x \to +\infty}e^{x}=+\infty$
  - $\lim\limits_{x \to 0^{-}}e^{\frac{1}{x}} \Leftrightarrow \lim\limits_{x \to -\infty}e^{x}=0$
- ==$\arctan x$== [graph](https://www.wolframalpha.com/input?i=y%3Darctanx)
  - $\lim\limits_{x \to \infty}\arctan x \Rightarrow$
  - $\lim\limits_{x \to +\infty}\arctan x = +\frac{\Pi}{2}$
  - $\lim\limits_{x \to -\infty}\arctan x = -\frac{\Pi}{2}$
  - 变形
  - $\lim\limits_{x \to 0}\arctan \frac{1}{x} \Rightarrow$
  - $x \to 0^{+} = \lim\limits_{x \to +\infty}\arctan x = +\frac{\Pi}{2}$
  - $x \to 0^{-} = \lim\limits_{x \to -\infty}\arctan x = -\frac{\Pi}{2}$

:star2: (4) 无穷小量 x 有界量 = 无穷小

:star2: (5) $\lim\limits_{x \to 0}x\sin \frac{1}{x}=0$

注: $x=\lim\limits_{x \to 0}x\cdot\lim\limits_{x \to 0} \sin \frac{1}{x}$ 不成立, 因为$\lim\limits_{x \to 0} \sin \frac{1}{x}$ 不存在

极限四则运算法则

$\exists\lim f(x)\text{且}\exists \lim g(x), \text{那么}\lim f(x)g(x)=\lim f(x)\cdot\lim g(x)$

$\lim\limits_{x \to 0}\frac{\sin x}{x}=1$

$\lim\limits_{x \to 0}\frac{1}{x}\sin \frac{1}{x} \nexists$

高阶无穷小+低阶无穷小=低阶无穷小

$x \to 0, x^{5} + x^{3} \approx x^{3}$

$x \to 0,\quad \sin x \backsim x,\quad\sin x - x \backsim -\frac{1}{6}x^{3},\quad\sin x + x \backsim 2x,\quad\sin x - 5x \backsim -4x,\quad x\cdot\sin x \backsim x^{2}$

泰勒展开求极限

$x - \sin x\backsim \frac{1}{6}x^{3}\Rightarrow$==$f(x)-\sin f(x)=\frac{1}{6}f(x)^{3}$==

$
x \to 0\\
\sin x, \tan x, \arcsin x, \arctan x, \ln(1+x), e^{x} - 1 \backsim x \\
1-\cos x \backsim \frac{1}{2}x^{2}\\
(1+x)^{\alpha}-1 \backsim \alpha x
$

==$x - \ln(1+x) \backsim \frac{1}{2}x^{2}$==

$\sin x = x - \frac{1}{6}x^{3} + o(x^{3})$

$\tan x = x + \frac{1}{3}x^{3} + o(x^{3}) \Rightarrow \tan x - x \backsim \frac{1}{3}x^{3} \Rightarrow \tan f(x) - f(x) \backsim \frac{1}{3}f(x)^{3}$

$\tan x - \sin x \backsim \frac{1}{2}x^{3}$

$\arcsin x = x + \frac{1}{6}x^{3} + o(x^{3})$

$\arctan x = x - \frac{1}{3}x^{3} + o(x^{3})$

$\arcsin x - \arctan x \backsim \frac{1}{2}x^{3}$

$\lim(1+x)^{\frac{1}{x}} = e$
