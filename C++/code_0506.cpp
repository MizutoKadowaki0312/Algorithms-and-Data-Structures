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

//入力データとメモ用の DP テーブル
int N;
vector<long long> h;
vector<long long> dp;

long long rec(int i)
{
    //DPの値が更新されていたらそのままreturn
    if (dp[i] < INF)
    {
        return dp[i];
    }

    //ベースケース : 足場 0 のコストは 0
    if (i == 0)
    {
        return 0;
    }

    //答えを表す変数を INF で初期化する
    long long res = INF;

    //足場 i-1 から来た場合
    chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

    //足場 i-2 から来た場合
    if (i > 1)
    {
        chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
    }

    //結果をメモ化しながら渡す
    return dp[i] = res;
}

int main()
{
    //int N;
    cout << "N = ";
    cin >> N;

    /*
        resize() と似た関数に assign() がある．
        これらの違いは https://github.com/MizutoKadowaki0312/Algorithms-and-Data-Structures/wiki/assign-%E3%81%A8-resize-%E3%81%AE%E9%81%95%E3%81%84
        を参照．
    */
    h.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    //初期化(最小化問題なので INF に初期化)
    dp.assign(N, INF);

    //答え
    //cout << rec(N - 1) << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "rec(" << i << ") = " << rec(i) << endl;
    }
}