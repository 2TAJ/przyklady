// Grupa B: Stworz szablon klasy cylinder który zawiera pola height i radius  i metodę objętość. 
// Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla double int, konkretyzację dla float double. 
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.


#include <iostream>
#include <cmath> 
using namespace std;

template <typename T1, typename T2>
class Cylinder {
public:
    T1 height;
    T2 radius;

    Cylinder() {
        cout << "Konstruktor szablonu klasy Cylinder\n";
    }
    int volume() {
        return M_PI * radius * radius * height;
    }
};

template <>
class Cylinder<double, int> {
public:
    double height;
    int radius;

    Cylinder() {
        cout << "Konstruktor specjalizacji double, int\n";
    }

    int volume() {
        cout << "Specjalizacja double, int\n";
        return M_PI * radius * radius * height;
    }
};

int main() {
    Cylinder<float, double> cylinder1;
    cylinder1.height = 4.5f;
    cylinder1.radius = 3.0;
    cout << "Objętość: " << cylinder1.volume() << endl;

    Cylinder<double, int> cylinder2;
    cylinder2.height = 5.5;
    cylinder2.radius = 4;
    cout << "Objętość: " << cylinder2.volume() << endl;

    Cylinder cylinder3 = Cylinder<float, double>();
    cylinder3.height = 3.5f;
    cylinder3.radius = 2.5;
    cout << "Objętość: " << cylinder3.volume() << endl;

    Cylinder cylinder4 = Cylinder<double, int>();
    cylinder4.height = 5.0;
    cylinder4.radius = 5;
    cout << "Objętość: " << cylinder4.volume() << endl;

    return 0;
}