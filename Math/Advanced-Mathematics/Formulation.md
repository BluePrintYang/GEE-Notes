# 常用但不熟悉的公式

## 三角函数相关

1. $arcsinx+arccosx=\cfrac{\pi}{2}$
2. $arctanx+arccotx=\cfrac{\pi}{2}(x \gt 0)$

## 极限相关

1. $\lim\limits_{n\rightarrow\infty}x^{n}=\begin{cases}0,&|x|<1\\\infty,&|x|>1\\1,&x=1\\不存在,&x=-1\end{cases}$

## 导数相关

1. $\tan^{\prime}x=sec^{2}x$
1. $(\sec x)^{\prime}=\sec x\tan x$
1. $\left(\cot x\right)^{\prime}=-\csc^{2}x$
1. $\left(\csc x\right)^{\prime}=-\csc x\cot x$
1. $\displaystyle(\arccos x)^{\prime}=-\frac{1}{\sqrt{1-x^{2}}}$
1. $\displaystyle\text{(arccot }x)^{\prime}=-\frac1{1+x^2}$

## 积分相关

### 不定积分

1. $\int\tan x\mathrm{d}x=-\ln\mid\cos x\mid+C$
1. $\int\cot x\mathrm{d}x=\ln\mid\sin x\mid+C$
1. $\int\sec x\mathrm{d}x=\ln\mid\sec x+\tan x\mid+C$
1. $\int\csc x\mathrm{d}x=\ln\mid\csc x-\cot x\mid+C$
1. $\displaystyle\int{\frac{\mathrm{d}x}{\sqrt{x^{2}\pm a^{2}}}}=\ln\mid x+\sqrt{x^{2}\pm a^{2}}\mid+C$
1. $\displaystyle\int\frac{1}{a^{2}-x^{2}}\mathrm{d}x=\frac{1}{2a}{\ln\mid\frac{a+x}{a-x}}\mid+C$

### 定积分

1. $\int_0^\pi xf(sinx)dx=\frac{\pi}{2}\int_0^\pi f(sinx)dx$
2. $\int_0^\pi sin^nxdx=2\int_0^\frac{\pi}{2} sin^nxdx$

## Tips

$\int ln(x+1) dx = \int ln(x+1) d (x+1) = (x+1)ln(x+1) - x$

## 其他

1. 曲率：$\displaystyle K=\frac{\mid y^{\prime\prime}\mid}{(\left.1+y^{\prime2}\right)^{3/2}};\text{曲率半径 }\rho=\frac1K$

2. 质心：$\displaystyle\overline{x}=\frac{\int_a^bx\rho\left(x\right)dx}{\int_a^b\rho\left(x\right)dx}$

3. 形心：区域对x积分除以面积

4. 方向导数：$\displaystyle\left.\frac{\partial f}{\partial\boldsymbol{l}}\right|_{(x_0,y_0)}=\lim_{t\to0^+}\frac{f(x_0+t\cos\alpha,y_0+t\cos\beta)-f(x_0,y_0)}{t}$

   $\displaystyle\left.\frac{\partial f}{\partial\boldsymbol{l}}\right|_{(x_0,y_0)}=f'_x(x_0,y_0)\cos\alpha+f'_y(x_0,y_0)\cos\beta$

5. 梯度（偏导向量）：$\mathbf{grad}f(x_0,y_0)=f_x^{\prime}(x_0,y_0)\boldsymbol{i}+f_y^{\prime}(x_0,y_0)\boldsymbol{j}$

6. 散度（偏导和）：$\displaystyle\operatorname{div}\boldsymbol{A}=\frac{\partial P}{\partial x}+\frac{\partial Q}{\partial y}+\frac{\partial R}{\partial z}$

7. 旋度（行列式）：$\displaystyle\text{rot }A=\begin{vmatrix}i&\boldsymbol{j}&\boldsymbol{k}\\\frac{\partial}{\partial x}&\frac{\partial}{\partial y}&\frac{\partial}{\partial z}\\P&Q&R\end{vmatrix}$
