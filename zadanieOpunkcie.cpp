#include <iostream>
#include <string>
using namespace std;
struct punkt
{
    double x;
    double y;
};

void wypelnijUzytkownika(punkt *tablicaDoWypelnienia, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "Podaj x i y punktu" << endl;
        cin >> tablicaDoWypelnienia[i].x;
        cin >> tablicaDoWypelnienia[i].y;
    }
}

void wypiszStrukture(punkt *tablicaDoWypisania, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "Punkt " << i << ": ";
        cout << tablicaDoWypisania[i].x << " ";
        cout << tablicaDoWypisania[i].y << " ";
        cout << endl;
    }
}

int odlegloscPunktow(punkt punkty)
{

    return punkty.x * punkty.x + punkty.y * punkty.y;
}
void najdalszyOdZera(punkt *punkty, int dlugosc)
{
    double odleglosc;
    double zero = 0.0;
    for (int i = 0; i < dlugosc; i++)
    {
        odleglosc = punkty[i].x * punkty[i].x + punkty[i].y * punkty[i].y;
        if (odleglosc > zero)
        {
            zero = odleglosc;
        }
    }
    for (int i = 0; i < dlugosc; i++)
    {
        odleglosc = punkty[i].x * punkty[i].x + punkty[i].y * punkty[i].y;
        if (odleglosc == zero)
        {
            cout << "Najdalszy punkt to punkt " << i << ":" << punkty[i].x << " " << punkty[i].y << endl;
        }
    }
}

int main()

{

    int wielkoscTablicy;
    int podanyX;
    int podanyY;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    punkt *dynamicznaTablica = new punkt[wielkoscTablicy];
    wypelnijUzytkownika(dynamicznaTablica, wielkoscTablicy);
    wypiszStrukture(dynamicznaTablica, wielkoscTablicy);
    najdalszyOdZera(dynamicznaTablica, wielkoscTablicy);
    return 0;
}