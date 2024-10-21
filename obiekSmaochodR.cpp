#include <iostream>
#include <string>
using namespace std;

class Samochod {
private:
    string marka, model, numerRejestracyjny;
    int rokProdukcji;
    double cena;

public:
    void wprowadzDane() {
        cout << "Podaj markę: "; cin >> marka;
        cout << "Podaj model: "; cin >> model;
        cout << "Podaj rok produkcji: "; cin >> rokProdukcji;
        cout << "Podaj cenę: "; cin >> cena;
        cout << "Podaj numer rejestracyjny: "; cin >> numerRejestracyjny;
    }

    void wyswietlDane() const {
        cout << "Marka: " << marka << "\nModel: " << model 
             << "\nRok produkcji: " << rokProdukcji 
             << "\nNumer rejestracyjny: " << numerRejestracyjny 
             << "\nCena: " << cena << " PLN" << endl;
    }

    double pobierzCene() const {
        return cena;
    }
};

Samochod* porownajSamochody(Samochod* auto1, Samochod* auto2) {
    return (auto1->pobierzCene() > auto2->pobierzCene()) ? auto1 : auto2;
}

int main() {
    Samochod* auto1 = new Samochod();
    Samochod* auto2 = new Samochod();

    cout << "Wprowadź dane pierwszego samochodu:\n";
    auto1->wprowadzDane();

    cout << "\nWprowadź dane drugiego samochodu:\n";
    auto2->wprowadzDane();

    Samochod* drozszy = porownajSamochody(auto1, auto2);
    cout << "\nDroższy samochód:\n";
    drozszy->wyswietlDane();

    delete auto1;
    delete auto2;

    return 0;
}