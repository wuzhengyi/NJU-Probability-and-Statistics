# 概率论作业七
**151220129 计科 吴政亿**

### 习题二第12题

1. 由概率密度的性质得$\int_0^1{Ax^3dx} = \frac A 4 X^4|^1_0 = \frac A 4 = 1$,  
	解得$A=4$. 
2. $F(x) = 
\begin{equation}
  \left\{\begin{aligned}
		&0     &,x \leq 0 \\
		&x^4 &, 0 \leq x \leq 1 \\
		&1     & , x \geq 1
    \end{aligned}
    \right.
\end{equation}$
3. $P(X<B) = F(B),P(X>B)=1-F(B),$
	$\therefore P(X<B)=P(X>B) \Rightarrow F(B) = \frac12 \Rightarrow B= \sqrt[4]{\frac12}$

### 习题二第17题

1. $X$~$N(220,25^2)$,则$Z = \frac{X-220}{25}$~$N(0，1)$,  
	设事件$A_1$事件为电压不超过200V，$A_2$事件为电压200~240V，  
	$A_3$事件为电压超过240V，B事件为电子元件损坏，则有  
	$P(B) = P(A_1)*0.1 + P(A_2)*0.001 + P(A_3)*0.2$   
	$=(1-0.7881)*0.1 + (0.7881*2-1)*0.001 + (1-0.7881)*0.2$
	$=6.41462\%$
2. $P(A_2|B)=\frac{P(A_2)P(B|A_2)}{P(B)} = 1.17887\%$

### 习题二第21题

$P_Y(y) = P_X(g^{-1}(y))*|[g^{-1}(y)]'|  = \frac{1}{8 \sqrt {\pi}}e^{-\frac{1}{64}(x-8)^2},-\infty < x <+\infty$

### 习题二第24题

$x = (1-y)^3$
$P_Y(y) = P_X(g^{-1}(y))*|[g^{-1}(y)]'|  = \frac{1}{\pi (1+(1-y)^6)}|-3(1-y)^2| $
$~~~~~~~~~~= \frac{3(1-y)^2}{\pi (1+(1-y)^6)} ,-\infty < x <+\infty $

### 习题三第4题

1. $P(X>2Y)=\int_0^1dx\int_0^{\frac12x}{(2-x-y)dy} = \frac12x^2-\frac5{24}x^3|^1_0=\frac7{24}$
2. 当x小于零或y小于零时，易得等于0；当x,y大于零时，易得z=1为分界条件，   
	当z小于1的时候，$F_Z(z)=\int_0^zdx \int_0^{z-x}{(2-x-y)dy}=z^2-\frac{z^3}{3}$,   
	当z大于1小于2的时候，$F_Z(z)=1-\int_{z-1}^1dx \int_{z-x}^1(2-x-y)dy$
	$\because P_Z(z)=F_Z(z)',\therefore  P_Z(z)=
	\begin{equation}
  \left\{\begin{aligned}
		&0     &,others \\
		&2z-z^2 &,  0 \leq z \leq 1 \\
		&(z-2)^2 & , z \leq 2
    \end{aligned}
    \right.
\end{equation}$

### 习题三第5题

1. $p_x(x)=\int _{-\infty}^{+\infty}{p(x,y)dy}=\int _{0}^{2x}{dy}=2x,0<x<1$
	$p_y(y)=\int _{-\infty}^{+\infty}{p(x,y)dx}=\int _{\frac y2}^{1}{dx}=1-\frac y 2,0<y<2x$
2. $F_Z(z)=1-\int_{\frac z 2}^{1}dx\int_)^{2x-z}dy = z-\frac{z^2}4$
	$P_Z(z)=F_Z(z)'=1-\frac z 2,0<z<2$
3. $P(Y \leq \frac12 | X \leq \frac12) = \frac{P(Y \leq \frac12,X \leq \frac12)}{P(Y \leq \frac12,X \leq 1)} =1-\frac{\int_{\frac 1 4}^{\frac 1 2}dx\int_{\frac 1 2}^{2x}dy}{\int_{0}^{\frac 1 2}dx\int_{0}^{2x}dy} =\frac 3 4$

### 习题三第12题
1. $1=\int _{-\infty}^{+\infty}\int _{-\infty}^{+\infty}p(x,y)dxdy=\frac 4 3 c \int _{0}^{+\infty}{x^3e^{-x}}=8c \Rightarrow c=\frac18$
2. $p_x(x)=\int _{-\infty}^{+\infty}{p(x,y)dy}=\int _{-x}^{x}{\frac18 (x^2-y^2)e^{-x}dy}=\frac{x^3}{6}e^{-x},0<x<+\infty$
	$p_y(y)=\int _{-\infty}^{+\infty}{p(x,y)dx}=\int _{|y|}^{+\infty}{\frac18 (x^2-y^2)e^{-x}dx}=\frac 14 (|y|+1)e^{-|y|},-\infty<y<+\infty$  
	二者之间并不独立
3. $P_{X|Y=y}(x)=\frac{p(x,y)}{p_y(y)}=\frac{c(x^2-y^2)e^{-x}}{\frac 14 (|y|+1)e^{-|y|}}=\frac{x^2-y^2}{2(|y|+1)}e^{x(x-|y|)},|y|<x<+\infty$
	$P_{Y|X=x}(y)=\frac{p(x,y)}{p_x(x)}=\frac{c(x^2-y^2)e^{-x}}{\frac{x^3}{6}e^{-x}}=\frac{3(x^2-y^2)}{4x^3},|y|<x$
	
### 习题三第13题
1. $P(x,y)=P(x)P(y)=
\begin{equation}
  \left\{\begin{aligned}
		&0     &,others \\
		&e^{-y} &,  0 <x< 1
    \end{aligned}
    \right.
\end{equation}$
$F(z)=P(X+Y \leq z)$
使用卷积公式$p(z)=\int_0^1p_X(x)p_Y(z-x)dx=\int_0^1p_Y(z-x)dx$,
当$z \geq 1$时，$p(z)=\int_0^1e^{x-z}dx=e^{1-z}-e^{-z}$,
当$0<z<1$时，$p(z)=\int_0^z e^{x-z} dx=1-e^{-z}$,
故$p_z(z)=
\begin{equation}
  \left\{\begin{aligned}
		&1-e^{-z} &,  0 <z< 1\\
		&e^{1-z}-e^{-z}     &,z \geq 1 \\
    \end{aligned}
    \right.
\end{equation}$

2. $Z|_{X=x}=F(z|X=x)=P(X+Y \leq z | X=x) = P(y \leq z-x | X=x)$
	$=F_Y(z-x)=
	\begin{equation}
  \left\{\begin{aligned}
		&e^{x-z} &,   0 <x< 1\\
		&0     &,others \\
    \end{aligned}
    \right.
\end{equation}$
$P_{Z|X=x}(z)=(e^{x-z})'=e^{x-z},z>x$

### 第二题

1. $\because 0<X<+\infty,\therefore 0<Y<1,$Y在[0,1]上严格递增，
$X=-\frac{1}{\lambda}\ln(1-Y)$
$P_Y(y)=P_X(-\frac{1}{\lambda}\ln(1-Y))|-\frac{1}{\lambda(1-Y)}|=1$
因此Y在[0,1]服从均匀分布，Y~U(0,1)
2. 算法如下 
```
for(double y from 0 to 1)
	return -ln(1-y)/λ;
```

### 第三题

设n个点分别为$x_1$到$x_n$，在$x_1$处剪开并作为原点，则$x_i$
在[0,1]上服从均与分布，令事件$X_i$为当且仅当$x_ix_{i+1}\geq \frac1n$时等于1，
则$E(X)=E(\sum_{i=1}^{n}{X_i})=\sum_{i=1}^{n}P(X_i=1)=nP(X_i=1)$,
而$P(X_1=1)=\Pi_{i=2}^{n}{(1-F(\frac1n))}=(1-F(\frac1n))^{n-1}={(\frac{n-1}{n})}^{n-1}$
代入得$E(X)=n{(\frac{n-1}{n})}^{n-1}$

### 第四题
1. 令$Z=X_1+X_2$,应用卷积公式得
	$P_Z(z)=\int_0^{+\infty}{P_x(x)P_y(z-x)dx}=\int_0^{+\infty}{e^{-x}P_y(z-x)dx}$
	当$x \leq 0$时，$P_Z(z)=0$
	当$x > 0$时，$P_Z(z)=\int_0^{z}{e^{-z}dx}=ze^{-z}$
2. 记$Y_N=X_1+X_2+...+X_N$, 对于求解$f_{Y|N}$, 可以使用$N-1$次卷积公式, 当然也可由数学归纳法得
\begin{align}
f_{Y|N=1}&=\lambda e^{-\lambda y}
\\f_{Y|N=2}&=\lambda^2 y e^{-\lambda y}
\\...
\\f_{Y|N=n}&=\frac{\lambda^n}{(n-1)!} y^{n-1} e^{-\lambda y}
\end{align}
由于 
\begin{align}
f_Y(y)&=P(Y=y)
\\&=\sum_n P(Y=y, N=n)
\\&=\sum_n P(Y=y|N=n)P(N=n)
\\&=\sum_n f_{Y|N=n}(y)P(N=n)
\\&=\sum_{n=1}^{\infty} f_{Y|N=n}(y)P(N=n)
\\&=\sum_{n=1}^{\infty} (1-p)^{n-1} p \frac{\lambda^n}{(n-1)!} y^{n-1} e^{-\lambda y}
\\&=p\lambda e^{\lambda (1-p)y}e^{-\lambda y}
\\&=p\lambda e^{-p \lambda y}
\end{align}
So $Y\sim E(p\lambda)$.
	