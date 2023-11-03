# 1. 随机事件及其概率

## 样本空间、随机事件及相关运算

### 事件关系及运算

#### 三种关系与四种运算

> 基本事件是两两互不相容的
>
> 三种关系：包含、相等、互不相容；四种运算：和、积、差、逆。

子事件

相等事件

并事件

交事件

对立事件

$\overline{A}=B$

差事件

$A-B=A\overline{B}$

互不相容事件（互斥）

$AB=\varnothing$

#### 事件运算律

吸收率

$\text{若 }A\subset B,\text{则有 }AB=A,\quad A\cup B=B$

徳摩根律

$\overline{A\cup B}=\overline{A}\cap\overline{B},\overline{A\cap B}=\overline{A}\cup\overline{B}$

## 概率和条件概率，古典概型和几何概型，全概率

### 概率的概念

#### 定义

#### 性质

##### 减法公式：

$P(A-B)=P(A)-P(AB).$

##### 加法公式：

$P(A\cup B)=P(A)+P(B)-P(AB)$

$P(A\cup B\cup C)=P(A)+P(B)+P(C)-P(AB)-P(BC)-P(AC)+P(ABC).$

### 古典概型和几何概型

#### 古典概型

$\displaystyle P(A)=\frac{n_A}{n}=\frac{A\text{ 中所包含的样本点数}}{ \Omega\text{ 中样本点总数}}$

#### 几何概型

$\displaystyle P(A)=\frac{L(\Omega_A)}{L(\Omega)}=\frac{\Omega_A\text{ 的几何度量}}{ \Omega\text{ 的几何度量}}$

### 条件概率和概率乘法公式

#### 条件概率

##### 条件概率定义

$\displaystyle P(B\mid A)=\frac{P(AB)}{P(A)}$

##### 常用性质

##### 乘法公式

$P(AB)=P(A)P(B\mid A)$

$P(A_{1}A_{2}\cdots A_{n})=P(A_{1})P(A_{2}\mid A_{1})\cdotp\cdotp\cdotp P(A_{n}\mid A_{1}A_{2}\cdotp\cdotp\cdotp A_{n-1})$

### 全概率公式和贝叶斯公式

#### 全概率公式

$\displaystyle P(A)=\sum_{i=1}^nP(B_i)P(A\mid B_i)$

#### 贝叶斯公式

$P(B_{j}\mid A)=\displaystyle\frac{P(B_{j})P(A\mid B_{j})}{\displaystyle\sum_{i=1}^{n}P(B_{i})P(A\mid B_{i})},j=1,2,\cdots,n.$

## 事件的独立性，独立重复实验

### 事件的独立性

$P(AB)=P(A)P(B)$

### 独立重复实验和伯努利模型

$\text{二项概率公式:}C_n^kp^k(1-p)^{n-k},k=0,1,2,\cdots,n.$

