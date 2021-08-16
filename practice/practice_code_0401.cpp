#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int tribo(int N)
{
    //再帰関数を呼び出したことを報告する
    cout << "tribo(" << N << ")を呼び出しました．" << endl;

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
    else
    {
        int result = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);
        cout << "tribo(" << N << ") = " << result << endl;
        return result;
    }
}

int main()
{

    int N;
    cout << "N = ";
    cin >> N;

    clock_t start = clock();

    tribo(N);

    clock_t end = clock();

    cout << "N = " << N << "\t"
         << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl;
}