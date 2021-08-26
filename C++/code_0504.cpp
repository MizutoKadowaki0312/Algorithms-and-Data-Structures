#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

const long long INF = 1LL << 60; //2^60 を表す．十分大きい値を設定する．long は int よりも大きい桁の整数を扱うときに使う．long long は longよりも大きい桁の整数を使うときに使う．

template <class T>
void chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
    }
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    vector<long long> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    //初期化(最小化問題なので INF に初期化)
    vector<long long> dp(N, INF);

    //初期条件
    dp[0] = 0;

    //ループ
    for (int i = 0; i < N; i++)
    {
        if (i + 1 < N)
        {
            chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        }

        /*
            ここの if を else if としてしまうと，`i+1 < N`が満たされるとき
            以下のコードには回って来ず，配る遷移を再現できない．よって2つのif文で記述する．
        */
        if (i + 2 < N)
        {
            chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
        }
    }

    //答え
    //cout << dp[N - 1] << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "dp[" << i << "] = " << dp[i] << endl;
    }
}
