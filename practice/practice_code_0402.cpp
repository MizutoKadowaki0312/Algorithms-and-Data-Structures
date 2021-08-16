#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <time.h>
using namespace std;

//tribo(N)の答えをメモ化する配列
vector<long long> memo;

long long tribo(int N)
{

    //ベースケース
    if (N == 0)
    {
        return 0;
    }
    else if (N == 1)
    {
        return 0;
    }
    else if (N == 2)
    {
        return 1;
    }

    //メモをチェック(すでに計算済みなら答えをリターンする)
    if (memo[N] != -1)
    {
        return memo[N];
    }

    //答えをメモ化しながら再帰呼び出し
    return memo[N] = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    //メモ化用配列を -1 で初期化する
    /*
        以下の指定でN要素分 -1 を代入する．
        つまり，N = 50では memo[0]~memo[49]が-1になる．
    */
    memo.assign(N, -1);

    //計測開始
    clock_t start = clock();

    tribo(N - 1);

    //計測終了
    clock_t end = clock();
    cout << "N = " << N << "\t"
         << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "memo[" << i << "] = " << memo[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "tribo[" << i << "] = " << tribo(i) << endl;
    }
}