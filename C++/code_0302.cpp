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

    /*
        found_id には配列の要素番号が納入される．なので
        0 <= found_id < N である．よって初期値はありえない数にしてあげる．
    */

    int found_id = -1;

    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            found_id = i;
            break; //ループを抜ける．
        }
    }

    //結果出力(-1が出力された時は見つからなかったことを表す)
    cout << found_id << endl;
}