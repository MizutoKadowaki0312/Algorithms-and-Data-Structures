#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int count = 0;

    clock_t start = clock(); // start

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < N; k++)
            {
                ++count;
            }
        }
    }

    clock_t end = clock(); // end

    cout << "N = " << N << "\t"
         << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl; //秒に変換したい場合は、「CLOCKS_PER_SEC」で割る。
}