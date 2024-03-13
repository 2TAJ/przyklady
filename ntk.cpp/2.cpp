#include <iostream>
using namespace std;

struct Tablica {
    int *elementy;
    int rozmiar;
};

void wypisz(Tablica &tablica)
{
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        cout << tablica.elementy[i] << " ";
    }
    cout << endl;
}

void sortuj(Tablica &tablica)
{
    for (int i = 0; i < tablica.rozmiar - 1; i++)
    {
        for (int j = 0; j < tablica.rozmiar - i - 1; j++)
        {
            if (tablica.elementy[j] > tablica.elementy[j + 1])
            {
                int temp = tablica.elementy[j];
                tablica.elementy[j] = tablica.elementy[j + 1];
                tablica.elementy[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Tablica tablicaTestowa;
    cout << "Podaj rozmiar tablicy: ";
    cin >> tablicaTestowa.rozmiar;

    tablicaTestowa.elementy = new int[tablicaTestowa.rozmiar];

    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < tablicaTestowa.rozmiar; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> tablicaTestowa.elementy[i];
    }

    cout << "Tablica przed sortowaniem: ";
    wypisz(tablicaTestowa);

    sortuj(tablicaTestowa);

    cout << "Tablica po sortowaniu: ";
    wypisz(tablicaTestowa);

    delete[] tablicaTestowa.elementy;

    return 0;
}