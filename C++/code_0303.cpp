#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    /*
        N : 配列の大きさ
    */
    int N;
    cout << "N = ";
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    const int INF = 20000000;

    //線形探索
    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        if (a[i] < min_value)
        {
            min_value = a[i];
        }
    }

    //結果出力
    cout << min_value << endl;
}