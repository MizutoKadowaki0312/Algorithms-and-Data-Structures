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

    int count = 0;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] / 2;
            count += 1;
        }
        else if (a[i] % 2 != 0)
        {
            break;
        }
    }

    cout << count << endl;
}