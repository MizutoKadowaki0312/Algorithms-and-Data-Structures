#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int GCD(int m, int n)
{
    //ベースケース
    if (n == 0)
    {
        return m;
    }
    return GCD(n, m % n);
}

int main()
{
    int m, n;
    cout << "m = ";
    cin >> m;

    cout << "n = ";
    cin >> n;
    cout << GCD(m, n) << endl;
}