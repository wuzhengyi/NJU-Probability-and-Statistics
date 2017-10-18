## **151220129 计科 吴政亿**
### 第一题
#### 课后习题 1

 1. $ A_1\overline{A_2}\ \overline{A_3} $ 
 2. $ A_1\cup A_2 \cup A_3 $ 
 3. $\overline{A_1}\ \overline{A_2} \cup \overline{A_2}\ \overline{A_3} \cup \overline{A_1}\ \overline{A_3}$ 
 4. $\overline{A_1A_2A_3}$ 
 5.  $ A_1\cup A_2 \cup A_3 $ 
 6.  ${A_1}{A_2} \cup {A_2}{A_3} \cup {A_1}{A_3}$

#### 课后习题 4
令$A=\{x^2 + y^2 \leq 19 | x,y \in [6] \}$，$\Omega = \{x,y|x,y \in [6]\}$，

列出$A = {(1,1)(1,2)(1,3)(1,4)(2,1)(2,2)(2,3)(3,1)(3,2)(3,3)(4,1)}$

得到$|A|=11,P(A)=\frac{|A|}{|\Omega|} = \frac{11}{36}$。

#### 课后习题 6
$10*\frac{1}{50}*\frac{1}{49}*\frac{1}{48}*3! = \frac{10}{C_{50}^{3}}$

#### 课后习题 12
$ A = \{(p,q)|{ p^2 - 4*q \geq 0} ,|p| \leq 1,|q| \leq 1\}$

$ \Omega=\{(p,q)| |p| \leq 1,|q| \leq 1\}$ ,

$ S_\Omega = 2*2=4$

$ S_A = 1*2 + \int^{1}_{-1}{\frac{q^2}{4}dq} = 2+\frac16=\frac{13}{6}$

$ P(A)=\frac{|A|}{|\Omega|}=\frac{S_A}{S_\Omega}=\frac{13}{24}$

#### 课后习题 13

设三角形的两条边为$x,y$，则第三条边长度为$2a-x-y$,

$A = \{(x,y)| x+y \leq 2a-x-y,x-y \leq 2a-x-y, y-x \leq 2a-x-y \}=\{(x,y)|x+y  
\geq a,x \leq a,y \leq a \}$

$\Omega=\{(x,y)| x+y \leq 2a\}$ 

$P(A)=\frac{|A|}{|\Omega|}=\frac{S_A}{S_\Omega}=\frac{1}{4}$

### 第二题
```cpp
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
#define TIMES 100000000
int main() {
	int n = 0;
	double x, y;//x from -1.5 to 1.5,y from -1 to 2
	for (int i = 0; i<TIMES; i++) {
		x = ((double)rand() / RAND_MAX)*1.5;
		y = ((double)rand() / RAND_MAX) * 3 - 1;
		if (pow(x,2) + pow(y - pow(x, 2.0 / 3), 2.0) <= 1.0)
			n++;
	}
	cout << ((double)n / TIMES) * 9 << endl;
	return 0;
}
```
最后得出结果为$ 3.1411 = \pi$  

### 第三题
假定其前$log_2^n+k$个硬币连续正面向上，之后的随意，则有
$P(A) \leq \frac{2^{n-log_2^n-k}}{2^n}=2^{-log_2^n-k} \leq 2^{-k}$

### 第四题
1. $ P(X>Y) = P(X=5)*P(Y=3 || Y=4) = \frac46 * \frac56 = \frac59 $
$P(Y>Z) = P(Y=3)*P(Z=2) + P(Y=4)*P(Z=2 ||Ｚ＝３) = \frac26 * \frac26 + \frac36 * \frac46  = \frac59 $
$P(Z>X) = P(Z=2 || Z=3 ||Z=6)*P(X=1) + P(Z=6)*P(X=5 ) = \frac66 * \frac26 + \frac26 * \frac46  = \frac59 $

2. 
A | 1 | 4 | 4 | 4 | 4 | 4
--|---|---|---|---|---|-- 
B | 3 | 3 | 3 | 3 | 3 | 6
C | 2 | 2 | 2 | 5 | 5 | 5

$P(A>B) = \frac56 * \frac56 = \frac{25}{36} > \frac59$

$P(B>C) = \frac56 * \frac36 + \frac16 * \frac66 = \frac{21}{36} > \frac59$

$P(C>A) = \frac36 * \frac16 + \frac36 * \frac66 = \frac{21}{36} > \frac59$
