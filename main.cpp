#include <iostream>
#include <string>
#include "operacje.h"
using namespace std;

int main()

  {
  cout << "Kliknij d jesli chcesz dodac osobe, m jesli chcesz zmodyfikowac, u jesli chcesz usunac, s jesli chcesz posortowac, p jesli chcesz przeszukac baze:" << endl;
  char operacja;
  cin >> operacja;

  if (operacja == 'd')
  {
    dodajOsobe();
  }
  else if (operacja == 'm')
  {
    zmodyfikujOsobe();
  }
  else if (operacja == 'u')
  {
    usunOsobe();
  }
  else if (operacja == 's')
  {
    sortuj();
  }
  else if (operacja == 'p')
  {
    przeszukaj();
  }
  else
  {
    cout << "Nieznana operacja" << endl;
  }
  return 0;
}