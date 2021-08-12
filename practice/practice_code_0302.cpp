#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    /*
        N : 配列の大きさ
        v : 見つけたい要素
    */
    int N;
    int v;
    cout << "N = ";
    cin >> N;
    cout << "v = ";
    cin >> v;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            count += 1;
        }
    }

    cout << "count = " << count << endl;
}