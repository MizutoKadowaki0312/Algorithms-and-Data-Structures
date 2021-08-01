#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
    int N;
    cout << "N = ";
    cin >> N;

    for (int i = 2; i*i <= N ; i++)
    {
        if (N % i == 0)
        {
            int q = N /i;
            cout << N << " = " << i << " × " << q << endl;
        }
    }
}