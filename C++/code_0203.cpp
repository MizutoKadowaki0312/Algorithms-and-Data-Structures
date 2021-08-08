#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int count = 0;

    for (int i = 2; i <= N; i += 2)
    {
        cout << "i = " << i << endl;
        count += 1;
    }

    cout << "反復回数 : " << count << endl;
}