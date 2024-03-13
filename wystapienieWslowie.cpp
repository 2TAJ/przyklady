// #include <iostream>
// #include <cstring>
// using namespace std;
// void indexIileIchBylo(string napis, char znak)
// {
//     int iloscWystapien = 0;
//     int index = 0;
//     for (char znakNapisu : napis)
//     {
//         if (znak == znakNapisu)
//         {
//             cout << "Znak jest na indexie: " << index << endl;
//             iloscWystapien++;
//         }
//         index++;
//     }
//     cout << "Liczba wystapien: " << iloscWystapien << endl;
// }
// int pierwszeWystapienie(char napis[30], char znak)
// {
//     return strlen(napis) - strlen(strchr(napis, znak));
// }
// int main()
// {
//     char napis[30];
//     char znak;
//     cout << "Podaj jakis napis " << endl;
//     cin >> napis;
//     cout << "Podaj znak ktorego mam szukac w napisie " << endl;
//     cin >> znak;
//     indexIileIchBylo(napis, znak);
//     cout << "Znak " << znak << " znajduje sie na: " << pierwszeWystapienie(napis, znak);
//     return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;

void ilerazywystepuje(char *tekst, char znak)
{
    int wystepuje = 0;

    for (int i = 0; tekst[i] != '\0'; i++)
    {
        if (tekst[i] == znak)
        {
            wystepuje++;
            cout << i << endl;
        }
    }

    cout << "litera " << znak << " jest w tekscie tyle razy: " << wystepuje << endl;
}

int indekspierwszego(char *napis, char litera)
{
    return strlen(napis) - strlen(strchr(napis, litera));
}

int main()
{
    char napis[30] = "matematyka";
    char litera = 'm';

    ilerazywystepuje(napis, litera);
    int wystapienie = indekspierwszego(napis, litera);

    cout << "pierwsze wystapienie litery " << litera << " : " << wystapienie << endl;

    return 0;
}