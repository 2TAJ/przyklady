// #include <iostream>
// #include <string>

// using namespace std;

// class Osoba {
// private:
//     int id;
//     string imie;
//     static int liczbaInstancji; // Statyczne pole zliczające instancje

// protected:
//     Osoba(int _id, string _imie) : id(_id), imie(_imie) {
//         liczbaInstancji++;
//     }

// public:
//     // Konstruktor bezparametrowy
//     Osoba() : id(0), imie("") {
//         liczbaInstancji++;
//     }

//     // Konstruktor z parametrami
//     Osoba(int _id, string _imie) : id(_id), imie(_imie) {
//         liczbaInstancji++;
//     }

//     // Konstruktor kopiujący
//     Osoba(const Osoba &osoba) : id(osoba.id), imie(osoba.imie) {
//         liczbaInstancji++;
//     }

//     // Metoda wypisująca imię
//     void wypiszImie() const {
//         cout << "Czesc " << imie << "!" << endl;
//     }

//     // Metoda zwracająca liczbę instancji
//     static int getLiczbaInstancji() {
//         return liczbaInstancji;
//     }
// };

// // Inicjalizacja pola statycznego
// int Osoba::liczbaInstancji = 0;

// int main() {
//     Osoba o1;
//     Osoba o2(1, "Jan");
//     Osoba o3 = o2; // Konstruktor kopiujący

//     o1.wypiszImie();
//     o2.wypiszImie();
//     o3.wypiszImie();

//     cout << "Liczba instancji: " << Osoba::getLiczbaInstancji() << endl;

//     return 0;
// }