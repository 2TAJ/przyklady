/*A. Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena. Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float. Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie. */

#include <iostream>
#include <cmath>
using namespace std;
template <class T, class T2>
class Komorka
{
public:
  Komorka()
  {
    cout << "wywolana kontstruktor bezparametrowy konkretyzacji" << endl;
  }
  Komorka(T pMax, T2 pMin)
  {
    cout << "wywolana kontstruktor parametrowy konkretyzacji" << endl;
    max = pMax;
    min = pMin;
  }
  T max;
  T2 min;
  double srednia()
  {
    return (max + min) / 2;
  }
};
// specjalizacja
template <>
class
    Komorka<float, double>
{
public:
  Komorka()
  {
    cout << "wywolana kontstruktor bezparametrowy specjalizacji" << endl;
  }
  Komorka(float pMax, double pMin)
  {
    cout << "wywolana kontstruktor parametrowy specjalizacji" << endl;
    max = pMax;
    min = pMin;
  }
  float max;
  double min;
  double srednia()
  {
    return (max + min) / 2;
  }
};

int main()
{
  // niejawnie
  Komorka<int, float> komorka1;
  komorka1.max = 2.5;
  komorka1.min = 2.5;
  cout << komorka1.srednia() << endl;
  int max = 2.5;
  float min = 2.5;

  Komorka komorka2(max, min);
  cout << komorka2.srednia() << endl;

  Komorka<float, double> komorka3;
  komorka3.max = 2.5;
  komorka3.min = 2.5;
  cout << komorka3.srednia() << endl;

  float max2 = 2.5;
  double min2 = 2.5;

  Komorka komorka4(max2, min2);
  cout << komorka4.srednia();
  return 0;
}