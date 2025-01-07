#include <iostream>
using namespace std;

// Klasa abstrakcyjna
class Zwierze {
public:
    virtual void dzwiek()  = 0; // Metoda czysto wirtualna
};

// Klasa dziedzicząca Pies
class Pies : public Zwierze {
public:
    void dzwiek() {
        cout << "Hau Hau!" << endl;
    }
};

// Klasa dziedzicząca Kot
class Kot : public Zwierze {
public:
    void dzwiek()  {
        cout << "Miau Miau!" << endl;
    }
};

// Funkcja wykorzystująca polimorfizm
void wydajDzwiek( Zwierze* zwierze) {
    zwierze->dzwiek();
}

int main() {
    Pies pies;
    Kot kot;

    // Wywołanie metod dzwiek
    wydajDzwiek(&pies); // powinno wyświetlić: Hau Hau!
    wydajDzwiek(&kot);  // powinno wyświetlić: Miau Miau!

    return 0;
}