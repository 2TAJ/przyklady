#include <iostream>
#include <string>

class Osoba {
private:
    int id;
    std::string imie;
    static int liczbaInstancji;

public:
    // Konstruktor bezparametrowy
    Osoba() : id(1), imie("bob") { liczbaInstancji++; }

    // Konstruktor z parametrami
    Osoba(int _id, std::string _imie) : id(_id), imie(_imie) { liczbaInstancji++; }

    // Konstruktor kopiujący
    Osoba(const Osoba &o) : id(o.id), imie(o.imie) { liczbaInstancji++; }

    // Metoda do wyświetlania imienia
    void przedstawSie(std::string argument) {
        if (imie == "bob")
            std::cout << "Jestem Bobem" << std::endl;
        else
            std::cout << "Cześć " << argument << ", mam na imię " << imie << std::endl;
    }

    // Metoda sprawdzająca wielkość liter w imieniu
    void poprawImie() {
        if (!imie.empty() && islower(imie[0])) {
            imie[0] = toupper(imie[0]);
        }
    }

    // Metoda do zwrócenia liczby instancji
    static int getLiczbaInstancji() {
        return liczbaInstancji;
    }
};

// Inicjalizacja statycznej zmiennej
int Osoba::liczbaInstancji = 0;

int main() {
    Osoba o1;
    Osoba o2(2, "adam");
    Osoba o3 = o2;

    o1.przedstawSie("Marek");
    o2.przedstawSie("Kamil");

    o2.poprawImie();
    o2.przedstawSie("Kamil");

    std::cout << "Liczba instancji: " << Osoba::getLiczbaInstancji() << std::endl;

    return 0;
}