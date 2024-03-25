#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char imieInazwisko[30];
    cout << "Podaj imie i nazwisko" << endl;
    cin.getline(imieInazwisko, 30);
    char drugieImie[30];
    cout << "Podaj drugie imie" << endl;
    cin >> drugieImie;
    char napis2[30];
    for (int i = 0; imieInazwisko[i] != ' '; i++)
    {
        napis2[i] = imieInazwisko[i];
    }
    strcat(napis2, " ");
    strcat(napis2, drugieImie);
    strchr(imieInazwisko, ' ');
    char *napis3 = strchr(strchr(imieInazwisko, ' '), ' ');
    strcat(napis2, napis3);
    cout << napis2 << endl;
    return 0;
}
