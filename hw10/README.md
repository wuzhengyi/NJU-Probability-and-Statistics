# 概率论 作业十

## 151220129 计科 吴政亿

#### 习题七 第3题

矩估计:

$$E[X]=\int_0^{\infty}x(2\pi\sigma^2)^{-\frac{1}{2}}x^{-1}exp(-\frac{1}{2\sigma^2}(lnx-\mu)^2)$$
$$\bar{X}=exp(\mu+\frac{\sigma^2}{2})$$
$$E[X^2]=\int_0^{\infty}x^2 (2\pi\sigma^2)^{-\frac{1}{2}}x^{-1}exp(-\frac{1}{2\sigma^2}(lnx-\mu)^2)$$
$$\frac1n\sum_{i=1}^n{X_i^2}=exp(2\mu+2\sigma^2)$$
$$\sigma^2=ln\frac{E[X^2]}{E[X]^2}$$
$$\mu=ln\frac{E[X]^2}{\sqrt{E[X^2]}}$$
$$\hat\sigma^2=\ln{(\frac1n\sum_{i=1}^n{X_i^2})}-2\ln{\bar{X}}$$
$$\hat\mu=2\ln{\bar{X}}-\frac12\ln{(\frac1n\sum_{i=1}^n{X_i^2})}$$

极大似然估计:

$$L(\mu, \sigma)=\prod_{i=1}^{n}p(X_i;\mu, \sigma)$$
$$ lnL=\sum_{i=1}^n (-\frac{1}{2}ln2\pi-ln\sigma-lnX_i-\frac{1}{2\sigma^2}(ln(X)-\mu)^2)$$
$$ \frac{\partial lnL}{\partial \mu}=\sum_{i=1}^n \frac{\mu-lnX_i}{\sigma^2}=0$$
$$ \hat{\mu}=\frac1n\sum_{i=1}^n lnX_i$$
$$ \frac{\partial lnL}{\partial \sigma}=\sum_{i=1}^n -\frac{1}{\sigma}+\frac{1}{\sigma^3}(lnX-\mu)^2$$
$$ \hat{\sigma}^2=\frac{\sum (lnX_i-\mu)^2}{n}$$
$$=\frac{1}{n}{\sum_{i=1}^n (lnX_i-\frac{1}{n}{\sum_{i=1}^n lnX_i})^2}$$


#### 习题七 第4题

矩估计:

$$E[X]=\int_\mu^\infty xe^{-(x-\mu)/\theta}dx=\theta+\mu$$
$$E[X^2]=2\theta^2+\mu^2+2\theta\mu$$
$$\hat{\theta}=\sqrt{(\frac1n\sum_{i=1}^n X_i^2)- (\frac1n\sum_{i=1}^n X_i)^2}=S^*$$
$$\hat{\mu}=\bar{X}-S^*$$

极大似然估计:

$$L(\mu, \theta)=\prod p(X_i;\mu, \theta)$$
$$ln L(\mu, \theta)=\sum (-ln \theta - (X_i-\mu)/\theta)$$
$$=-nln\theta+n\mu/\theta-\sum X_i/\theta$$
$$\frac{\partial lnL}{\partial \mu}=\frac{n}{\theta}$$
$$\frac{\partial lnL}{\partial \theta}=-\frac{n}{\theta}+\frac{\sum X_i}{\theta^2}=0$$


依照定义, 且$p(x;\mu, \theta)$随$\mu$单调递增,

$$\hat{\mu} =\min_i X_i$$

此时

$$ \hat{\theta}=\frac{1}{n}\sum_{i=1}^n (X_i-\hat{\mu})=\bar{X}-\min_i X_i$$


#### 习题七 第11题


$$E[c\sum_{i=1}^{n-1}(X_{i+1}-X_i)^2]=\sigma^2$$
$$\sigma^2=E[c\sum_{i=1}^{n-1}(X_{i+1}-X_i)^2]$$
$$=c\sum_{i=1}^{n-1}(E[X_{i+1}-X_i]^2+D[X_{i+1}-X_i])$$
$$=c\sum_{i=1}^{n-1}(D[X_{i+1}-X_i])$$
$$=c\sum_{i=1}^{n-1}(D[X_{i+1}]+D[X_i]-2cov(X_{i+1},X_i))$$
$$=c\sum_{i=1}^{n-1}(2\sigma^2)$$
$$=2c(n-1)\sigma^2$$
$$c=\frac{1}{2(n-1)}$$




#### 习题七 第12题


$$p(x;\sigma^2)=\frac{1}{\sqrt{2\pi}\sigma}exp[-\frac{(x-\mu)^2}{2\sigma^2}]$$
$$L(\sigma^2)=\prod p(X_i;\sigma^2)$$
$$lnL=\sum_{i=1}^n (-ln(\sqrt{2\pi})-ln\sigma-\frac{(x-\mu)^2}{2\sigma^2})$$
$$\frac{\partial lnL}{\partial \sigma}=0$$
$$\hat{\sigma^2}=\frac{1}{n}\sum_{i=1}^n (X_i-\mu)^2$$
$$S^2=\frac{1}{n-1}\sum (X_i-\bar{X})^2$$
$$ D[\hat{\sigma^2}]=\frac{1}{n^2}\sum D[(X_i-\mu)^2]$$
$$=\frac{1}{n^2}\sum[E[(X_i-\mu)^4]-E[(X_i-\mu)^2]^2]$$
$$=\frac{1}{n^2}\sum[3\sigma^4-\sigma^4]$$
$$=\frac{2}{n}\sigma^4$$
$$\frac{(n-1)S^2}{\sigma^2}\sim \chi^2(n-1)$$
$$D[S^2]=\frac{\sigma^4}{(n-1)^2}D[\chi^2(n-1)]$$
$$=\frac{2}{n-1}\sigma^4$$
$$ D[\hat{\sigma^2}]<D[S^2]$$


#### 习题七 第13题


$$\frac{\bar{X}-\mu}{\sigma/\sqrt{n}}\sim N(0,1)$$
$$P(-u_\frac{\alpha}{2}<\frac{\bar{X}-\mu}{\sigma/\sqrt{n}}<u_\frac{\alpha}{2})=1-\alpha$$
$$L_0=2\frac{\sigma}{\sqrt{n}}u_\frac{\alpha}{2}\le L$$
$$n\ge (\frac{2\sigma u_\frac{\alpha}{2}}{L})^2$$

#### 习题七 第14题


$$\frac{\bar{X}-\mu}{S/\sqrt{n-1}}\sim t(n-1)$$
$$P(\bar{X}-\frac{S}{\sqrt{n-1}}t_\frac{\alpha}{2}(n-1)<\mu<\bar{X}+\frac{S}{\sqrt{n-1}}t_\frac{\alpha}{2}(n-1))
=1-\alpha$$
$$\bar{X}=6,n=9,S=0.5745,\alpha=0.05,t_\frac{\alpha}{2}(n-1)=t_{0.025}(8)=2.3060$$
置信区间:$[5.5584,6.4416]$

#### 习题七 第18题

$$X\sim P(\lambda)$$
$$E[X]=D[X]=\lambda$$
$$E[\bar{X}]=E[\frac{1}{n}\sum X]=\lambda$$
$$D[\bar{X}]=D[\frac{1}{n}\sum X]=\lambda/n$$
$$\bar{X}\sim N(\lambda, \lambda/n)$$
$$u=\frac{\bar{X}-\mu}{\sqrt{D[\bar{X}]}}=\frac{\bar{X}-\lambda}{\sqrt{\lambda/n}}\sim N(0,1)$$
$$\lambda=E[\frac{1}{n}\sum X_i]=\bar{X}, n\to \infty$$
$$P(-u_{\alpha/2}<\frac{\bar{X}-\lambda}{\sqrt{\bar{X}/n}}<u_{\alpha/2})=1-\alpha$$
$$(\bar{X}-u_{\alpha/2}\sqrt{\frac{\bar{X}}{n}},\bar{X}+u_{\alpha/2}\sqrt{\frac{\bar{X}}{n}})$$

