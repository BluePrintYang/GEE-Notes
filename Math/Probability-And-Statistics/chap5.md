# 5. 大数定律和中心极限定理

## 切比雪夫不等式和概率收敛

### 切比雪夫不等式

$P\{\mid X-E(X)\mid\geqslant\varepsilon\}\leqslant\frac{D(X)}{\varepsilon^2}$

### 依概率收敛

$\lim\limits_{n\to\infty}P\{\mid X_n-A\mid<\varepsilon\}=1$

> $X_n$以非常大的概率趋于A

## 大数定律

> 随机变量的算术平均依概率收敛于其期望

### 切比雪夫大数定律

$\lim\limits_{n\to\infty}P\left\{\left|\frac{1}{n}\sum\limits_{i=1}^{n}X_{i}-\frac{1}{n}\sum\limits_{i=1}^{n}E(X_{i})\right|<\epsilon\right\}=1$

### 伯努利大数定律

$\lim\limits_{n\to\infty}P\left\{\left|\frac{X_n}{n}-p\right|<\varepsilon\right\}=1$

### 辛钦大数定律

$\lim\limits_{n\to\infty}P\left\{\left|\frac{1}{n}\sum\limits_{i=1}^{n}X_{i}-\mu\right|<\varepsilon\right\}=1$

## 中心极限定理

> 大量随机变量（>=30）的和近似服从正态分布

$\lim\limits_{n\to\infty}P\left|\frac{X_n-np}{\sqrt{np\left(1-p\right)}}\leqslant x\right|=\boldsymbol{\Phi}(x)$

$\lim\limits_{n\to\infty}P\left\{\frac{\sum_{i=1}^{n}X_{i}-n\mu}{\sqrt{n}\sigma}\leqslant x\right\}=\Phi(x)$