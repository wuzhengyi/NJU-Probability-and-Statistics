# 作业五   
## 151220129 计科 吴政亿

----
### 习题四 4
1. 
(U , V) | (1 , 1)                   | (2 , 1)                     | (2 , 2)
--------|---------------------------|-----------------------------|---------------------------
P       | $\frac23*\frac23=\frac49$ | $\frac23*\frac13*2=\frac49$ | $\frac13*\frac13=\frac19$
2. $E(U) = \frac49*1+\frac59*2=\frac{14}9$   
    $e(v) = \frac89 * 1 + \frac19 * 2 = \frac{10}9$
3. $cov(U,V) = E(XY)-E(X)E(Y)$   
    其中$E(XY)=\frac49*1 + \frac49 * 2 + \frac19 *4 =\frac{16}9$   
    代入得$cov(U,V) = \frac{16}9 - \frac{14}9*\frac{10}9 = \frac{4}{81}$

### 习题四 19
$E(X+Y)^2 = D(X+Y)-(E(X+Y))^2=D(X)+D(Y)-(EX+EY)$   
其中由于X与Y服从泊松分布，$D(X)=E(X)=1,D(Y)=E(Y)=2$   
最终得$E(X+Y)^2 = 1+2+9 = 12$。

### 习题四 23
$P([X] \geq x) \leq \frac1{f(x)}E[f(|X|)] \Longleftrightarrow {f(x)} *P([X] \geq x) \leq E[f(|X|)]$
设随机变量   
![1](http://img.blog.csdn.net/20171015154808027?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvanVzdGljZTA=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)   
$E(Y) = P(|X| \geq x)f(x)$   
$E[f(|X|)]-E[Y] = E[f(|X|)-Y] \geq 0\Longleftrightarrow {f(x)} *P([X] \geq x) \leq E[f(|X|)]$，故得证。

### 第二题
令![2](http://img.blog.csdn.net/20171015160943441?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvanVzdGljZTA=/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/SouthEast)，X为不动点的个数。   
则$E(X_i) = \frac1n$   
$E(X) = E(\sum^{n}_{i=1}X_i)=\sum^{n}_{i=1}E(X_i)=1$   
$EX^2=E(\sum^{n}_{i=1}{X_i^2} + 2*\sum^{n}_{1 \leq i \leq j \leq n}{X_iX_j})$   
    $=\sum^{n}_{i=1}{E(X_i^2)}+2*\sum^{n}_{1 \leq i < j \leq n}{E(X_iX_j)}$  
    $=1+2*(^n_2)\frac1{n(n-1)} = 2$   
$\therefore D(X) = E(X^2)-(EX)^2 = 2 - 1 = 1$

### 第三题
设X为d天中股票价格上涨的次数，Y为股票d天后的价格，则   
$P(X=k) = (^d_k)p^kq^{d-k}$   
$E(Y) = \sum_{i=0}^{d}{r^{2i-d}P(X=i)} = \frac{(r^2p+q)^d}{r^d}$   
$D(Y) = E(Y^2)-(EY)^2 = \frac{(r^4p+q)^d}{r^{2d}}-\frac{(r^2p+q)^{2d}}{r^{2d}}$

### 第四题
1. $P(Y_i = 0) =P(Y_i=1)=\frac12$   
2. 当n=3时，$P(Y_1Y_2Y_3)=0,P(Y_1)P(Y_2)p(Y_3)=\frac18 \neq P(Y_1Y_2Y_3)$，故不相互独立。   
3. $E(Y_iY_j)=1*E(Y_iY_j=1)+0*E(Y_iY_j=0)=E(Y_iY_j=1)$   
    - 当$Y_i,Y_j$对应的是不同的四个比特时，易得$Y_i,Y_j$独立，成立。   
    - 当$Y_i,Y_j$对应的是不同的三个比特时，不妨设$X_1$为重复的比特，   
        另两个比特为$X_2,X_3,E(Y_i)=E(X_1=1 \cap X_2 = 1),E(Y_j)=E(X_1=1 \cap X_3 = 1)$   
        则$E(Y_iY_j)=P(X_1=0 \cap X_2=1 \cap X_3=1)*1+P(X_1=1 \cap X_2=0 \cap X_3=0)*1$   
        $= \frac14=E(Y_i=1)E(Y_j=1)E(Y_i)E(Y_j)$   
4. $P(X=k)=(^n_k)2^{-n}$   
    $E(Y)=\sum_{i=0}^{n}{i(n-i)P(X=i)}=2^{-n}\sum_{i=0}^{n}{i(n-i)(^n_i)}=\frac{n(n-1)}4$   
    $E(Y^2) = \sum_{i=0}^{n}{i^2(n-i)^2P(X=i)}=2^{-n}\sum_{i=0}^{n}{i^2(n-i)^2(^n_i)} = \frac{n(n-1)(n^2-n+2)}{16}$   
    $D(Y)=E(Y^2)-EY^2=\frac{n(n-1)(n^2-n+2)}{16}-\frac{n^2(n-1)^2}{16}=\frac{n(n-1)}{8}$

5. 应用切比雪夫不等式有$P(|Y-E(Y)| \geq n) \leq \frac{D(Y)}{n^2}=\frac{n-1}{8n}$
