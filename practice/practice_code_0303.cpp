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
    int min_second_value = min_value;
    for (int i = 0; i < N; i++)
    {
        cout << "i = " << i << "\t"
             << "a[i] = " << a[i] << endl;

        if (a[i] < min_value)
        {
            min_second_value = min_value;
            min_value = a[i];
        }
        else if (a[i] < min_second_value)
        {
            min_second_value = a[i];
        }
        cout << "i = " << i << "\t"
             << "min_value = " << min_value << "\t"
             << "min_second_value = " << min_second_value << endl;
    }

    //結果出力
    cout << min_value << endl;
    cout << min_second_value << endl;
}