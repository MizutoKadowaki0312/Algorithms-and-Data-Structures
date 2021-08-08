#include <iostream>
#include <time.h>
using namespace std;

//code2.1

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int count = 0;

    clock_t start = clock(); // start
    cout << "start = " << start / CLOCKS_PER_SEC << " sec." << endl;

    for (int i = 0; i < N; ++i)
    {
        //count += 1;
        ++count;
        //cout << "i = " << i << " count = " << count << endl;
    }

    clock_t end = clock(); // end
    cout << "end = " << end / CLOCKS_PER_SEC << " sec." << endl;

    cout << "N = " << N << "\t"
         << "time = " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl;
    //秒に変換したい場合は、「CLOCKS_PER_SEC」で割る。
}