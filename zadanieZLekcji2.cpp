#include <iostream>
#include <fstream>
using namespace std;

struct osoba
{

    short wiek;
    short numerButa;
};
void otworz(osoba baza[10])
{
    fstream plik;
    plik.open("baza.txt", ios::in);
    if (plik.good() == true)
    {
        for (short i = 0; i < 10; i++)
        {

            plik >> baza[i].wiek;
            plik >> baza[i].numerButa;
        }
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku \n";
    }
    plik.close();
}
void sprawdz(osoba baza[10], int rozmiar)
{
    int nrButa;
    int i = 0;
    bool czyJest;
    while (i < rozmiar)
    {
        nrButa = baza[i].numerButa;
        if (nrButa > 6)
        {
            czyJest = true;
            cout << baza[i].wiek << " " << baza[i].numerButa;
            cout << endl;
        }
        i++;
    }

    if (!czyJest)
    {
        cout << "Nikogo nie ma \n";
    }
}

int main()
{
    osoba baza[10];
    otworz(baza);
    sprawdz(baza, 10);
    return 0;
}