#include <iostream>
#include <vector>

using namespace std;

void wypelnij(vector<int> &wektor, int ilosc)
{
    srand(time(NULL));

    for (int i = 0; i < ilosc; ++i)
    {
        wektor.push_back(rand() % 10 + 1);
    }
}

void wyswietl(vector<int> &wektor)
{
    cout << "Wszystkie liczby: " << endl;

    for (int liczba : wektor)
    {
        cout << liczba << endl;
    }

    cout << endl;
}
vector<int> wartosciEkstremalne(vector<int> &wektor)
{
    vector<int> extremalne;
    int min = wektor[0];
    int max = wektor[0];

    for (int liczba : wektor)
    {
        if (liczba < min)
        {
            min = liczba;
        }
        if (liczba > max)
        {
            max = liczba;
        }
    }
    extremalne.push_back(min);
    extremalne.push_back(max);
    return extremalne;
}
int main()
{
    vector<int> wektor;
    int rozmiar;
    cout << "Podaj ile liczb chcesz zapisac" << endl;
    cin >> rozmiar;
    wypelnij(wektor, rozmiar);
    wyswietl(wektor);
    vector<int> wektor1 = wartosciEkstremalne(wektor);
    cout << "Wartosci ekstremalne: " << endl;
    for (int elementy : wektor1)
    {
        cout << elementy << endl;
    }
    return 0;
}