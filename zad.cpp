#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct osoba
{
    int wiek;
    int nrButa;
};

void wypisz(osoba *osoby, int dlugosc)
{
    for (int i = 0; i < dlugosc; i++)
    {
        cout << "Wiek:" << osoby[i].wiek << endl;
        cout << "But" << osoby[i].nrButa << endl;
    }
};
int wczytajDlugosc()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    int liczbaOsob = 0;
    string temp = "";
    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> temp >> temp;
            liczbaOsob++;
        }
    }
    else
    {
        cout << "Blad";
    }

    if (temp == "")
    {
        return 0;
    }

    plik.close();
    return liczbaOsob;
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
            plik >> osoby[i].wiek >> osoby[i].nrButa;
            i++;
        }
    }
    else
    {
        cout << "Blad";
    }
}

void zapisz(osoba *osoby, int dlugosc)
{
    fstream plik;
    plik.open("dane.txt", ios::out);

    if (plik.good())
    {
        for (int i = 0; i < dlugosc; i++)
        {
            plik << osoby[i].wiek << " " << osoby[i].nrButa;
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
void dodajOsobe()
{
    int dlugosc = wczytajDlugosc();
    osoba *osoby = new osoba[dlugosc + 1];
    wczytaj(osoby);
    int wiek, numerButa;

    cout << "Podaj wiek:" << endl;
    cin >> wiek;
    cout << "Podaj numerButa:" << endl;
    cin >> numerButa;
    osoby[dlugosc].wiek = wiek;
    osoby[dlugosc].nrButa = numerButa;
    zapisz(osoby, dlugosc + 1);
}
void sortujPoWieku(osoba *osoby, int dlugosc)
{
    for (int i = 1; i < dlugosc; i++)
    {
        osoba temp = osoby[i];
        int j = i - 1;

        while (osoby[j].wiek > temp.wiek && j >= 0)
        {
            osoby[j + 1] = osoby[j];

            j--;
        }

        osoby[j + 1] = temp;
    }
};

void sortujPoNumerzeButa(osoba *osoby, int dlugosc)
{
    for (int i = 1; i < dlugosc; i++)
    {
        osoba temp = osoby[i];
        int j = i - 1;

        while (osoby[j].nrButa > temp.nrButa && j >= 0)
        {
            osoby[j + 1] = osoby[j];

            j--;
        }

        osoby[j + 1] = temp;
    }
};
int main()
{
    int wielkoscTablicy;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    osoba *dynamicznaTablica = new osoba[wielkoscTablicy];
    dodajOsobe();
    sortujPoNumerzeButa(dynamicznaTablica, wielkoscTablicy);
    wczytaj(dynamicznaTablica);
    wypisz(dynamicznaTablica, wielkoscTablicy);
    return 0;
}