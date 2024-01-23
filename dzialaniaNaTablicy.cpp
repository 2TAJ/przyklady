#include <iostream>
#include <fstream>
using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
};
int main()
{

    osoba baza[100];
    fstream plik;
    plik.open("wejscia.txt", ios::in);
    if (plik.good() == true)
    {
        int i = 0;
        while (!plik.eof())
        {

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
    plik.close();

    // for (short i = 0; i < 3; i++)
    // {
    //     cout << baza[i].imie << " ";
    //     cout << baza[i].nazwisko << " ";
    //     cout << baza[i].wiek << " ";
    //     cout << baza[i].nrButa << " ";
    //     cout << endl;
    // }
    for (short i = 0; i < 4; i++)
        if (baza[i].wiek > 18)
        {
            {
                cout << baza[i].imie << " ";
                cout << baza[i].nazwisko << " ";
                cout << baza[i].wiek << " ";
                cout << baza[i].nrButa << " ";
                cout << endl;
            }
        }

    return 0;
}