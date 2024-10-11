#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik {
public:
string imie;
string nazwisko;
void wyswietlDane() {
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
}
};
// Prototypy funkcji zewnętrznych:
Pracownik *pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);
// PROGRAM GŁÓWNY
int main() {
// Utworzenie obiektu wskazywanego przez wskaźnik w_pracownik jako instancji klasy Pracownik:
Pracownik *w_pracownik = new Pracownik();
// Pobranie danych pracownika z klawiatury:
w_pracownik = pobierzDane(w_pracownik);
// Prezentacja danych pracownika na ekranie monitora:
wyswietlDane(w_pracownik);
// Usunięcie obiektu wskazywanego przez wskaźnik w_pracownik:
delete w_pracownik;
return 0;
}
// Definicje funkcji zewnętrznych:
Pracownik* pobierzDane(Pracownik *w_p) {
cout << "Imię = "; cin >> w_p->imie;
cout << "Nazwisko = "; cin >> w_p->nazwisko;
return w_p;
}
void wyswietlDane(const Pracownik *w_p) {
cout << "Imię: " << w_p->imie << endl;
cout << "Nazwisko: " << w_p->nazwisko << endl;
}