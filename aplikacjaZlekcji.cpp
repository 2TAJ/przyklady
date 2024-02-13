#include <fstream>
#include <iostream>
using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
    int iD;
};
void wpiszDoPliku(osoba *baza, int rozmiar)
{
    fstream plik;
    plik.open("bazaDoApk.txt", ios::out);
    int i = 0;
    if (plik.good() == true)
    {
        while (i < rozmiar)
        {
            plik << baza[i].iD << " " << baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << " " << baza[i].nrButa << endl;
            i++;
        }
    }
    else
    {
        cout << "Nie udalo sie zapisac pliku";
    }
    plik.close();
}
void wpisanieDanychDoTablicy(osoba *baza)
{
    fstream plik;
    plik.open("bazaDoApk.txt", ios::in);
    if (plik.good() == true)
    {
        int i = 0;
        while (!plik.eof())
        {
            plik >> baza[i].iD;
            plik >> baza[i].imie;
            plik >> baza[i].nazwisko;
            plik >> baza[i].wiek;
            plik >> baza[i].nrButa;
            i++;
        }
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
    }
}

void wypiszTablice(osoba *baza, int rozmiar)
{
    for (short i = 0; i < rozmiar; i++)
    {
        cout << baza[i].iD << " ";
        cout << baza[i].imie << " ";
        cout << baza[i].nazwisko << " ";
        cout << baza[i].wiek << " ";
        cout << baza[i].nrButa << " ";
        cout << endl;
    }
}
void rozmiarTablicy()
{
    string cos;
    fstream plik;
    plik.open("bazaDoApk.txt", ios::in);
    int i = 0;
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik >> cos;
            i++;
        }
    }
    plik.close();
    int rozmiar = i / 5;
    osoba *baza = new osoba[rozmiar];
}
void dodawanieDoPliku(osoba *baza, int rozmiar)
{
   
}
int main()
{ // cout<<"Wybierz co chcesz zrobic z baza danych "<<endl;
  // cout<<"1) Modyfikacja"<<endl;
  // cout<<"2) Przeszukac ja po jednym polu"<<endl;
  // cout<<"3) Przeszukac ja po dwoch polach"<<endl;
    string cos;
    fstream plik;
    plik.open("bazaDoApk.txt", ios::in);
    int i = 0;
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik >> cos;
            i++;
        }
    }
    plik.close();
    int rozmiar = i / 5;
    osoba *baza = new osoba[rozmiar];
    wpisanieDanychDoTablicy(baza);
    wypiszTablice(baza, rozmiar);
    // dodawanieDoPliku(baza, rozmiar);

    return 0;
}