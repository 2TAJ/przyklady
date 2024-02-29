#include <iostream>
#include <string>
#include "operacje.h"
using namespace std;
void zapisz(int tablica[], int dlugoscTablicy)
{
    fstream plik;
    plik.open("dane.txt", ios::out);

    if (plik.good())
    {
        for (int i = 0; i < dlugoscTablicy; i++)
        {
            plik << tablica[i];
            if (i != dlugoscTablicy - 1)
            {
                plik << endl;
            }
        }
        plik.close();
    }
    else
    {
        cout << "Blad";
    }
}
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 21;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
    cout << endl;
}
void sortowanieRosnaco(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int minimalny;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        minimalny = tablicaPrzeszukiwana[i];
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] < minimalny)
            {
                temp = minimalny;
                minimalny = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[i] = minimalny;
                tablicaPrzeszukiwana[j] = temp;
            }
        }
    }
}
void sortowanieMalejaco(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int max;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        max = tablicaPrzeszukiwana[i];
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] > max)
            {
                temp = max;
                max= tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[i] = max;
                tablicaPrzeszukiwana[j] = temp;
            }
        }
    }
}
void wczytaj(int tablica[])
{
    int i = 0;
    fstream plik;
    plik.open("dane.txt", ios::in);

    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> tablica[i];
            i++;
        }
    }
    else
    {
        cout << "Blad";
    }
}
int main()

{

    int wielkoscTablicy;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    int *dynamicznaTablica = new int[wielkoscTablicy];
    wypelnij(dynamicznaTablica, wielkoscTablicy);
    zapisz(dynamicznaTablica, wielkoscTablicy);
    wypisz(dynamicznaTablica, wielkoscTablicy);
    // sortowanieRosnaco(dynamicznaTablica, wielkoscTablicy);
    sortowanieMalejaco(dynamicznaTablica, wielkoscTablicy);
    wypisz(dynamicznaTablica, wielkoscTablicy);
    return 0;
}