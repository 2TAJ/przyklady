#include <iostream>
#include <vector>
using namespace std;
int sumaWwektorze(vector<int> &wektor)
{
    int suma = 0;
    for (int &it : wektor)
    {
        suma = it + suma;
    }
    return suma;
}
void wypelnijWektor(vector<int> &wektor, int rozmiar)
{
    int podanaWartosc;
    wektor.resize(rozmiar);
    for (int &it : wektor)
    {
        cout << "podaj wartosc: " << endl;
        cin >> podanaWartosc;
        it = podanaWartosc;
    }
}
double sredniaWwektorze(vector<int> &wektor)
{
    double srednia = 0;
    double suma = sumaWwektorze(wektor);
    srednia = suma / wektor.size();
    return srednia;
}