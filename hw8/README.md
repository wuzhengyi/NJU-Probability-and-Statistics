# 作业八

## 151220129 计科 吴政亿

### 习题五第2题

设随机变量X为终端在使用的数量，则X~B(120,0.05)，  
$EX=120*0.05=6,DX=120*0.05*0.95=5.7$  
近似为正态分布有$\frac{X-6}{\sqrt{5.7}}$~$N(0,1)$,则$P(X \geq   10) =1 - \Phi(\frac{10-6}{\sqrt{5.7}}) \approx 0.0465$

### 习题五第4题

设随机变量$X_i$为每个数舍入的误差，$X$为总的舍入的误差，
1. $X_i$~$U[-0.5,0.5],E(X_i)=0,D(X_i)=\frac{1}{12}$  
	$E(X)=\sum_{i=1}^n{X_iP(X_i)}=0,D(X)=D(\sum_{i=1}^nX_i)=\frac{n}{12}=125$  
	根据大数定律，$\frac{X}{\sqrt{125}}$~$N(0,1)$  
	$P(|X|>15)=P(|\frac{X}{\sqrt{125}}|>\frac{15}{\sqrt{125}}) \approx 2\Phi(-1.34) \approx 0.18$

2. 设最多有n个数，则$E(X)=0,D(X)=\frac{n}{12},\frac{X}{\sqrt{\frac{n}{12}}}$~$N(0,1)$   
	$P(|X|<10)=P(\frac{|X|}{\sqrt{\frac{n}{12}}}<\frac{10}{\sqrt{\frac{n}{12}}})=2\Phi(\frac{10}{\sqrt{\frac{n}{12}}})-1 \geq 0.96$   
	$\Phi(\frac{10}{\sqrt{\frac{n}{12}}}) \geq 0.98$，查表得	$\frac{10}{\sqrt{\frac{n}{12}}} \approx 2.06,n \approx 282$   

### 习题五第5题

$E(X)=\int_0^1xp(x)dx=\frac12,E(X^2)=\int_0^1x^2p(x)dx=\frac{3}{10}$   
$D(X)=E(X^2)-E(X)^2=\frac{3}{10}-\frac14=\frac{1}{20}$，   
$\because \frac1{n^2} D(\sum_{k=1}^{n} X_k) \rightarrow 0(n \rightarrow \infty)$,故服从大数定律，   
即

$$\lim_{n \to +\infty}\frac1n\sum_{k=1}^{n}X_k=E(X)=\frac12$$

### 习题五第7题

$E(\ln{X_i}) = \int_0^1{\ln{x}*1dx} = x\ln{x}|^1_0 - \int_0^1xd\ln{x} = -1$   
因为$E(\ln{X_i})$存在，所以$\{\ln{X_i}\}$服从辛钦大数定律,   
$\ln{Z_n} = \frac1n \sum_{i=1}^{n}{\ln{X_i}} \rightarrow^P -1$,   
因为$f(x) = e^x$连续，$Z_n \rightarrow^P \frac1e$.

### 二

已知$X_n\to^P a, Y_n\to^P b$, 所以对于$\forall \delta_1, \delta_2$,  

$$\lim_{n\to\infty}P\{|X_n-a|\le \delta_1\}=1$$  
$$\lim_{n\to\infty}P\{|Y_n-b|\le \delta_2\}=1$$  

因为 $g$ 在 $(a,b)$ 连续, $\forall \epsilon>0$,$\exists \delta_1, \delta_2$,    

$$P\{|g(X_n,Y_n)-g(a,b)|\le \epsilon \}=P(|X_n-a|\le \delta_1)P(|Y_n-b|\le \delta_2)$$

所以有

$$\lim_{n\to\infty}P\{|g(X_n,Y_n)-g(a,b)|\le \epsilon \}$$  
$$=\lim_{n\to\infty}P(|X_n-a|\le \delta_1)P(|Y_n-b|\le \delta_2)=1$$  
$$g(X_n,Y_n)\to^Pg(a,b)$$  
