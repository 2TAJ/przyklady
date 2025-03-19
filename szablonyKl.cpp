// Grupa B: Stworz szablon klasy cylinder który zawiera pola height i radius  i metodę objętość.
// Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla double int, konkretyzację dla float double.
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.

#include <iostream>
using namespace std;

template <class T1, class T2>
class Cylinder
{

public:
    T1 height;
    T2 radius;
    Cylinder(T1 h, T2 r) : height(h), radius(r) {}
    double objetosc()
    {
        return 3.14159 * radius * radius * height;
    }
};

template <>
class Cylinder<double, int>
{

public:
    double height;
    int radius;
    Cylinder(double h, int r)
    {
        height = h;
        radius = r;
    }
    double objetosc()
    {
        return 3.14159 * radius * radius * height;
    }
};

int main()
{

    Cylinder<float, double> cylinder1(9.3f, 8.1);
    cout << "Objetość float, double: " << cylinder1.objetosc() << endl;

    Cylinder cylinder2(89.5, 1);
    cout << "Objetość double, int: " << cylinder2.objetosc() << endl;

    return 0;
}