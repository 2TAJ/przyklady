#include <cmath>
#include <iostream>
using namespace std;
int main()
{

  int liczba, i;

  cout << "Podaj liczbe: ";

  cin >> liczba;

  for (i = 2; i < sqrt(liczba); i++)
  {

    if (liczba % i == 0)
    {
      cout << "liczba nie jest pierwsza" << endl;
      i = (int)(sqrt(liczba) + 4);
    };
  }
  if (i != (int)(sqrt(liczba) + 5))
    cout << "Liczba jest piersza";

  return 0;
}