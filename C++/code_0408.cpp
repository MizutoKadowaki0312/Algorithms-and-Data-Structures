#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

//fibo(N)の答えをメモ化する配列
vector<long long> memo;

long long fibo(int N)
{
    //ベースケース
    if (N == 0)
    {
        //memo[N] = 0;
        return 0;
    }
    else if (N == 1)
    {
        //memo[N] = 1;
        return 1;
    }

    //メモをチェック(すでに計算済みなら答えをリターンする)
    if (memo[N] != -1)
    {
        return memo[N];
    }

    //答えをメモ化しながら再帰呼び出し
    return memo[N] = fibo(N - 1) + fibo(N - 2);
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

    //fibo(N-1)を呼び出す

    /*
        N = 50とする．
        ここでfibo(N)を指定するとfibo(50)は問題ないが，
        memo[]が 0~49なので，memoが呼び出されない．よって，N-1を指定する．
    */
    fibo(N - 1);

    //memo[0] ~ memo[N-1] に答えが格納されている
    /*
        memo[0]とmemo[1]は計算実行されていないので-1のままである．
    */
    for (int i = 0; i < N; i++)
    {
        cout << "memo[" << i << "] = " << memo[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "fibo[" << i << "] = " << fibo(i) << endl;
    }
}