#include <iostream>
using namespace std;
int resztaZDzielenia(int pierwszaLiczba, unsigned int drugaLiczba)
{
    int wynik = 1;
    wynik = pierwszaLiczba % drugaLiczba;

    return wynik;
}
int main()
{
    int pierwszaLiczba, wynik, drugaLiczba;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> pierwszaLiczba;
    cout << "Podaj druga liczbe" << endl;
    cin >> drugaLiczba;

    cout <<"Reszta z dzielenia to: "<< resztaZDzielenia(pierwszaLiczba, drugaLiczba) << endl;

    return 0;
}