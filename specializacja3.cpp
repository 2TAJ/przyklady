// #include <iostream>
// #include <cmath>
// using namespace std;
// template<typename T1, typename T2>
// T1 funkcja(T1 liczba1, T2 liczba2)
// {
//   //cout <<"Szablon"<< endl;
//  //return "Szablon";


// }

// template <>
// float funkcja(
//     float liczba1, int liczba2)
// {
//   cout <<"Float"<<  " Wynik: ";
//   return liczba1 + 1;

// }
// template <>
// double funkcja(
//     double liczba1, int liczba2)
// {
//   cout <<endl<< "Double " <<  " Wynik: ";
//   return liczba2 + 2;

// }
// int main()
// {
//     //funkcja(1,2) ;
//      cout <<endl<< funkcja<float, int>(1, 2) ;
//     cout << funkcja<double, int>(3, 2) ;
//   return 0;
// }



// ad
#include <iostream>
#include <cmath>
using namespace std;
// Definicja szablonu klasy (klasy uogólnionej) Klasa:
template <typename T, typename T2>
/* template <class T, class T2> */
/* template <typename T, class T2> */
class Auto
{
public:
    Auto()
    {
        cout << "Konstruktor szablonu\n";
    }
    T przebieg;
    T2 pojemnoscBaku;
    void display()
    {
        cout << przebieg << " " << pojemnoscBaku << endl;
    }
};
// specjalizowanie
template <>
class
    Auto<int, string>
{
public:
    Auto()
    {
        cout << "KOnstruktor klasy specjalizowanej\n";
    }
    int przebieg;
    string pojemnoscBaku;
    void display()
    {
        cout << "inny napis\n";
        cout << przebieg << " " << pojemnoscBaku << endl;
    }
};
int main()
{
    // konkretyzacja
    Auto<string, string> auto1;
    auto1.przebieg = "200 tysioncow";
    auto1.pojemnoscBaku = "50l";
    auto1.display();
    // specjalizacja
    Auto<int, string> auto2 = Auto<int, string>();
    auto2.przebieg = 200000;
    auto2.pojemnoscBaku = "50l";
    auto2.display();
    return 0;
}