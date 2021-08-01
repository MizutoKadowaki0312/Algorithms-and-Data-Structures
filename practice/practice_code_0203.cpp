#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <time.h>
using namespace std;

bool is_prime(int N){
    clock_t start = clock(); // start
    if (N <= 1)
    {
        return false;
    }
    for (int p = 2; p*p <= N; p++)
    {
        if (N % p == 0)
        {
            cout << "最小公倍数p = " << p << endl;
            int q = N/p;
            cout << "q = " << q << endl;
            return false;
        }
    }
    return true;
    clock_t end = clock(); // end
    cout << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl;
}

int main(){
    int N;
    cout << "数値の入力 : N = ";
    cin >> N;

    //is_prime(N);
    cout << is_prime(N) << endl;
}