#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    const int INF = 200000000;
    /*
        N : 整数の個数(配列の要素数)
        K : 整数
    */

    int N;
    int K;

    cout << "N = ";
    cin >> N;

    cout << "K = ";
    cin >> K;

    vector<int> a(N);
    vector<int> b(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    //線形探索
    int min_value = INF;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // 和が K 未満の場合は捨てる
            if (a[i] + b[j] < K)
            {
                continue;
            }

            // 最小値を更新
            if (a[i] + b[j] < min_value)
            {
                min_value = a[i] + b[j];
            }
        }
    }
    //結果出力
    cout << min_value << endl;
}