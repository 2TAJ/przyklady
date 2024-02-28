#include <iostream>
#include <fstream>
using namespace std;
struct oceny
{
    int waga;
    int ocena;
};
void wartosciUzytkownika(oceny *osoby, int podanaDlugosc)
{
    int podanaOcena;
    int podanaWaga;

    for (int i = 0; i < podanaDlugosc; i++)
    {
        cout << "Podaj ocene i jej wage:" << endl;
        cin >> podanaOcena;
        cin >> podanaWaga;
        osoby[i].ocena = podanaOcena;
        osoby[i].waga = podanaWaga;
    }
}

void srednia(oceny *osoby, int dlugosc)
{
    double ocenyLacznie, razem = 0, wagaLacznie;
    for (int i = 0; i < dlugosc; i++)
    {
        ocenyLacznie = osoby[i].ocena * osoby[i].waga;
        razem = razem + ocenyLacznie;
        ocenyLacznie = 0;
    }

    for (int i = 0; i < dlugosc; i++)
    {
        wagaLacznie = wagaLacznie + osoby[i].waga;
    }

    cout << "srednia ocen: " << razem / wagaLacznie;
}