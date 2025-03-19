#include <iostream>
#include <cstdlib> // dla rand() i srand()
#include <ctime>   // dla time()

using namespace std;

class WartownikSearch {
private:
    static const int ROZMIAR = 50;
    int tablica[ROZMIAR];

public:
    WartownikSearch() {
        srand(time(0));
        for (int i = 0; i < ROZMIAR; i++) {
            tablica[i] = rand() % 100 + 1; // losowe liczby 1-100
        }
    }

    void wyswietlTablice() {
        cout << "Zawartość tablicy: ";
        for (int i = 0; i < ROZMIAR; i++) {
            cout << tablica[i] << (i < ROZMIAR - 1 ? ", " : "\n");
        }
    }

    /*
************************************************
Nazwa funkcji:          przeszukaj
Opis funkcji:           Przeszukuje tablicę w celu znalezienia indeksu szukanej liczby,
                        wykorzystując metodę z wartownikiem.
Parametry:              szukana - liczba, którą chcemy znaleźć w tablicy
Zwracany typ i opis:    Zwraca indeks znalezionego elementu, jeśli istnieje,
                        lub -1, jeśli element nie został znaleziony
Autor:                  000000000
************************************************
*/

    int przeszukaj(int szukana) {
        int ostatniElement = tablica[ROZMIAR - 1]; // zapamiętanie ostatniego elementu
        tablica[ROZMIAR - 1] = szukana; // ustawienie wartownika

        int indeks = 0;
        while (tablica[indeks] != szukana) {
            indeks++;
        }

        tablica[ROZMIAR - 1] = ostatniElement; // przywrócenie oryginalnej wartości

        if (indeks < ROZMIAR - 1 || tablica[ROZMIAR - 1] == szukana) {
            return indeks;
        } else {
            return -1; // nie znaleziono
        }
    }
};

int main() {
    WartownikSearch wyszukiwacz;
    wyszukiwacz.wyswietlTablice();

    int liczba;
    cout << "Jaką chcesz znaleźć liczbę? ";
    cin >> liczba;

    int wynik = wyszukiwacz.przeszukaj(liczba);

    if (wynik != -1) {
        cout << "Indeks, pod którym odszukano wartość: " << wynik << endl;
    } else {
        cout << "Nie znaleziono szukanego elementu." << endl;
    }

    return 0;
}