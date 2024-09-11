#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    float pierwszaLiczba, drugaLiczba, czescCalkowita;
    cout << "pODAJ  pierwsza i druga liczbe \n";
    cin >> pierwszaLiczba;
    cin >> drugaLiczba;
    cout << pierwszaLiczba << " do potegi " << drugaLiczba << " = " << pow(pierwszaLiczba, drugaLiczba) << endl;
    cout << "mniejsza z podanych " << fmin(pierwszaLiczba, drugaLiczba) << endl;
    cout << "wieksza z podanych " << fmax(pierwszaLiczba, drugaLiczba) << endl;
    cout << "czesc ulamkowa z pierwszej liczby " << modf(pierwszaLiczba, &czescCalkowita) << " czesc calkowita " << czescCalkowita << endl;
    cout << fmax(5, 5);
    return 0;
}