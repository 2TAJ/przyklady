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
    plik.open("baza2.txt", ios::out);
    int i = 0;
    if (plik.good() == true)
    {
        while (i < rozmiar)
        {
            plik<<baza[i].iD<< baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << " " << baza[i].nrButa << endl;
            i++;
        }
    }
    else
    {
        cout << "Nie udalo sie zapisac pliku";
    }
    plik.close();
}
int main()
{
    string cos;
    fstream plik;
    plik.open("baza.txt", ios::in);
    int i=0;
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik>>cos;
            i++;
        }
    }
    plik.close();
    int k=i/5;
    // cout<<"to jest i "<<i<<endl<<k<<endl;  test jednostkowy
    osoba *baza = new osoba [k]; //deklaracja na stercie (heap)
    plik.open("baza.txt", ios::in);
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
    
    for (short i = 0; i < k; i++)
    {
        cout << baza[i].iD << " ";
        cout << baza[i].imie << " ";
        cout << baza[i].nazwisko << " ";
        cout << baza[i].wiek << " ";
        cout << baza[i].nrButa << " ";
        cout << endl;
    }
    cout << "starsi niz 12\n";
    for (short i = 0; i < k; i++) 
    {
        
        if (baza[i].wiek > 12)
        {
            cout << "iD: "<<baza[i].iD << " ";
            cout << "imie: "<<baza[i].imie << " ";
            cout << "nazwisko: "<<baza[i].nazwisko << " ";
            cout << "wiek: "<<baza[i].wiek << " ";
            cout << "nrButa: "<<baza[i].nrButa << " ";
            cout << endl;
        }
    }

    return 0;
}