# 作业九

## 151220129 计科 吴政亿

#### 习题六 第3题

1.  $S^2 = \frac1{n-1}\sum^n_{i=1}(X_i-\overline{X})^2$  
	$=\frac1{n-1} \sum^n_{i=1}[X_i^2+\overline{X}^2-2X_i\overline{X}]$   
	$=\frac1{n-1}(\sum^n_{i=1}X_i^2+n\overline{X}^2)-2\overline{X}\frac1{n-1}\sum^n_{i=1}X_i$   
	$=\frac1{n-1}(\sum^n_{i=1}X_i^2+n\overline{X}^2)-\frac {2n}{n-1}\overline{X}^2=\frac1{n-1}[\sum^n_{i=1}X_i^2-n\overline{X}^2]$
2. $\because E(\frac{(n-1)S^2}{\sigma^2})=n-1=\frac{(n-1)}{\sigma^2}E(S^2)$ 
	$\therefore E(S^2)=\sigma^2$

#### 习题六 第8题

$E(Y)=\sum_{i=1}^n{D(X_i+X_{n+i}-2\overline{X})}+\sum_{i=1}^n{E(X_i+X_{n+i}-2\overline{X})^2}$   
$=\sum_{i=1}^{2n}D(X_i)-4\sum_{i=1}^n{cov(X_i,\overline{X})}-4\sum_{i=1}^n{cov(X_{n+i},\overline{X})}+4\sum_{i=1}^nD(\overline{X})+0$   
$=2n\sigma^2-4n[cov(X_i,\frac{X_i}{2n})+cov(X_{n+i},\frac{X_{n+i}}{2n})]+2\sigma^2=2(n-1)\sigma^2$

#### 习题六 第9题

$\because (n-1)S^2/\sigma^2$~$\chi^2(n-1),\overline{X}$~$N(\mu,\frac{\sigma^2}{n}),X_{n+1}$~$N(\mu,\sigma^2)$   
$\therefore X_{n+1}-\overline{X}$~$N(0,\sigma^2\frac{n+1}{n})$   
$\therefore \frac{X_{n+1}-\overline{X}}{S}\sqrt{\frac{n}{n+1}}=\sqrt{\frac{n}{n+1}}\frac{X_{n+1}-\overline{X}}{\sqrt{(n-1)S^2/(n-1)}}$~$\frac{N(0,\frac{n+1}{n})}{\sqrt{\chi^2(n-1)/(n-1)}}\sqrt{\frac{n}{n+1}}$   
~$\frac{N(0,1)}{\sqrt{\chi^2(n-1)/(n-1)}}$~$t(n-1)$

#### 习题六 第10题

1. $\overline{X}$~$N(12,\frac45),P(\overline{X}>13)=P(\frac{\overline{X}-12}{\sqrt{0.8}}>\sqrt{1.25})=1-\Phi(1.1180)=0.131$

2. $P(min_{1\leq i \leq 5}X_i < 10)=1-P(X_i \geq 10)^5=1-\Phi(1)^5=0.5785$

3. $P(max_{1\leq i \leq 5}X_i > 15)=1-P(X_i \leq 15)^5=1-\Phi(1.5)^5=0.2923$

#### 习题六 第11题

设联合样本均值为$Z$,方差为$S^2$则有$\overline{Z}=\frac{n_1\overline{X}+n_2\overline{Y}}{n_1+n_2}$   
$\because S_1^2= \frac1{n_1-1}\sum_{i=1}^{n_1}X_i^2-\frac{n_1}{n_1-1}\overline{X}^2,~~~~\therefore \sum_{i=1}^{n_1}X_i^2=(n_1-1)S_1^2+n_1\overline{X}^2$   
$S^2 = \frac1{n_1+n_2-1}(\sum_{i=1}^{n_1}X_i^2+\sum_{i=1}^{n_2}Y_i^2)-\frac{n_1+n_2}{n_1+n_2-1}\overline{Z}^2$   
$=\frac{(n_1-1)S_1^2+n_1\overline{X}^2+(n_2-1)S_2^2+n_2\overline{Y}^2}{n_1+n_2-1}-\frac{n_1+n_2}{n_1+n_2-1}(\frac{n_1\overline{X}+n_2\overline{Y}}{n_1+n_2})^2$