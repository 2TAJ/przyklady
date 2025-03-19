#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int ROZMIAR = 50;       // liczba elementów do przeszukania
    int tablica[ROZMIAR + 1];      // dodatkowy element na wartownika
    int szukana;                 // liczba do wyszukania
    
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(NULL));
    
    // Wypełnienie tablicy losowymi liczbami z zakresu 1-100
    for (int i = 0; i < ROZMIAR; i++) {
        tablica[i] = rand() % 100 + 1;
    }
    
    // Pobranie liczby do wyszukania od użytkownika
    cout << "Podaj liczbe do wyszukania: ";
    cin >> szukana;
    
    // Ustawienie wartownika na końcu tablicy
    tablica[ROZMIAR] = szukana;
    
    // Przeszukiwanie tablicy z użyciem wartownika
    int i = 0;
    while (tablica[i] != szukana) {
        i++;
    }
    
    // Wyświetlenie zawartości tablicy
    cout << "\nZawartosc tablicy:" << endl;
    for (int j = 0; j < ROZMIAR; j++) {
        cout << tablica[j] << " ";
    }
    cout << "\n" << endl;
    
    // Sprawdzenie, czy liczba została znaleziona w pierwotnej części tablicy
    if (i == ROZMIAR)
        cout << "Liczba " << szukana << " nie wystepuje w tablicy." << endl;
    else
        cout << "Liczba " << szukana << " znaleziona na pozycji " << i << "." << endl;
    
    return 0;
}
