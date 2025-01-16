#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T2 napis)
{
    cout << "int ";
    return napis;
}
template <>
double funkcja(
    float napis)
{
    cout << "double float ";
    return napis;
}
template <>
float funkcja(
    double napis)
{
    cout << "float double";
    return napis;
}
int main()
{
    cout << endl;
    funkcja<double, float>(2);
    funkcja<float, double>(3);
    return 0;
}