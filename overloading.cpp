#include <iostream>
using namespace std;

int powieksz(int liczba)
{
    return liczba++;
}
int powieksz(int liczba, int liczba2)
{
    return liczba + liczba2;
}
int powieksz(int &liczba, bool odUsera)
{
    int liczbaUsera;
    cout << "Podaj liczbe o ile powiekszyc";
    cin >> liczbaUsera;
    return liczba + liczbaUsera;
}
int main()
{
    int liczba = 5, liczba2 = 5, liczba3 = 5;
    powieksz(liczba);
    cout << liczba << endl; // 6
    powieksz(liczba2, 3);
    cout << liczba2 << endl; // 8
    powieksz(liczba3, true);
    cout << liczba3 << endl;
    return 0;
}