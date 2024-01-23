#include <iostream>
#include <fstream>
using namespace std;
/*
void wpisz()
{
    string imie, nazwisko;
    short wiek, numerButa;
    fstream plik;
    plik.open("wejscia.txt", ios::out | ios::app);
    cout << "Siema podaj swoje dane, Imie,nazwisko,wiek,numer buta \n";
    cin >> imie;
    cin >> nazwisko;
    cin >> wiek;
    cin >> numerButa;
    if (plik.good() == true)
    {
        plik << imie << " " << nazwisko << " " << wiek << " " << numerButa << endl;
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie";
    }
} */
void sprawdz(string nazwiskoDoSprawdzenia)
{
    string nazwisko, imie;
    int index = 1;
    bool czyJest;
    fstream plik;
    plik.open("wejscia.txt", ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            if (index % 4 == 1)
            {
                plik >> imie;
            }
            if (index % 4 == 2)
            {
                plik >> nazwisko;
                if (nazwisko == nazwiskoDoSprawdzenia)
                {
                    czyJest = true;
                    cout << imie << " " << nazwisko << " ";
                    for (short i = 0; i <= 1; i++)
                    {
                        plik >> nazwisko;
                        cout << nazwisko << " ";
                    }
                    cout << endl;
                }
            }
            index++;
        }
        if (!czyJest)
        {
            cout << "Nikogo nie ma \n";
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
    }
}
int main()
{
    string nazwisko;
    cout << "Podaj nazwisko ";
    cin >> nazwisko;
    sprawdz(nazwisko);
    return 0;
}