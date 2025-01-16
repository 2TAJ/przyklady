#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T funkcja(T a, T b)
{
    return 0;
}

template <>
int funkcja<int>(int a, int b)
{
    return pow(a, b);
}

template <>
float funkcja<float>(float a, float b)
{
    return a + b;
}

template <>
double funkcja<double>(double a, double b)
{
    return a * b;
}

int main()
{
    float a = 2.2, b = 3.2;
    cout << "Konkretyzacja dla int " << funkcja(a, b) << endl;
    cout << "Konkretyzacja dla float " << funkcja(1.1, 2.2) << endl;
    cout << "Konkretyzacja dla double " << funkcja(1.3, 2.3) << endl;
    return 0;
}