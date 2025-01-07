// #include <iostream>
// #include <string>
// #include <cctype>  // Dla funkcji toupper

// using namespace std;

// class Ksiazka
// {
// private:
//     string tytul;
//     string autor;
//     int rokWydania;

// public:
//     static int liczbaKsiazek;

//     // Konstruktor bezparametrowy, delegowany do konstruktoru parametrycznego
//     Ksiazka() : Ksiazka("", "", 0) {}

//     // Konstruktor parametryczny z listą inicjalizacyjną
//     Ksiazka(string pTytul, string pAutor, int pRokWydania) 
//         : tytul(pTytul), autor(pAutor), rokWydania(pRokWydania) 
//     {
//         liczbaKsiazek++;
//     }

//     // Konstruktor kopiujący
//     Ksiazka(const Ksiazka &inna) 
//         : tytul(inna.tytul), autor(inna.autor), rokWydania(inna.rokWydania) 
//     {
//         liczbaKsiazek++;
//     }

//     // Settery
//     void setTytul(string pTytul) { tytul = pTytul; }
//     void setAutor(string pAutor) { autor = pAutor; }
//     void setRokWydania(int pRokWydania) { rokWydania = pRokWydania; }

//     // Gettery
//     string getTytul() { return tytul; }
//     string getAutor() { return autor; }
//     int getRokWydania() { return rokWydania; }

//     // Funkcja wypisująca informacje o książce
//     void wypiszInformacje() const {
//         cout << "Książka: " << tytul << ", Autor: " << autor << ", Rok wydania: " << rokWydania << endl;
//     }

//     // Funkcja statyczna zmieniająca autora na wielkie litery
//     static Ksiazka naWielkie(const Ksiazka &ksiazka) {
//         // Tworzymy kopię książki
//         Ksiazka nowaKsiazka = ksiazka;
        
//         // Alternatywny sposób zmiany liter na wielkie
//         for (int i = 0; i < nowaKsiazka.autor.length(); ++i) {
//             nowaKsiazka.autor[i] = toupper(nowaKsiazka.autor[i]); // Zamienia literę na wielką
//         }
        
//         return nowaKsiazka;
//     }
// };

// // Inicjalizacja pola statycznego
// int Ksiazka::liczbaKsiazek = 0;

// int main()
// {
//     // Tworzenie obiektów książek
//     Ksiazka ksiazka;
//     Ksiazka ksiazka1("Dziady", "Adam Mickiewicz", 1410);
//     Ksiazka ksiazka2 = ksiazka1; // Konstruktor kopiujący
//     Ksiazka ksiazka3(ksiazka1);  // Konstruktor kopiujący
//     ksiazka2.setTytul("Pan Tadeusz");

//     // Wypisanie informacji o książkach
//     ksiazka.wypiszInformacje();
//     ksiazka1.wypiszInformacje();
//     ksiazka2.wypiszInformacje();
//     ksiazka3.wypiszInformacje();

//     // Zastosowanie funkcji zmieniającej autora na wielkie litery
//     Ksiazka ksiazkaWielkie = Ksiazka::naWielkie(ksiazka1);
//     ksiazkaWielkie.wypiszInformacje();

//     // Wyświetlenie liczby książek
//     cout << "Liczba książek: " << Ksiazka::liczbaKsiazek << endl;

//     return 0;
// }






// #include <iostream>
// #include <string>

// using namespace std;

// class Film {
// private:
//     string tytul;
//     string rezyser;
//     int rokWydania;

// public:
//     static int liczbaFilmow; // Pole statyczne zliczające liczbę filmów

//     // Settery i gettery dla pól prywatnych
//     void setTytul(string pTytul) { tytul = pTytul; }
//     string getTytul() { return tytul; }

//     void setRezyser(string pRezyser) { rezyser = pRezyser; }
//     string getRezyser() { return rezyser; }

//     void setRokWydania(int pRokWydania) { rokWydania = pRokWydania; }
//     int getRokWydania() { return rokWydania; }

//     // Metoda wypisująca informację o filmie
//     void wypiszInformacje() const {
//         cout << "Tytuł: " << tytul << ", Reżyser: " << rezyser << ", Rok wydania: " << rokWydania << endl;
//     }

//     // Konstruktor bezparametrowy delegowany do parametrycznego
//     Film() : Film("", "", 0) {}

//     // Konstruktor parametryczny z listą inicjalizacyjną
//     Film(string pTytul, string pRezyser, int pRokWydania)
//         : tytul(pTytul), rezyser(pRezyser), rokWydania(pRokWydania) {
//         liczbaFilmow++;
//     }

//     // Konstruktor kopiujący
//     Film(const Film &innyFilm)
//         : tytul(innyFilm.tytul), rezyser(innyFilm.rezyser), rokWydania(innyFilm.rokWydania) {
//         liczbaFilmow++;
//     }

//     // Funkcja statyczna, która zwraca liczbę filmów
//     static int getLiczbaFilmow() {
//         return liczbaFilmow;
//     }

//     // Funkcja zmieniająca rok wydania filmu
//     static Film zmienRokWydania(const Film& film) {
//         return Film(film.tytul, film.rezyser, film.rokWydania - 199);
//     }
// };

// // Inicjalizacja pola statycznego
// int Film::liczbaFilmow = 0;

// int main() {
//     // Tworzenie obiektu filmu
//     Film film1("Incepcja", "Christopher Nolan", 2010);
//     film1.wypiszInformacje();

//     // Tworzenie obiektu kopiującego
//     Film film2(film1);
//     film2.wypiszInformacje();

//     // Zmiana roku wydania w nowym obiekcie
//     Film filmZmodyfikowany = Film::zmienRokWydania(film1);
//     filmZmodyfikowany.wypiszInformacje();

//     // Wyświetlenie liczby filmów
//     cout << "Liczba filmów: " << Film::getLiczbaFilmow() << endl;

//     return 0;
// }