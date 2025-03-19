
// AP
#include <iostream>
#include <cstdlib>
using namespace std;

class DzialaniaNaTablicach
{
    int liczbaElementow;
    int *tablica;

public:
    DzialaniaNaTablicach(int rozmiarTablicy)
    {
        liczbaElementow = rozmiarTablicy;
        tablica = new int[rozmiarTablicy];
        srand(time(NULL));
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            tablica[i] = rand() % 1000 + 1;
        }
    }
    void display()
    {
        for (int i = 0; i < liczbaElementow; i++)
        {
            cout << i << ": " << tablica[i] << endl;
        }
    };

    int pierwszeWystapienie(int liczbaDoWyszukania)
    {
        for (int i = 0; i < liczbaElementow; i++)
        {
            if (tablica[i] == liczbaDoWyszukania)
            {
                return i;
            }
        }
        return -1;
    }

    int nieparzysteWartosci()
    {
        int wystapienia = 0;
        for (int i = 0; i < liczbaElementow; i++)
        {
            if (tablica[i] % 2 == 1)
            {
                cout << tablica[i] << endl;
                wystapienia++;
            }
        }
        return wystapienia;
    }
    //****************************
    // nazwa metody: sredniaArytmetyczna
    // opis metody:  sumuje wartosci elementow w tabeli aby pozniej podzielic sume ich wartosci przez ilosc elementow co daje nam srednia arytmetyczna w podanej tabeli
    // parametry:    brak
    // zwracany typ: float, zwracana jest suma podzielona przez liczbe elementow tablicy
    // autor:        Burda Dominik
    //****************************
    float sredniaArytmetyczna()
    {
        float suma = 0;
        for (int i = 0; i < liczbaElementow; i++)
        {
            suma += tablica[i];
        }
        return suma / (float)liczbaElementow;
    }
};

int main()
{
    DzialaniaNaTablicach tablica(30);
    tablica.display();
    cout << "Podaj liczbe ktora chcesz sprawdzic w tablicy a ja zwroce jej index ";
    int *liczbaDoWyszukania = new int;
    cin >> *liczbaDoWyszukania;
    cout << tablica.pierwszeWystapienie(*liczbaDoWyszukania) << endl;
    delete liczbaDoWyszukania;
    cout << "liczby nieparzyste: \n"
         << tablica.nieparzysteWartosci() << " - tyle jest liczb nieparzsytych " << endl;
    cout << "srednia wszystkich elementow " << tablica.sredniaArytmetyczna() << endl;
    return 0;
}