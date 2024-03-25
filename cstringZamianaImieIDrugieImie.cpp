#include <iostream>
#include <string>
using namespace std;
int main()
{
    string imieInazwisko;
    string drugieImie;
    cout << "Podaj imie i nazwisko oddzielone spacja";
    getline(cin, imieInazwisko);
    cout << "Podaj drugie imie";
    cin >> drugieImie;
    int odciecie1 = imieInazwisko.find(" ");
    string imie = imieInazwisko.substr(0, odciecie1 + 1);
    string nazwisko = imieInazwisko.substr(odciecie1 + 1, imie.length());
    imie.replace(odciecie1 + 1, 0, drugieImie);
    int dlugosc = imie.length();
    imie.replace(dlugosc, 0, " ");
    imie.replace(dlugosc + 1, 0, nazwisko);
    cout << "Zamieniony napis: " << imie << endl;
    return 0;
}
