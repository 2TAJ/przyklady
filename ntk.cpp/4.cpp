#include <iostream>
using namespace std;

struct Tablica
{
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

void wypiszWiekszeOd7(Tablica &tablica)
{
    cout << "Liczby większe od 7: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] > 7)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;
}

void wypiszParzysteNieparzyste(Tablica &tablica)
{
    cout << "Liczby parzyste: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] % 2 == 0)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;

    cout << "Liczby nieparzyste: ";
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] % 2 != 0)
        {
            cout << tablica.elementy[i] << " ";
        }
    }
    cout << endl;
}
// int przeszukaj(Tablica &tablica, int szukana)
// {
//     for (int i = 0; i < tablica.rozmiar; ++i)
//     {
//         if (tablica.elementy[i] == szukana)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
void przeszukaj(Tablica &tablica, int szukana)
{
    bool znaleziono = false;
    for (int i = 0; i < tablica.rozmiar; i++)
    {
        if (tablica.elementy[i] == szukana)
        {
            cout << "Znaleziono wartość " << szukana << " na indeksie: " << i << endl;
            znaleziono = true;
        }
    }
    if (!znaleziono)
    {
        cout << "Wartość " << szukana << " nie została znaleziona." << endl;
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

    int wybor;
    cout << "Wybierz opcję:\n";
    cout << "1. Przeszukaj tablicę\n";
    cout << "2. Wypisz liczby parzyste i nieparzyste\n";
    cout << "3. Wypisz liczby większe od 7\n";
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        int szukana;
        cout << "Podaj wartość do wyszukania: ";
        cin >> szukana;
        przeszukaj(tablicaTestowa, szukana);
        break;
    case 2:
        wypiszParzysteNieparzyste(tablicaTestowa);
        break;
    case 3:
        wypiszWiekszeOd7(tablicaTestowa);
        break;
    default:
        cout << "Niepoprawny wybór.\n";
        break;
    }
    //   int szukana;
    //         cout << "Podaj wartość do wyszukania: ";
    //         cin >> szukana;
    //         int indeks = przeszukaj(tablicaTestowa, szukana);
    //         if (indeks != -1)
    //         {
    //             cout << "Znaleziono wartość na indeksie: " << indeks << endl;
    //         }
    //         else
    //         {
    //             cout << "Wartość nie została znaleziona." << endl;
    // }
    return 0;
}