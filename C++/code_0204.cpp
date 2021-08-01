#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;


//2点(x1,y1),(x2,y2)との距離を求める関数

double calc_dist(double x1 , double y1 , double x2 , double y2){
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}


int main(){
    int N;
    cout << "N = ";
    cin >> N;

    //1次元配列の生成．
    vector<double> x(N),y(N);

    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
        cout << i << "\t" << x[i] << "\t" << y[i] << endl;
    }

    //求める値を，十分大きな値で初期化しておく．
    double minimum_dist = 100000000.0;

    //探索開始

    /*
        for文で回すときに

        (x1 , y1) と (x2 , y2) (i = 1 , j = 2)
        (x2 , y2) と (x1 , y1) (i = 2 , j = 1)

        は等しいので， j = i+1 を指定してしまえば余計な計算を省略できる．
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            //(x[i],y[i]) と (x[j],y[j]) の距離．
            double dist_i_j = calc_dist(x[i] , y[i] , x[j] , y[j]);
            cout << "i = " << i << " x[i] = " << x[i] << " y[i] = " << y[i] << endl;
            cout << "j = " << j << " x[j] = " << x[j] << " y[j] = " << y[j] << endl;
            cout << "distance = " << dist_i_j << endl;
            

            //暫定最小値 minimum_dist と dist_i_j と比べる
            if (dist_i_j < minimum_dist)
            {
                minimum_dist = dist_i_j;
            }
        }
    }
    //答えを出力する
    cout << minimum_dist << endl;
}