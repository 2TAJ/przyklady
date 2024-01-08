#include <iostream>
using namespace std;
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
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}
int main()
{
    int tablicaTestowa[5];
    wypelnij(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    sortowanieRosnaco(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    return 0;
}