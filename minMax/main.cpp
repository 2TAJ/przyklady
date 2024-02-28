#include <iostream>
#include <vector>
#include "minmax.h"
using namespace std;

int main()
{
    int wielkoscTablicy;
    int wielkoscWektora;
    int tablica[10];
    wypelnij(tablica, 10);
    wypisz(tablica, 10);

    cout << znajdzMinStat(tablica, 10) << endl;
    cout << znajdzMaxStat(tablica, 10) << endl;
    cout << "podaj wielkosc tablicy:" << endl;
    cin >> wielkoscTablicy;
    int *dynamicznaTablica = new int[wielkoscTablicy];
    wypelnij(dynamicznaTablica, wielkoscTablicy);
    wypisz(dynamicznaTablica, wielkoscTablicy);
    cout << znajdzMinDyn(dynamicznaTablica, wielkoscTablicy) << endl;
    cout << znajdzMaxDyn(dynamicznaTablica, wielkoscTablicy) << endl;
    cout << "podaj wielkosc wektora:" << endl;
    cin >> wielkoscWektora;
    vector<int> wektor(wielkoscWektora);
    wypelnijWektor(wektor, wielkoscWektora);
    wypiszWektor(wektor);
    cout << znajdzMinWektor(wektor) << endl;
    cout << znajdzMaxWektor(wektor) << endl;

    return 0;
}