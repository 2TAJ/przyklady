#include <iostream>
#include <fstream>
using namespace std;
struct osoba
{
    string imie;
    int wiek;
};
int rozmiarTablicy()
{
    int rozmiar;
    cout << "Podaj liczbe elementow: " << endl;
    cin >> rozmiar;
    return rozmiar;
}
void wypelnij(osoba *tablica, int rozmiar)
{
    cout << "Imie i wiek " << endl;
    for (int i = 0; i < rozmiar; ++i)
    {
        cin >> tablica[i].imie;
        cin >> tablica[i].wiek;
    }
}

// void zapisz(osoba *tablica, int rozmiar)
// {
//     fstream plik("baza.txt");
//     for (int i = 0; i < rozmiar; ++i)
//     {
//         plik << tablica[i].imie << endl;
//         plik << tablica[i].wiek << endl;
//     }
//     plik.close();
// }
void zapisz(osoba *osoby, int dlugosc)
{
    fstream plik;
    plik.open("dane.txt", ios::out);

    if (plik.good())
    {
        for (int i = 0; i < dlugosc; i++)
        {
            plik << osoby[i].imie << endl;
            plik << osoby[i].wiek << endl;
            if (i != dlugosc - 1)
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
void wczytaj(osoba *osoby)
{
    int i = 0;
    fstream plik;
    plik.open("dane.txt", ios::in);

    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> osoby[i].imie >> osoby[i].wiek;
            i++;
        }
    }
    else
    {
        cout << "Blad";
    }
}
void dodajOsobe(int rozmiar)
{
    int dlugosc = rozmiar;
    osoba *osoby = new osoba[dlugosc + 1];
    wczytaj(osoby);
    string imie,
        nazwisko;
    int wiek, numerButa;

    cout << "Podaj imie:" << endl;
    cin >> imie;
    cout << "Podaj wiek:" << endl;
    cin >> wiek;

    osoby[dlugosc].imie = imie;
    osoby[dlugosc].wiek = wiek;
    zapisz(osoby, dlugosc + 1);
}

void wypisz(osoba *osoby, int dlugosc)
{
    for (int i = 0; i < dlugosc; i++)
    {
        cout << "Imie:" << osoby[i].imie << endl;
        cout << "Wiek:" << osoby[i].wiek << endl;
    }
}
void wypiszSzukane(osoba *osoby, int dlugosc)
{
    string podaneImie;
    int podanyWiek;
    cout << "Podaj imie i wiek ktorego szukasz" << endl;
    cin >> podaneImie;
    cin >> podanyWiek;
    for (int i = 0; i < dlugosc; i++)
    {
        if (podaneImie == osoby[i].imie || podanyWiek == osoby[i].wiek)
        {

            cout << "Szukane imie: " << osoby[i].imie << endl;
            cout << "Szukany wiek: " << osoby[i].wiek << endl;
        }
    }
}

int main()
{
    int rozmiar = rozmiarTablicy();

    osoba *tablica = new osoba[rozmiar];
    dodajOsobe(rozmiar);

    // zapisz(tablica, rozmiar);
    wypisz(tablica, rozmiar);
    wypiszSzukane(tablica, rozmiar);

    return 0;
}