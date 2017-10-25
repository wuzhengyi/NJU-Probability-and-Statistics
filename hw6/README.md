# 概率论作业六

## 151220129 计科 吴政亿

### 第一题

设随机变量$X\sim B(n,p_1),Y \sim B(n,p_2)$,则有   
$P(X \geq k) = \sum^{n}_{i=k}{(^n_i)p^i_1(1-p_1)^{n-i}}$   
$P(Y \geq k) = \sum^{n}_{i=k}{(^n_i)p^i_2(1-p_2)^{n-i}}$   
设$\sigma$均匀分布在$[0,1]$之间:   
$\sigma \leq p_1 \Leftrightarrow X_i = 1$   
$\sigma \leq p_2 \Leftrightarrow Y_i = 1$   
$\because 0<p_1<p_2<1 , \therefore P(X \geq k) \leq P(Y \geq k)$   
$\therefore \sum^{n}_{i=k}{(^n_i)p^i_1(1-p_1)^{n-i}} \leq \sum^{n}_{i=k}{(^n_i)p^i_2(1-p_2)^{n-i}}$

### 第二题

1. 置换$\rho$的第一个必定属于$S(\rho)$,故$S(\rho)$非空。   
    对于$\forall v \in S(\rho)$,它的任意邻居节点$w$必定落后与它，   
    故$w \notin S(\rho)$,故$S(\rho)$为独立集。   

2. 设随机变量$X_i$, $X_i = 1$当且仅当$X_i$在独立集中，   
    $X_i = 0$当且仅当$X_i$不在独立集中。设$X$为独立集中点的个数。   
    则有$E(X) = E(\sum^{n}_{i=1}{X_i})=\sum^{n}_{i=1}{E(X_i)}=\sum^{n}_{i=1}{P(X_i=1)}$,   
    其中$P(X_i=1) = \frac1{d_i+1}$,因为这个点是它邻居和它在$\rho$中第一个出现的。   
    代入有$E(X) = {\sum^{n}_{i=1}\frac1{d_i+1}} \Rightarrow P(X \geq \sum^{n}_{i=1}\frac1{d_i+1}) > 0$，问题得证。   

3. 运用基本不等式，$\frac{n}{\frac1{d_1+1}+\frac1{d_2+1}+...+\frac1{d_n+1}} \leq \frac{d_1 + d_2+...+d_n}{n}$,   
    $\because d_1+d_2+...+d_n = nk,\therefore \sum^{n}_{i=1}\frac1{d_i+1} \geq \frac{n}{k+1}$,问题得证。

### 第三题

假设对于一个n节点的d正则图，我们以p的概率随机选择点构成集合S，   
再将所有$v \in V,v \notin S$并且v不与S中任意节点相邻的点加入集合S构成集合S*。   
则有$|S| \sim N(n,p) \Rightarrow E(|S|)=np$。   
设Y为所有$v \in V,v \notin S$并且v不与S中任意节点相邻的点的个数，   
则有$Y \sim N(n,(1-p)^{d+1}) \Rightarrow E(Y)=n(1-p)^{d+1}$。   
$E(|S^*|) \leq E(|S|)+E(Y)=np+n(1-p)^{d+1} \leq np + ne^{-p(d+1)}$   
令$p = \frac{\ln(d+1)}{d+1}$,代入有$E(|S^*|) \leq \frac{n(1+\ln(d+1))}{d+1}$。

### 第四题

假设从第1种颜色到第k种颜色，每次从完全图$K_n$中随机选择一个与图G   
同构的$K_n$的子图进行着色，并且覆盖上一次的着色，那么由于图G不包   
含H子图，我们只需要证明k种颜色存在一种着色，使得所有边都被着色，   
问题便得证。   
设随机变量$X_i$, $X_i = 1$当且仅当边$X_i$未被着色，$X_i = 0$当
且仅当边$X_i$被着色。   
随机变量X为$K_n$中未被着色的边的个数，则有：

$E(X)= E(\sum^{(^n_2)}_{i=1}{X_i})=\sum^{(^n_2)}_{i=1}{E(X_i)}=\sum^{(^n_2)}_{i=1}{P(X_i=1)}$

其中$P(X_i=1)=(1-\frac{m}{(^n_2)})^k$

故$E(X) = \sum^{(^n_2)}_{i=1}(1-\frac{m}{(^n_2)})^k =(^n_2)(1-\frac{m}{(^n_2)})^k < \frac{n^2}{2}(1-\frac{2m}{n^2})^k<\frac{n^2}{2}*e^{\frac{-2mk}{n^2}}$   
$~~~~~~~~~~~~~~~<\frac{n^2}{2}*e^{-2\ln(n)} = \frac12$

$\therefore P(X=0)=P(X<\frac12)>0$，故存在一个着色方案使所有边都被着色，   
结论成立。

### 第五题

分析题意，我们只需要证明当n趋向于无穷时，该图不存在孤立点的概率   
趋向于0即可。设随机变量X为孤立点的个数，设随机变量$X_i=1$表示点$X_i$   
是孤立点，$X_i=0$表示点$X_i$不是孤立点。那么有

$E(X_i)=P(X_i=1)=(1-p)^{n-1}$

$E(X) = \sum^{n}_{i=1}E(X_i)=n(1-p)^{n-1}$

$D(X_i) = E(X_i^2)-E(X_i)^2 = (1-p)^{n-1}-(1-p)^{2n-2}$

$cov(X_i,X_j) = E(X_iX_j)-E(X_i)E(X_j)=(1-p)^{2n-3}-(1-p)^{2n-2}$

$D(X)=D(\sum^{n}_{i=1}X_i) = \sum^{n}_{i=1}{D(X_i)}+2 \sum_{1 \leq i < j \leq n}cov(X_i,X_j)$

$~~~~~~~~~~~= n((1-p)^{n-1}-(1-p)^{2n-2})+(n^2-n)((1-p)^{2n-3}-(1-p)^{2n-2})$

$P(X=0) \leq P(|X-E(X)| \geq E(X)) \leq \frac{D(X)}{E(X)^2}$

$~~~~~~~~~~~=\frac{n((1-p)^{n-1}-(1-p)^{2n-2})+(n^2-n)((1-p)^{2n-3}-(1-p)^{2n-2})}{n^2(1-p)^{2n-2}}$

$~~~~~~~~~~~=\frac{1}{n(1-p)^{n-1}}-\frac1n-\frac{n-1}n\frac{p}{1-p} \rightarrow \frac{1}{n(1-p)^{n-1}}-\frac{p}{1-p} \rightarrow 0$

问题得证。

### 第六题

1. $E(X) = (^n_3)(\frac1n)^3$,应用马尔可夫不等式有   
    $P(X \geq 1) \leq \frac{E(X)}{1} = (^n_3)(\frac1n)^3 =\frac{n(n-1)(n-2)}{6*n*n*n}<\frac16$

2. 利用条件期望不等式：
    $P(X>0) \geq \sum_{i=1}^{(^n_3)}{\frac{P(X_i=1)}{E[X|X_i=1]}}$

    $E[X|X_i=1]=\sum_{k=1}^{(^n_3)}{E[X_k|X_i=1]}=\sum_{k=1}^{(^n_3)}{P(X_k=1|X_i=1)}$

    $E[X|X_i=1]=(^{n-3}_3)p^3+3(^{n-3}_2)p^3+3(^{n-3}_1)p^2+1$

    $P(X>0) \geq \sum_{i=1}^{(^n_3)}{\frac{p^3}{(^{n-3}_3)p^3+3(^{n-3}_2)p^3+3(^{n-3}_1)p^2+1}}$

    $~~~~~~~~~~~~~~~~~~=\frac{(^{n-3}_3)p^3}{(^{n-3}_3)p^3+3(^{n-3}_2)p^3+3(^{n-3}_1)p^2+1} \rightarrow \frac17$

    问题得证。
