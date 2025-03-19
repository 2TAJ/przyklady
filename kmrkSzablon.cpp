#include <iostream>
using namespace std;

// Definicja szablonu klasy Komorka
template <typename T1, typename T2>
class Komorka {
public:
    T1 cenaMaksymalna;
    T2 cenaMinimalna;

    // Konstruktor
    Komorka() {
        cout << "Konstruktor szablonu klasy Komorka\n";
    }

    // Metoda obliczająca średnią cenę
    auto sredniaCena() {
        return (cenaMaksymalna + cenaMinimalna) / 2.0;
    }
};

// Specjalizacja dla typów float i double
template <>
class Komorka<float, double> {
public:
    float cenaMaksymalna;
    double cenaMinimalna;

    // Konstruktor
    Komorka() {
        cout << "Konstruktor klasy specjalizowanej dla float, double\n";
    }

    // Metoda obliczająca średnią cenę
    auto sredniaCena() {
        cout << "Specjalizacja dla float, double\n";
        return (cenaMaksymalna + cenaMinimalna) / 2.0;
    }
};

int main() {
    // Konkretyzacja jawna dla int, float
    Komorka<int, float> komorka1;
    komorka1.cenaMaksymalna = 300;
    komorka1.cenaMinimalna = 200.5;
    cout << "Średnia cena: " << komorka1.sredniaCena() << endl;

    // Specjalizacja jawna dla float, double
    Komorka<float, double> komorka2;
    komorka2.cenaMaksymalna = 299.99f;
    komorka2.cenaMinimalna = 199.99;
    cout << "Średnia cena: " << komorka2.sredniaCena() << endl;

    // Konkretyzacja niejawna dla int, float
    Komorka komorka3 = Komorka<int, float>();
    komorka3.cenaMaksymalna = 400;
    komorka3.cenaMinimalna = 300.5;
    cout << "Średnia cena: " << komorka3.sredniaCena() << endl;

    // Specjalizacja niejawna dla float, double
    Komorka komorka4 = Komorka<float, double>();
    komorka4.cenaMaksymalna = 499.99f;
    komorka4.cenaMinimalna = 399.99;
    cout << "Średnia cena: " << komorka4.sredniaCena() << endl;

    return 0;
}