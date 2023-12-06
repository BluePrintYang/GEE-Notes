# 7. 参数估计

## 一、点估计

### 点估计

**点估计**：$\text{用样本 }X_1,X_2,\cdotp\cdotp\cdotp,X_n\text{构造的统计量}\hat{\theta}(X_1,X_2,\cdotp\cdotp\cdotp,X_n)\text{来估计未知参数}\theta$

**估计量**：$\text{统计量 }\hat{\theta}(X_1,X_2,\cdots,X_n)$

估计量是随机变量。它所取得的观测值 $\hat{\theta}(x_1,x_2,\cdots,x_n)$ 称为**估计值**

有时将 θ 的估计量和估计值统称为 θ 的**估计**

### 无偏估计量

${\text{设 }\hat\theta\text{ 是}\theta\text{ 的估计量 },\text{如果 }E(\hat{\theta})}=\theta,\text{则称 }\hat{\theta}=\hat{\theta}(X_1,X_2,\cdotp\cdotp\cdotp,X_n)\text{是未知参数 }\theta$ 的**无偏估计量** 

### 更有效的估计量

$\text{设 }\hat{\theta}_1\text{ 和 }\hat{\theta}_2\text{ 都是 }\theta\text{ 的无偏估计量,且 }D(\hat{\theta}_1)<D(\hat{\theta}_2),\text{则称 }\hat{\theta}_1\text{ 比}\hat{\theta}_2\text{ 更有效}$

### 一致估计量

${\text{设}\hat\theta}(X_1,X_2,\cdotp\cdotp\cdotp,X_n)\text{ 是 }\theta\text{的估计量,如果 }\hat{\theta}\text{依概率收敛于}\theta$

## 估计量的求法和区间估计

### 矩估计法

用样本矩估计相应的总体矩，用样本矩的函数估计总体矩相应的函数，然后求出要估计的参数

### 矩估计法步骤

### 最大似然估计法

$\text{设 }X_1,X_2,\cdots,X_n\text{ 是来自总体 }X\text{ 的样本 },x_1,x_2,\cdots,x_n\text{ 是样本值,}\theta\text{ 是待估参数}.$

#### 似然函数

离散型
$L(\theta)=L(x_1,x_2,\cdots,x_n;\theta)=\prod\limits_{i=1}^np(x_i;\theta)$

连续型

$L(\theta)=L(x_{1},x_{2},\cdotp\cdotp\cdotp,x_{n};\theta)=\prod\limits_{i=1}^{n}f(x_{i};\theta)$

#### 最大似然估计

$\text{对于给定的样本值 }x_1,x_2,\cdotp\cdotp\cdotp,x_n,\text{使似然函数 }L(x_1,x_2,\cdotp\cdotp\cdotp,x_n;\theta)\text{ 达到最大值的参数值}\\
\mathbf{\hat{\theta}}=\mathbf{\hat{\theta}}(x_{_1},x_{_2},\cdots,x_{_n})\text{称为未知参数 θ的最大似然估计值,}\text{相应的}\hat{\theta}=\hat{\theta}(X_1,X_2,\cdotp\cdotp\cdotp,X_n)\text{称为 }\theta \text{的最大似然估计量}$

### 最大似然估计法步骤

### 区间估计