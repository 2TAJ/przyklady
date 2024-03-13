#include <iostream>
#include <string>
using namespace std;
struct struktura
{
    int wiek;
    int nrButa;
};

void wypelnijUzytkownika(struktura *tablicaDoWypełnienia, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "Podaj wiek i nrButa" << endl;
        cin >> tablicaDoWypełnienia[i].wiek;
        cin >> tablicaDoWypełnienia[i].nrButa;
    }
}

void wypiszStrukture(struktura *tablicaDoWypisania, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i].wiek << " ";
        cout << tablicaDoWypisania[i].nrButa << " ";
        cout << endl;
    }
}

void znajdzPoWieku(struktura *osoby, int dlugosc, int podanyWiek)
{
    for (int i = 0; i < dlugosc; i++)
    {
        if (osoby[i].wiek == podanyWiek)
        {
            cout << osoby[i].wiek << " ";
            cout << osoby[i].nrButa << endl;
        }
    }
}
void znajdzPoNr(struktura *osoby, int dlugosc, int podanyNr)
{
    for (int i = 0; i < dlugosc; i++)
    {
        if (osoby[i].nrButa == podanyNr)
        {
            cout << osoby[i].wiek << " ";
            cout << osoby[i].nrButa << endl;
        }
    }
}
int main()

{

    int wielkoscTablicy;
    int poCzymSzuka;
    int podanyWiek;
    int podanyNr;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    struktura *dynamicznaTablica = new struktura[wielkoscTablicy];
    wypelnijUzytkownika(dynamicznaTablica, wielkoscTablicy);
    wypiszStrukture(dynamicznaTablica, wielkoscTablicy);
    cout << "Po czym chcesz szukac? 1-wiek , 2-nrButa" << endl;
    cin >> poCzymSzuka;
    if (poCzymSzuka == 1)
    {
        cout << "Podaj wiek" << endl;
        cin >> podanyWiek;
        znajdzPoWieku(dynamicznaTablica, wielkoscTablicy, podanyWiek);
    }
    if (poCzymSzuka == 2)
    {
        cout << "Podaj Nrbuta" << endl;
        cin >> podanyNr;
        znajdzPoNr(dynamicznaTablica, wielkoscTablicy, podanyNr);
    }
    else
    {
        return 0;
    }
    return 0;
}