#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    /*
        N : 配列の大きさ
        W : 10進数
    */
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

    // bit は2^N通りの部分集合全体を動く
    bool exist = false;
    /*
        1 << i は二進数表現で右からi桁目(もっとも右を0桁目とする)のみが1であるような値を表す．
        eg:1 << 4 は二進数表現では 10000 を表し，10進数では16となる．
    */
    for (int bit = 0; bit < (1 << N); bit++)
    {
        //部分集合に含まれる要素の和
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            //i番目の要素a[i]が部分集合に含まれているかどうか
            if (bit & (1 << i))
            {
                sum += a[i];
            }
        }
        if (sum == W)
        {
            exist = true;
        }
    }
    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}