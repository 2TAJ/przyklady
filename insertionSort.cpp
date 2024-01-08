#include <iostream>
using namespace std;
void insertionSort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {

        for (int j = 0; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] > tablicaPrzeszukiwana[j + 1])
            {
                temp = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[j] = tablicaPrzeszukiwana[j + 1];
                tablicaPrzeszukiwana[j + 1] = temp;
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
    insertionSort(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    return 0;
}