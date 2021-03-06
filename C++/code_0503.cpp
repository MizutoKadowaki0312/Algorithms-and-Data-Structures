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
    for (int i = 1; i < N; i++)
    {
        //cout << "i = " << i << endl;

        //一旦ここで処理がある
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));

        //cout << "dp[" << i << "] = " << dp[i] << endl;

        // i > 1の時，以下の処理もする．
        // 配列dpが配列外参照を起こさないようにする．
        if (i > 1)
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
            //cout << "dp[" << i << "] = " << dp[i] << endl;
        }
        //cout << "dp[" << i << "] = " << dp[i] << endl;

        //cout << "-----" << endl;
    }

    //答え
    //cout << dp[N - 1] << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "dp[" << i << "] = " << dp[i] << endl;
    }
}