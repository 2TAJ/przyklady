#include <iostream>
#include <vector>
using namespace std;
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
void wypelnijWektor(vector<int> &wektor, int rozmiar)
{
    wektor.resize(rozmiar);
    for (int i = 0; i < wektor.size(); i++)
    {
        srand((i + 1) * time(NULL));
        wektor[i] = rand() % 21;
    }
}
// void wypelnijWektor(vector<int> &wektor)
// {
//     int rozmiar;
//     cout << "Podaj rozmiar wektora " << endl;
//     cin >> rozmiar;
//     wektor.resize(rozmiar);
//     for (int i = 0; i < wektor.size(); i++)
//     {
//         cout << "Podaj wartosc do wektora" << endl;
//         cin >> wektor[i];
//     }
// }

void wypiszWektor(vector<int> &wektor)
{
    for (int i = 0; i < wektor.size(); ++i)
    {
        cout << wektor[i] << " ";
    }
    cout << endl;
}
int znajdzMinStat(int tablica[], int rozmiar)
{
    int minimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] < minimum)
            minimum = tablica[i];
    }
    return minimum;
}
int znajdzMaxStat(int tablica[], int rozmiar)
{
    int maksimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] > maksimum)
            maksimum = tablica[i];
    }
    return maksimum;
}

int znajdzMinDyn(int *tablica, int rozmiar)
{
    int minimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] < minimum)
            minimum = tablica[i];
    }
    return minimum;
}

int znajdzMaxDyn(int *tablica, int rozmiar)
{
    int maksimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] > maksimum)
            maksimum = tablica[i];
    }
    return maksimum;
}

int znajdzMinWektor(vector<int> &wektor)
{
    int minimum = wektor[0];
    for (int i = 1; i < wektor.size(); ++i)
    {
        if (wektor[i] < minimum)
            minimum = wektor[i];
    }
    return minimum;
}

int znajdzMaxWektor(vector<int> &wektor)
{
    int maksimum = wektor[0];
    for (int i = 1; i < wektor.size(); ++i)
    {
        if (wektor[i] > maksimum)
            maksimum = wektor[i];
    }
    return maksimum;
}