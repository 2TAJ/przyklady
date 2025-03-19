/******************************************************
 nazwa klasy: Film
 pola: tytul - przechowuje tytuł filmu
       liczbaWypozyczen - przechowuje liczbę wypożyczeń filmu
 metody: setTytul(string nowyTytul), void – ustawia tytuł filmu
         getTytul(), string – zwraca tytuł filmu
         getLiczbaWypozyczen(), int – zwraca liczbę wypożyczeń
         inkrementujLiczbaWypozyczen(), void – inkrementuje liczbę wypożyczeń
 informacje: Klasa reprezentuje film w systemie wirtualnej wypożyczalni
 autor: EE-Informatyk.pl
*****************************************************/

#include <iostream>
#include <string>
using namespace std;

class Film {
private:
    string tytul;
    int liczbaWypozyczen;

protected:
    string getTytulProtected() const { return tytul; }
    int getLiczbaWypozyczenProtected() const { return liczbaWypozyczen; }

public:
    Film() : tytul(""), liczbaWypozyczen(0) {}

    void setTytul(const string& nowyTytul) {
        if (nowyTytul.length() <= 20) {
            tytul = nowyTytul;
        }
        else {
            throw invalid_argument("Tytuł może mieć maksymalnie 20 znaków.");
        }
    }

    string getTytul() const {
        return tytul;
    }

    int getLiczbaWypozyczen() const {
        return liczbaWypozyczen;
    }

    void inkrementujLiczbaWypozyczen() {
        liczbaWypozyczen++;
    }
};

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Film film;

    cout << "Początkowy tytuł: " << film.getTytul() << endl;
    cout << "Początkowa liczba wypożyczeń: " << film.getLiczbaWypozyczen() << endl;

    try {
        film.setTytul("Incepcja");
        cout << "Tytuł po ustawieniu: " << film.getTytul() << endl;
    }
    catch (const exception& e) {
        cerr << "Błąd: " << e.what() << endl;
    }

    cout << "Liczba wypożyczeń: " << film.getLiczbaWypozyczen() << endl;

    cout << "Liczba wypożyczeń przed inkrementacją: " << film.getLiczbaWypozyczen() << endl;
    film.inkrementujLiczbaWypozyczen();
    cout << "Liczba wypożyczeń po inkrementacji: " << film.getLiczbaWypozyczen() << endl;

    return 0;
}