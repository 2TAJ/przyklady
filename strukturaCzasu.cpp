#include <iostream>

using namespace std;

struct Czas
{
  int godziny;
  int minuty;
  int sekundy;
};

int main()
{
  Czas czas;
  czas.godziny = 5;
  czas.minuty = 20;
  czas.sekundy = 30;
  cout << "Wybierz co chcesz dodać: s-sekundy, m-minuty, g-godziny" << endl;
  char typ;
  cin >> typ;
  cout << "Podaj wartość do dodania" << endl;
  int wartosc;
  cin >> wartosc;

  if (wartosc < 0)
  {
    cout << "Błąd wartość nie może być mniejsza niż 0" << endl;
    return 0;
  }

  if (typ == 's')
  {
    czas.sekundy += wartosc;
    int minuty = czas.sekundy / 60;

    if (czas.sekundy > 59)
    {
      czas.minuty += minuty;
      czas.sekundy -= 60 * minuty;
    }

    int godziny = czas.minuty / 60;
    if (czas.minuty > 59)
    {
      czas.godziny += godziny;
      czas.minuty -= 60 * godziny;
    }

    while (czas.godziny >= 24)
    {
      czas.godziny -= 24;
    }
  }
  else if (typ == 'm')
  {
    czas.minuty += wartosc;
    int godziny = czas.minuty / 60;
    if (czas.minuty > 59)
    {
      czas.godziny += godziny;
      czas.minuty -= 60 * godziny;
    }

    while (czas.godziny >= 24)
    {
      czas.godziny -= 24;
    }
  }
  else if (typ == 'g')
  {
    czas.godziny += wartosc;

    while (czas.godziny >= 24)
    {
      czas.godziny -= 24;
    }
  }
  else
  {
    cout << "Niepoprawny typ" << endl;
    return 0;
  }

  cout << "Sekundy:" << czas.sekundy << endl;
  cout << "Minuty:" << czas.minuty << endl;
  cout << "Godziny:" << czas.godziny << endl;
  return 0;
}