#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj liczbe a ja podam wartosc bezwzgledna" << endl;
    cin >> liczba;
    if(liczba>0){
    cout << "Wartosc bezwzgledna tej liczby to: " << liczba << endl;}
    else if(liczba<0){
    cout << "Wartosc bezwzgledna tej liczby to: " << liczba*-1<< endl;}
    else if(liczba==0){
    cout << "Wartosc bezwzgledna tej liczby to: " << liczba << endl;}
    else
    {cout<<"blad";}
    return 0;
}