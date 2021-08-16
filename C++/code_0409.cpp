#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

/*
    参照渡し(https://wa3.i-3-i.info/word16070.html)
    を const vector<int> &a で与える．
*/

bool func(int i, int w, const vector<int> &a)
{
    //ベースケース
    if (i == 0)
    {
        if (w == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //a[i-1]を選ばない場合
    if (func(i - 1, w, a))
    {
        return true;
    }

    //a[i-1]を選ぶ場合
    if (func(i - 1, w - a[i - 1], a))
    {
        return true;
    }

    return false;
}

int main()
{
    //入力
    int N;
    int W;

    cout << "N = ";
    cin >> N;

    cout << "W = ";
    cin >> W;

    vector<int> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    if (func(N, W, a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}