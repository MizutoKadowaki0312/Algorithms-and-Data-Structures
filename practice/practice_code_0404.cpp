#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <time.h>
using namespace std;

int fibo(int N)
{

    //再帰関数を呼び出したことを報告する
    cout << "fibo(" << N << ")を呼び出しました．" << endl;

    //ベースケース
    if (N == 0)
    {
        return 0;
    }
    else if (N == 1)
    {
        return 1;
    }
    else
    {
        int result = fibo(N - 1) + fibo(N - 2);
        cout << "fibo(" << N << ") = " << result << endl;
        return result;
    }
}

int main()
{

    int N;
    cout << "N = ";
    cin >> N;

    //計測開始
    clock_t start = clock();

    fibo(N);

    //計測終了
    clock_t end = clock();

    cout << "N = " << N << "\t"
         << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl;
}