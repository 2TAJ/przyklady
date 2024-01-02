#include <iostream>
using namespace std;
void wypelnij(int tablica[], int &rozmiar)
{
    cout << "podej rozmiar tablicy do wypełnienia\n";
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}
void wypisz(int tablica[], int &rozmiar)
{
    // cout << "podej rozmiar tablicy ktora mam wypisac\n";
    // cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
         cout << "to jest " << 1 + i << " element tablicy\n";
        cout << tablica[i]<<endl;
    }
}
int main()
{   
    int tab[5];
    int rozmiar;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "podej " << 1 + i << " element tablicy\n";
    //     cin >> tab[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "to jest " << 1 + i << " element tablicy\n";
    //     cout << tab[i] << endl;
    // }

wypelnij(tab,rozmiar);
wypisz(tab,rozmiar);
    return 0;
}