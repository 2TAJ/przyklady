#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "Windows.h"
using namespace std;
using namespace std::chrono_literals;
using namespace std::chrono;
inline void suma(int a, int b)
{
    cout<< a + b;
}
int main()
{
    int a=2, b=4;
    auto start = high_resolution_clock::now();
    
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    suma(a,b);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}