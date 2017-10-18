## 151220129 吴政亿
---

1.  已知X~g(p)和Y~g(q)
    1. $P(X=Y)=\sum_{i=0}^\infty{((1-p)(1-q))^ipq} = \frac{pq}{p+q-pq}$
    
    2. $P(min(X,Y)=k)=P(X=k,Y=k)+P(X=k,Y>k)+P(X>k,Y=k)$   
        $=(1-p)^{k-1}(1-q)^{k-1}pq+(1-p)^{k-1}p\sum_{i=k}^\infty{((1-q)^iq)}$   
        $\ \ \ +(1-q)^{k-1}q\sum_{i=k}^\infty{((1-p)^ip)}$   
        $=(1-p)^{k-1}(1-q)^{k-1}pq+(1-p)^{k-1}p(1-q)^k+(1-q)^{k-1}q(1-p)^k$   
        $=(1-p)^{k-1}(1-q)^{k-1}(p+q-pq)$

    3. 
        1. $E(X+Y)=E(max(X,Y)+min(X,Y))$   
            $E(X)+E(Y) = E(max(X,Y)) + E(min(X,Y)) = \frac1p + \frac1q$   
            $\because min(X,Y)~g(1-(1-p)(1-q))$   
            $\therefore E(min(X,Y)) = \frac1{p+q-pq}$   
            $\therefore E(max(X,Y)) = \frac1p + \frac1q -\frac1{p+q-pq}$ 

        2. $P(max(X,Y)=k))=\sum_{i=1}^{\infty}{P(max(X,Y)=k|Y=i)P(Y=i)}$   
            $=\sum_{i=1}^{k-1}P(X=k)P(Y=i)+P(X \leq k)P(Y=k)$   
            $=(1-p)^{k-1}p*[1-(a-q)^{k-1}]+[1-(1-q)^k](1-q)^{k-1}q$   

            $E[max(X,Y)=k)]=\sum_{i=1}^{\infty}{kP(max(X,Y)=k)}$   
            $=\sum_{i=1}^{\infty}{k\{(1-p)^{k-1}p*[1-(a-q)^{k-1}]+[1-(1-q)^k](1-q)^{k-1}q\}}$   
            $=\frac1p + \frac1q -\frac1{p+q-pq}$   

    4. $E[X|X \leq Y]=\sum_{i=1}^{\infty}{iP(X=i|X \leq Y)}=\sum_{i=1}^{\infty}{\frac{iP(X=i)P(Y \geq i)}{P(X \leq Y)}}$   
        $\because P(X \leq Y) = \sum_{i=1}^{\infty}{P(X \leq Y | X = i)P(X=i)}=\frac{p}{p+q-pq}$   
        $therefore E[X|X \leq Y] = \sum_{i=1}^{\infty}{\frac{iP(X=i)P(Y \geq i)}{\frac{p}{p+q-pq}}} = \frac{1}{p+q-pq}$

2. 令事件A为第一次抛出的点数为6，事件B为第二次抛出的点数为6。   
    设事件X为出现一双连续的6的次数。   
    $E[X] = E[X | A]P(A) + E[X |\bar{A}]P(\bar{A})$   
    $E[X] = \{E[X | AB]P(B) + E[X | A\bar{B}]P(\bar{B})\}P(A)+\{E[X]+1\}P(\bar{A})$   
    $E[X] = \frac16*(\frac16*2+\frac56*(E[X]+2))+\frac56(E[X]+1)$   
    $\frac1{36}E[X] = \frac76$   
    $E[X]=42.$   

3.  将0和1分别定义为硬币在一次独立试验中出现了正反和反正，其中每一次试验为连续抛硬币两次，   
    那么出现0或1的概率均为$p(1-p)$，如果出现了反反和正正则抛弃这一次实验结果，   
    那么出现正反和反正的总概率为$2p(1-p)$，因为要抛两次，   
    所以期望为$\frac{1}{p(1-p)} \leq \frac{1}{[p(1-p)]}$