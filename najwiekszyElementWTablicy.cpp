#include <iostream>
using namespace std;
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
int najwiekszyElement(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int maksymalny = tablicaPrzeszukiwana[0];
    int indexMaksymalnego=0;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        if (tablicaPrzeszukiwana[i] < maksymalny)
        {
            maksymalny = tablicaPrzeszukiwana[i];
            indexMaksymalnego = i;
        }
        
    }
    
    return maksymalny;
}
int main()
{
    int tablicaTestowa[10];
    wypelnij(tablicaTestowa, 10);
    wypisz(tablicaTestowa, 10);
    cout << endl;
    najwiekszyElement(tablicaTestowa,10);
    wypisz(tablicaTestowa, 10);
    return 0;
}