// zwracanie liczby wystapien znaku i indxy
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void indexy(string napis, char znak)
{
    int wystapienia = 0;
    int index = 0;
    for (char znakNapisu : napis)
    {
        if (znak == znakNapisu)
        {
            cout << "Znak jest na indexie: " << index << endl;
            wystapienia++;
        }
        index++;
    }
    cout << "Liczba wystapien: " << wystapienia << endl;
}
int indexPierwszegoWystapienia(char napis[15], char znak)
{
    return strlen(napis) - strlen(strchr(napis, znak));
}
vector<int> indexyWTablicy(char napis[15], char znak)
{
    int wystapienia = 0;
    int indexAktualny = 0;
    vector<int> wektor;
    for (int i = 0; napis[i] != '\0'; i++)
    {
        if (napis[i] == znak)
        {
            wektor.resize(wektor.size() + 1);
            wektor[indexAktualny] = i;
            indexAktualny++;
        }
    }
    return wektor;
}
int main()
{
    char napis[15];
    char znak;
    cout << "Podaj napis ";
    cin >> napis;
    cout << "Podaj znak do sprawdzeia ";
    cin >> znak;
    indexy(napis, znak);
    cout << indexPierwszegoWystapienia(napis, znak) << endl;
    vector<int> wektor = indexyWTablicy(napis, znak);
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "Pojawienie sie w wektorze na indexie " << wektor[i] << endl;
    }
    return 0;
}