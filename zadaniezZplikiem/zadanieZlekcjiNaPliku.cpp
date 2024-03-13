#include <iostream>
#include <fstream>
using namespace std;
struct osoba
{
  string imie;
  int wiek;
};
int rozmiarTablicy()
{
  int rozmiar;
  cout << "Podaj liczbe elementow: " << endl;
  cin >> rozmiar;
  return rozmiar;
}
void wypelnij(osoba *tablica, int rozmiar)
{
  cout << "Imie i wiek " << endl;
  for (int i = 0; i < rozmiar; ++i)
  {
    cin >> tablica[i].imie;
    cin >> tablica[i].wiek;
  }
}
void zapisz(osoba *tablica, int rozmiar)
{
  fstream plik("baza.txt");
  for (int i = 0; i < rozmiar; ++i)
  {
    plik << tablica[i].imie << endl;
    plik << tablica[i].wiek << endl;
  }
  plik.close();
}
void wypisz(osoba *osoby, int dlugosc)
{
  for (int i = 0; i < dlugosc; i++)
  {
    cout << "Imie:" << osoby[i].imie << endl;
    cout << "Wiek:" << osoby[i].wiek << endl;
  }
}
void wypiszSzukane(osoba *osoby, int dlugosc)
{
  string podaneImie;
  int podanyWiek;
  cout << "Podaj imie i wiek ktorego szukasz" << endl;
  cin >> podaneImie;
  cin >> podanyWiek;
  for (int i = 0; i < dlugosc; i++)
  {
    if (podaneImie == osoby[i].imie || podanyWiek == osoby[i].wiek)
    {

      cout << "Szukana osoba: " << osoby[i].imie << " " << osoby[i].wiek << endl;
    }
  }
}
int main()
{
  int rozmiar = rozmiarTablicy();

  osoba *tablica = new osoba[rozmiar];
  wypelnij(tablica, rozmiar);
  zapisz(tablica, rozmiar);
  wypisz(tablica, rozmiar);
  wypiszSzukane(tablica, rozmiar);

  return 0;
}