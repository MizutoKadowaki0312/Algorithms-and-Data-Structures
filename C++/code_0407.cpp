#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;
    vector<long long> F(N);
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            F[i] = 0;
        }
        else if (i == 1)
        {
            F[i] = 1;
        }
        else
        {
            F[i] = F[i - 1] + F[i - 2];
        }
        cout << "F(" << i << ") = " << F[i] << endl;
    }
}