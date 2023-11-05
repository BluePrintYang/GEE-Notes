# 6. 数理统计的基本概念

## 总体和样本

### 总体

所研究对象的某项数量指标 X 的全体和

**个体**：总体中的每个元素

### 样本

$X_{_{1}},X_{_{2}},\cdotp\cdotp\cdotp,X_{_{n}}\text{ 相互独立且都与总体 }X\text{ 同分布}$

**简单随机样本（简称样本）**：$X_{_{1}},X_{_{2}},\cdotp\cdotp\cdotp,X_{_{n}}$

**样本容量**：n

**样本值**：具体的观测值 $x_1,x_2,\cdotp\cdotp\cdotp,x_n$。或称为总体 X 的 n 个**独立观测值**
$$
\begin{aligned}
&\text{若 }X\text{ 的分布为}F(x),\text{则样本 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{ 的分布为}\\
&F_{_n}(x_1,x_2,\cdots,x_n)=\prod_{i=1}^{n}F(x_i).\\
&\text{若 }X\text{ 有概率密度}f(x),\text{则样本 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{ 的概率密度为}\\
&f_{_n}(x_{_1},x_{_2},\cdots,x_{_n})=\prod_{i=1}^{n}f(x_{_i}).\\
&\text{若 }X\text{ 的分布 }P\set{X=a_j} =p_j,j=1,2,\cdotp\cdotp\cdotp,\text{则样本 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{ 的分布为}\\
&P\left\lbrace X_1=x_1,X_2=x_2,\cdots,X_n=x_n\right\rbrace=\prod_{i=1}^nP\left\lbrace X_i=x_i\}\right.\\
&\text{其中 }x_i\text{ 取 }a_1,a_2,\cdotp\cdotp\cdotp\text{ 中的某一个数}.
\end{aligned}
$$

## 统计量和样本数字特征

### 统计量T

$\text{样本 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{ 的不含未知参数的函数 }T=T(X_1,X_2,\cdotp\cdotp\cdotp,X_n)$

### 样本的数字特征

1. 样本均值  $\displaystyle\overline{X}=\frac1n\sum_{i=1}^nX_i$

2. 样本方差  $\displaystyle S^2=\frac{1}{n-1}\sum_{i=1}^n{(X_i-\overline{X})^2}$

   样本标准差  $\displaystyle S=\sqrt{\frac{1}{n-1}\sum_{i=1}^{n}(X_{i}-\overline{X})^{2}}$

### 样本数字特征的性质

1. $\text{如果总体 }X\text{ 有数学期望}E(X)=\mu,\text{则 }E(\overline{X})=E(X)=\mu.$
2. $\text{如果总体 }X\text{ 有方差 }D(X),\text{则 }D(\overline{X})=\frac1nD(X),E(S^2)=D(X).$

## 常用统计抽样分布和正态总体的抽样分布

### $\chi^{2}$ 分布

> n 个相互独立的标准正态分布的和 为 自由度为 n 的 $\chi^{2}$ 分布

$\begin{aligned}
&\text{设 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{ 相互独立且均服从标准正态分布 N(0,1),则称随机变量}\\
&\chi^2=X_1^2+X_2^2+\cdotp\cdotp\cdotp+X_n^2\\
&\text{服从自由度(或参数)为 }n\text{ 的 }\chi^2\text{ 分布,记作 }\chi^2\sim\chi^2(n).\end{aligned}$

#### 性质

1. $\begin{aligned}
   &\text{对给定的 }a(0<\alpha<1),\text{称满足条件}\\
   &P\{\chi^{2}>\chi_{a}^{2}(n)\}=\int_{\chi_{a}^{2}(n)}^{+\infty}f(x)\mathrm{d}x=\alpha\\
   &的点 \chi_a^2(n) 为 \chi^2(n) 分布的上 \alpha 分位点\end{aligned}$
2. $E(\chi^{2})=n,D(\chi^{2})=2n$
3. $\chi_{1}^{2}\text{ 和 }\chi_{2}^{2}\text{ 相互独立，则}\chi_1^2+\chi_2^2\sim\chi^2(n_1+n_2)$

![α分位点](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231104004727070.png)

### t 分布

$X\text{ 和}Y\text{相互独立，} X\sim {N(0,1)},Y\sim\chi^{2}\left(n\right)\\
T=\frac X{\sqrt{Y/n}}\\
\text{服从自由度为 }n\text{ 的 }t\text{ 分布 ,记作 }T\sim t(n).$

#### 性质

1. 概率密度 f(x) 是偶函数，n 充分大时，近似标准正态分布
2. $\begin{aligned}
   &\text{对给定的 }a(0<\alpha<1),\text{称满足条件}\\
   &P\set{ T>t_{a}(n)}=\int_{t_{a}{(n)}}^{+\infty}f(x)\mathrm{d}x=\alpha \\
   &的点 t_{a}{(n)} 为 t(n) 分布的上 \alpha 分位点\end{aligned}$
3. $\text{双侧}\alpha\text{ 分位点 }t_{a/2}(n), P\{\mid T\mid>t_{a/2}(n)\}=\alpha;t_{1-a}(n)=-t_{a}(n)$

![t分布α分位点](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20231106002516629.png)

### F 分布

$X\text{ 和}Y\text{相互独立，} X\sim \chi^{2}\left(n_1\right),Y\sim\chi^{2}\left(n_2\right)\\ F=\frac {X/n_1}{{Y/n_2}}\\ \text{服从自由度为 }(n_1, n_2)\text{ 的 }F\text{ 分布 ,记作 }F\sim F(n_1, n_2).$

#### 性质

1. $\begin{aligned}
   &\text{对给定的 }a(0<\alpha<1),\text{称满足条件}\\
   &P\{F>F_{a}(n_{1},n_{2})\}=\int_{F_{a}(n_{1},n_{2})}^{+\infty}f(x)\mathrm{d}x=\alpha \\
   &的点 F_{a}{(n_1,n_2)} 为 F(n_1,n_2) 分布的上 \alpha 分位点\end{aligned}$
2. $\text{ 如果 }F\sim F(n_1,n_2),\text{则}\frac1F\sim F(n_2,n_1)\\
   F_{_{1-a}}(n_{1},n_{2})=\frac{1}{F_{_a}(n_{2},n_{1})}$

## 一个正态总体的抽样分布

$\text{设总体 }X\sim N(\mu,\sigma^2),X_1,X_2,\cdotp\cdotp\cdotp,X_*\text{ 是来自总体的样本},\text{样本均值为 }\overline{X},\text{样本方差为 }S^2,\text{则有}$

1. $\displaystyle\overline{X}\sim N\Big(\mu,\frac{\sigma^{2}}{n}\Big),U=\frac{\overline{X}-\mu}{\sigma/\sqrt{n}}\sim N(0,1)$
2. $\displaystyle\overline{X}\text{与}S^2\text{相互独立,且 }\chi^2=\frac{(n-1)S^2}{\sigma^2}\sim\chi^2(n-1)$
3. $\displaystyle T={\frac{\overline{X}-\mu}{S/\sqrt{n}}}\sim t(n-1)$
4. $\displaystyle\chi^{2}=\frac{1}{\sigma^{2}}\sum_{i=1}^{n}\left(X_{i}-\mu\right)^{2}\sim\chi^{2}\left(n\right)$

## 两个正态总体的抽样分布

$\begin{gathered}
\text{设总体 }X\sim N(\mu_1,\sigma_1^2)\text{ 和总体 }Y\sim N(\mu_2,\sigma_2^2),X_1,X_2,\cdots,X_{n_1}\text{ 和 }Y_1,Y_2,\cdots,Y_{n_2}\text{ 是分别来} \\
\text{自总体 }X\text{ 和 }Y\text{ 的样本且相互独立,样本均值分别为 }\overline{X}\text{ 和 }\overline{Y},\text{样本方差分别为 }S_1^2\text{ 和 }S_2^2,\text{则有} 
\end{gathered}$

1. $\displaystyle\overline{X}-\overline{Y}\sim N\Big(\mu_{1}-\mu_{2},\frac{\sigma_{1}^{2}}{n_{1}}+\frac{\sigma_{2}^{2}}{n_{2}}\Big),U=\frac{(\overline{X}-\overline{Y})-(\mu_{1}-\mu_{2})}{\sqrt{\frac{\sigma_{1}^{2}}{n_{1}}+\frac{\sigma_{2}^{2}}{n_{2}}}}\sim N(0,1)$
2. $\text{如果 }\sigma_1^2=\sigma_2^2,\text{则}\\
   T=\frac{\overline{X}-\overline{Y}-(\mu_1-\mu_2)}{S_\omega\sqrt{\frac{1}{n_1}+\frac{1}{n_2}}}\sim t(n_1+n_2-2)\\
   \text{其中 S}_\omega=\sqrt{\frac{(n_1-1)\text{S}_1^2+(n_2-1)\text{S}_2^2}{n_1+n_2-2}}$
3. $\displaystyle F=\frac{S_{1}^{2}/\sigma_{1}^{2}}{S_{2}^{2}/\sigma_{2}^{2}}\sim F(n_{1}-1,n_{2}-1)$
