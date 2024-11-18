// #include <iostream>
// using namespace std;
// // Definicja klasy bazowej Pracownik:
// class Pracownik {
// private:
// // Definicje prywatnych zmiennych członkowskich:
// string imie {};
// string nazwisko {};
// public:
// // Definicje publicznych setterów:
// void setImie(string pImie) {
// imie = pImie;
// }
// void setNazwisko(string pNazwisko) {
// nazwisko = pNazwisko;
// }
// // Definicje publicznych getterów:
// string getImie() {
// return imie;
// }
// string getNazwisko() {
// return nazwisko;
// }
// // Definicja publicznej funkcji członkowskiej:
// string zwrocDane() {
// return imie + " " + nazwisko;
// }
// };
// // Definicja klasy pochodnej Nauczyciel:
// class Nauczyciel: public Pracownik { // dziedziczenie publiczne
// private:
// // Definicja zmiennej członkowskiej:
// string przedmiot {""};
// public:
// // Definicja settera:
// void setPrzedmiot(string pPrzedmiot) {
// przedmiot = pPrzedmiot;
// }
// // Definicja gettera:
// string getPrzedmiot() {
// return przedmiot;
// }
// // Definicja funkcji członkowskiej:
// string zwrocDane() {
// return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
// }
// /* UWAGA
// * Dostęp do prywatnych zmiennych członkowskich imie i nazwisko należących do klasy bazowej
// * uzyskano za pomocą publicznych metod dostępowych — setterów i getterów,
// * które również zostały zdefiniowane w tej klasie.
// */
// };
// int main() {
// // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
// Nauczyciel nauczyciel;
// // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
// nauczyciel.setImie("Jan");
// nauczyciel.setNazwisko("Kowalski");
// nauczyciel.setPrzedmiot("elektronika");
// /* UWAGA
// * Prywatne zmienne członkowskie imie i nazwisko należące do klasy bazowej Pracownik nie są dziedziczone
// * do klasy pochodnej Nauczyciel. Dostęp do tych zmiennych członkowskich z poziomu klasy Nauczyciel
// * uzyskano przez wykorzystanie publicznych metod dostępowych (setterów) zdefiniowanych w klasie Pracownik,
// * które podlegają dziedziczeniu. Dostęp do prywatnej zmiennej członkowskiej przedmiot zdefiniowanej
// * w klasie Nauczyciel uzyskano w analogiczny sposób.
// */
// // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
// cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// // Definicja klasy bazowej Pracownik:
// class Pracownik {
// protected:
// // Definicje prywatnych zmiennych członkowskich:
// string imie {};
// string nazwisko {};
// public:
// // // Definicje publicznych setterów:
// // void setImie(string pImie) {
// // imie = pImie;
// // }
// // void setNazwisko(string pNazwisko) {
// // nazwisko = pNazwisko;
// // }
// // // Definicje publicznych getterów:
// // string getImie() {
// // return imie;
// // }
// // string getNazwisko() {
// // return nazwisko;
// // }
// // Definicja publicznej funkcji członkowskiej:
// string zwrocDane() {
// return imie + " " + nazwisko;
// }
// };
// // Definicja klasy pochodnej Nauczyciel:
// class Nauczyciel: public Pracownik { // dziedziczenie publiczne
// private:
// // Definicja zmiennej członkowskiej:
// string przedmiot {""};
// public:
// // Definicja settera:
// void setPrzedmiot(string pPrzedmiot) {
// przedmiot = pPrzedmiot;
// }
// // Definicja gettera:
// string getPrzedmiot() {
// return przedmiot;
// }
// // Definicja funkcji członkowskiej:
// string zwrocDane() {
// return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
// }
// /* UWAGA
// * Dostęp do prywatnych zmiennych członkowskich imie i nazwisko należących do klasy bazowej
// * uzyskano za pomocą publicznych metod dostępowych — setterów i getterów,
// * które również zostały zdefiniowane w tej klasie.
// */
// void setImie(string pImie) {
// imie = pImie;
// }
// void setNazwisko(string pNazwisko) {
// nazwisko = pNazwisko;
// }
// // Definicje publicznych getterów:
// string getImie() {
// return imie;
// }
// string getNazwisko() {
// return nazwisko;
// }
// };
// int main() {
// // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
// Nauczyciel nauczyciel;
// // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
// // nauczyciel.imie=Jan tak nie mogę bo imie protected zostało protected.
// nauczyciel.setImie("Jan");
// nauczyciel.setNazwisko("Kowalski");
// nauczyciel.setPrzedmiot("elektronika");
// /* UWAGA
// * Prywatne zmienne członkowskie imie i nazwisko należące do klasy bazowej Pracownik nie są dziedziczone
// * do klasy pochodnej Nauczyciel. Dostęp do tych zmiennych członkowskich z poziomu klasy Nauczyciel
// * uzyskano przez wykorzystanie publicznych metod dostępowych (setterów) zdefiniowanych w klasie Pracownik,
// * które podlegają dziedziczeniu. Dostęp do prywatnej zmiennej członkowskiej przedmiot zdefiniowanej
// * w klasie Nauczyciel uzyskano w analogiczny sposób.
// */
// // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
// cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// // Definicja klasy bazowej Pracownik:
// class Pracownik {
// public:
// // Definicje prywatnych zmiennych członkowskich:
// string imie {};
// string nazwisko {};
// public:
// // // Definicje publicznych setterów:
// void setImie(string pImie) {
// imie = pImie;
// }
// void setNazwisko(string pNazwisko) {
// nazwisko = pNazwisko;
// }
// // Definicje publicznych getterów:
// string getImie() {
// return imie;
// }
// string getNazwisko() {
// return nazwisko;
// }
// // Definicja publicznej funkcji członkowskiej:
// string zwrocDane() {
// return imie + " " + nazwisko;
// }
// };
// // Definicja klasy pochodnej Nauczyciel:
// class Nauczyciel: protected Pracownik { // dziedziczenie publiczne
// private:
// // Definicja zmiennej członkowskiej:
// string przedmiot {""};
// public:
// // Definicja settera:
// void setPrzedmiot(string pPrzedmiot) {
// przedmiot = pPrzedmiot;
// }
// // Definicja gettera:
// string getPrzedmiot() {
// return przedmiot;
// }
// // Definicja funkcji członkowskiej:
// string zwrocDane() {
// return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
// }
// void setImie(string pImie) {
// imie = pImie;
// }           //muszom byc bo te odziedziczone sa protected
// void setNazwisko(string pNazwisko) {
// nazwisko = pNazwisko;
// }
// // Definicje publicznych getterów:
// string getImie() {
// return imie;
// }
// string getNazwisko() {
// return nazwisko;
// }
// /* UWAGA
// * Dostęp do prywatnych zmiennych członkowskich imie i nazwisko należących do klasy bazowej
// * uzyskano za pomocą publicznych metod dostępowych — setterów i getterów,
// * które również zostały zdefiniowane w tej klasie.
// */
// };
// int main() {
// // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
// Nauczyciel nauczyciel;
// // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
// // nauczyciel.imie=Jan tak nie mogę bo imie protected zostało protected.
// nauczyciel.setImie("Jan");
// nauczyciel.setNazwisko("Kowalski");
// nauczyciel.setPrzedmiot("elektronika");
// /* UWAGA
// * Prywatne zmienne członkowskie imie i nazwisko należące do klasy bazowej Pracownik nie są dziedziczone
// * do klasy pochodnej Nauczyciel. Dostęp do tych zmiennych członkowskich z poziomu klasy Nauczyciel
// * uzyskano przez wykorzystanie publicznych metod dostępowych (setterów) zdefiniowanych w klasie Pracownik,
// * które podlegają dziedziczeniu. Dostęp do prywatnej zmiennej członkowskiej przedmiot zdefiniowanej
// * w klasie Nauczyciel uzyskano w analogiczny sposób.
// */
// // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
// cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// // Definicja klasy bazowej Pracownik:
// class Pracownik {
// private:
// // Definicje prywatnych zmiennych członkowskich:
// string imie {};
// string nazwisko {};
// public:
// // // Definicje publicznych setterów:
// void setImie(string pImie) {
// imie = pImie;
// }
// void setNazwisko(string pNazwisko) {
// nazwisko = pNazwisko;
// }
// // Definicje publicznych getterów:
// string getImie() {
// return imie;
// }
// string getNazwisko() {
// return nazwisko;
// }
// // Definicja publicznej funkcji członkowskiej:
// string zwrocDane() {
// return imie + " " + nazwisko;
// }
// };
// // Definicja klasy pochodnej Nauczyciel:
// class Nauczyciel: private Pracownik { // dziedziczenie publiczne
// private:
// // Definicja zmiennej członkowskiej:
// string przedmiot {""};
// public:
// // Definicja settera:
// void setPrzedmiot(string pPrzedmiot) {
// przedmiot = pPrzedmiot;
// }
// // Definicja gettera:
// string getPrzedmiot() {
// return przedmiot;
// }
// // Definicja funkcji członkowskiej:
// string zwrocDane() {
// return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
// }
// void setImie(string pImie) {
// setImie(pImie);
// }           //muszom byc bo te odziedziczone sa private
// void setNazwisko(string pNazwisko) {//to jest definicja publiczbego setera klasy nauczyciel
// setNazwisko(pNazwisko);//to jest odziedziczony seter który jest publiczny w klasie bazowej, ale prywatny w klasie pochodnej.
// }
// // Definicje publicznych getterów:
// string getImie() {
// return getImie();
// }
// string getNazwisko() {
// return getNazwisko();
// }
// /* UWAGA
// * Dostęp do prywatnych zmiennych członkowskich imie i nazwisko należących do klasy bazowej
// * uzyskano za pomocą publicznych metod dostępowych — setterów i getterów,
// * które również zostały zdefiniowane w tej klasie.
// */
// };
// int main() {
// // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
// Nauczyciel nauczyciel;
// // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
// // nauczyciel.imie=Jan tak nie mogę bo imie protected zostało protected.
// nauczyciel.setImie("Jan");
// nauczyciel.setNazwisko("Kowalski");
// nauczyciel.setPrzedmiot("elektronika");
// /* UWAGA
// * Prywatne zmienne członkowskie imie i nazwisko należące do klasy bazowej Pracownik nie są dziedziczone
// * do klasy pochodnej Nauczyciel. Dostęp do tych zmiennych członkowskich z poziomu klasy Nauczyciel
// * uzyskano przez wykorzystanie publicznych metod dostępowych (setterów) zdefiniowanych w klasie Pracownik,
// * które podlegają dziedziczeniu. Dostęp do prywatnej zmiennej członkowskiej przedmiot zdefiniowanej
// * w klasie Nauczyciel uzyskano w analogiczny sposób.
// */
// // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
// cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
// return 0;
// }