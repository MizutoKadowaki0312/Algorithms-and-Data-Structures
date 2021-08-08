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
    //線形探索
    bool exist = false; //初期値はfalse
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            exist = true; //見つかったらフラグを立てる
        }
    }
    //結果出力
    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}