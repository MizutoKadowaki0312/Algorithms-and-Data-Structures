## Algorithms-and-Data-Structures





### Nの値の増加に伴う計算時間の増加具合(単位：秒)
#### C++

|  N  |  code_0201 | code_0202|
| :--- | :---: | :---: |
|  1 |  $2.4\times 10^{-5}$  | $2.2\times 10^{-5}$ |
|  10  |  $2.5\times 10^{-5}$  | $2.5\times 10^{-5}$ |
|  100  |  $2.5\times 10^{-5}$  | $2.5\times 10^{-5}$ |
|  1000  |  $2.4\times 10^{-5}$  | $1.988\times 10^{-3}$ |
|  10000  |  $3.8\times 10^{-5}$  | $1.35282\times 10^{-1}$ |
|  100000  |  $1.97\times 10^{-4}$  | $12.0287$ |
|  1000000  |  $2.085\times 10^{-3}$  | $1610.09$ |
|  10000000  |  $1.6818\times 10^{-2}$  | お察し |
|  100000000  |  $1.3076\times 10^{-1}$  | お察し |
|  1000000000  |  $1.19213$  | お察し |


##### code_0201
この計算量は，Nと計算時間がだいたい比例関係　→　計算量は $\mathcal{O}(N)$ と表記する．

##### code_0202
この計算量は，Nと計算時間がだいたい$N^2$と比例関係　→　計算量は $\mathcal{O}(N^2)$ と表記する．



#### Julia



### 最近点対問題

#### 問題
正の整数 N と N個の座標値 $(x_i,y_i)~~(i = 0,1,\dots N-1)$が与えられる．最も距離が近い2点間の距離を求めよ．

#### 例
N = 3 , $(x,y) = A(1,2) , B(2,3) , C(5,2)$ を考える．2点間の距離は

$$
\left|AB\right| = \sqrt{(1-2)^2 + (2-3)^2} = \sqrt{2} \\
\left|AC\right| = \sqrt{(1-5)^2 + (2-2)^2} = 4 \\
\left|BC\right| = \sqrt{(2-5)^2 + (3-2)^2} = \sqrt{10} \\
$$
となり，ABが最近点対となる．





