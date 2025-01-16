// Grupa A Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych.
//  Napisz szablony specjalizacyjne dla zmiennych float,int oraz double,float.
//   Uruchom napisane szablony specjalizujące w sposób jawny. Sproboj tak je napisać by dało się je uruchomić niejawnie.

#include <iostream>
using namespace std;
template <typename T>
T funkcja(T a, T b)
{
    cout << "int ";
    return 0;
}
template <>
double funkcja(
    double a, double b)
{
    cout << "double ";
    return 0;
}
template <>
float funkcja(
    float a, float b)
{
    cout << "float ";
    return 0;
}
int main()
{
    cout << "liczba " << funkcja(1, 2) << endl;
    cout << "liczba " << funkcja<double>(3.2, 4.3) << endl;
    cout << "liczba " << funkcja<float>(5.1, 6.2) << endl;
    return 0;
}
// Grupa A Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych.
// Napisz szablony specjalizacyjne dla zmiennych float,int oraz double,float. Uruchom napisane szablony specjalizujące w sposób jawny.
// Sproboj tak je napisać by dało się je uruchomić niejawnie.

// #include <iostream>
// using namespace std;

// template <typename T1, typename T2>
// void funkcja(T1 a, T2 b)
// {
// }

// template <>
// void funkcja<float, int>(float a, int b)
// {
//     cout << "float i int: " << a  << " i " << b << endl;
// }

// template <>
// void funkcja<double, float>(double a, float b)
// {
//     cout << "double i float: " << a << " i " << b << endl;
// }

// int main() {

//     cout<<"niejawne: "<<endl;
//     funkcja(1.5f, 10);
//     funkcja(3.14, 1.5f);

//     cout<<"jawne: "<<endl;
//     funkcja<float, int>(2.5f, 5);
//     funkcja<double, float>(4.0, 2.5f);

//     return 0;
// }