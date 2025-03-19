// Gr A
// Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena.
//  Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float.
//   Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.

#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Komorka
{
public:
    Komorka()
    {
        cout << "konkretyzacja: ";
    }
    T1 cenaMax;
    T2 cenaMin;
    T1 sredniaCena()
    {
        return (cenaMax + cenaMin) / 2;
    }
};
// specjalizowanie
template <>
class
    Komorka<float, double>
{
public:
    Komorka()
    {
        cout << "specializacja: ";
    }
    float cenaMax;
    double cenaMin;
    float sredniaCena()
    {
        return (cenaMax + cenaMin) / 2;
    }
};
int main()
{
    float max = 100.5;
    float min = 50.5;

    // spec
    Komorka komorka1 = Komorka<float, double>();
    komorka1.cenaMax = max;
    komorka1.cenaMin = min;
    cout << "srednia cena " << komorka1.sredniaCena() << endl;
    Komorka<float, double> komorka2;
    komorka2.cenaMax = max;
    komorka2.cenaMin = min;
    cout << "srednia cena " << komorka2.sredniaCena() << endl;

    // konk
    Komorka komorka3 = Komorka<int, float>();
    komorka3.cenaMax = 400;
    komorka3.cenaMin = min;
    cout << "srednia cena " << komorka3.sredniaCena() << endl;
    Komorka<int, float> komorka4;
    komorka4.cenaMax = 400;
    komorka4.cenaMin = min;
    cout << "srednia cena " << komorka4.sredniaCena() << endl;
    return 0;
}
