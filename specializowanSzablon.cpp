#include <iostream>
using namespace std;
template <typename T>
T funkcja(T a,T b)
{
    cout << "int ";
    return 0;
}
template <>
double funkcja(
    double a,double b)
{
    cout << "double ";
    return 0;
}
template <>
float funkcja(
    float a,float b)
{
    cout << "float ";
    return 0;
}
int main()
{
    cout << "liczba " << funkcja(1,2) << endl;
    cout << "liczba " << funkcja<double>(3.2,4.3) << endl;
    cout << "liczba " << funkcja<float>(5.1,6.2) << endl;
    return 0;
}