#include <iostream>
#include <string>

using namespace std;

class Osoba {
private:
    int id;
    string imie;

public:
    static int LiczbaInstancji;

    /********************************************************
    * nazwa funkcji: Osoba (konstruktor bezparametrowy)
    * parametry wejściowe: brak
    * wartość zwracana: brak
    * autor: EE-Informatyk.pl
    * ****************************************************/
    Osoba() {
        id = 0;
        imie = "";
        LiczbaInstancji++;
    }

    /********************************************************
    * nazwa funkcji: Osoba (konstruktor z parametrami)
    * parametry wejściowe: id - identyfikator osoby, imie - imię osoby
    * wartość zwracana: brak
    * autor: EE-Informatyk.pl
    * ****************************************************/
    Osoba(int id, string imie) {
        this->id = id;
        this->imie = imie;
        LiczbaInstancji++;
    }

    /********************************************************
    * nazwa funkcji: Osoba (konstruktor kopiujący)
    * parametry wejściowe: osoba - obiekt klasy Osoba
    * wartość zwracana: brak
    * autor: EE-Informatyk.pl
    * ****************************************************/
    Osoba(const Osoba& osoba) {
        id = osoba.id;
        imie = osoba.imie;
        LiczbaInstancji++;
    }

    /********************************************************
    * nazwa funkcji: Powitanie
    * parametry wejściowe: argument - imię osoby, która wita
    * wartość zwracana: brak
    * autor: EE-Informatyk.pl
    * ****************************************************/
    void Powitanie(const string& argument) const {
        if (imie.empty()) {
            cout << "Brak danych" << endl;
        }
        else {
            cout << "Czesc " << argument << ", mam na imie " << imie << endl;
        }
    }
};

int Osoba::LiczbaInstancji = 0;