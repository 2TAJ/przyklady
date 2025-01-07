#include <iostream>
using namespace std;

// Abstrakcyjna klasa bazowa
class Figura {
public:
    virtual double obliczPole() const = 0;  // Funkcja czysto wirtualna
    virtual ~Figura() {}  // Wirtualny destruktor
};

// Klasa Prostokąt dziedziczy po klasie Figura
class Prostokąt : public Figura {
private:
    double szerokość;
    double wysokość;

public:
    Prostokąt(double s, double w) : szerokość(s), wysokość(w) {}

    double obliczPole() const override {
        return szerokość * wysokość;
    }
};

// Klasa Koło dziedziczy po klasie Figura
class Koło : public Figura {
private:
    double promień;

public:
    Koło(double r) : promień(r) {}

    double obliczPole() const override {
        return 3.14 * promień * promień;  // M_PI to stała z biblioteki cmath
    }
};

int main() {
    // Tworzenie obiektów na stosie
    Prostokąt prostokątNaStosie(5.0, 3.0);
    Koło kołoNaStosie(4.0);

    // Tworzenie obiektów na stercie
    Figura* figuraNaStercie1 = new Prostokąt(7.0, 2.0);  // Prostokąt na stercie
    Figura* figuraNaStercie2 = new Koło(6.0);             // Koło na stercie

    // Wyświetlanie pól dla obiektów na stosie
    cout << "Pole prostokąta na stosie: " << prostokątNaStosie.obliczPole() << endl;
    cout << "Pole koła na stosie: " << kołoNaStosie.obliczPole() << endl;

    // Wyświetlanie pól dla obiektów na stercie
    cout << "Pole prostokąta na stercie: " << figuraNaStercie1->obliczPole() << endl;
    cout << "Pole koła na stercie: " << figuraNaStercie2->obliczPole() << endl;

    // Usuwanie obiektów na stercie
    delete figuraNaStercie1;
    delete figuraNaStercie2;

    return 0;
}
