#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
************************************************
Nazwa funkcji:          losuj_liczby
Opis funkcji:           Losuje wyniki rzutów kostkami
Parametry:              ile_razy - ilość rzutów kostkami podana przez użytkownika
Zwracany typ i opis:    Zwraca wektor liczb z zakresu 1-6
Autor:                  000000000
************************************************
*/
vector<int> losuj_liczby(int ile_razy) {
    vector<int> rzuty;
    for (int i = 0; i < ile_razy; i++) {
        rzuty.push_back(rand() % 6 + 1); // Losowanie liczby 1-6
    }
    return rzuty;
}

/*
************************************************
Nazwa funkcji:          policz_punkty
Opis funkcji:           Zlicza punkty według podanych zasad
Parametry:              rzuty - wektor liczb uzyskanych podczas rzutów kostkami
Zwracany typ i opis:    Zwraca liczbę uzyskanych punktów
Autor:                  000000000
************************************************
*/
int policz_punkty(const vector<int>& rzuty) {
    int liczba[7] = {0}; // Tablica liczników wyników (0-6, nie będziemy używać indexu 0)

    // Zliczanie liczby wystąpień każdego wyniku
    for (int i = 0; i < rzuty.size(); i++) {
        liczba[rzuty[i]]++;
    }

    int punkty = 0;
    // Dodawanie punktów na podstawie liczby wystąpień
    for (int i = 1; i <= 6; i++) {
        if (liczba[i] >= 2) {
            punkty += i * liczba[i];
        }
    }

    return punkty;
}

int main() {
    srand(time(0)); // Inicjalizacja generatora liczb losowych

    while (true) {
        int ile_razy;
        
        // Pobieranie liczby kostek w zakresie 3-10
        cout << "Ile kostek chcesz rzucić? (3-10): ";
        cin >> ile_razy;

        // Sprawdzanie poprawności wprowadzonej liczby
        if (ile_razy < 3 || ile_razy > 10) {
            cout << "Błąd! Podaj liczbę z przedziału 3-10.\n";
            continue;
        }

        vector<int> rzuty = losuj_liczby(ile_razy);

        // Wyświetlanie wyników rzutów
        for (int i = 0; i < rzuty.size(); i++) {
            cout << "Kostka " << i + 1 << ": " << rzuty[i] << endl;
        }

        int punkty = policz_punkty(rzuty);
        cout << "Liczba uzyskanych punktów: " << punkty << endl;

        // Pytanie o ponowną grę
        char odpowiedz;
        cout << "Jeszcze raz? (t/n): ";
        cin >> odpowiedz;

        if (odpowiedz == 'n') {
            cout << "Dziękujemy za grę!" << endl;
            break;
        } else if (odpowiedz != 't') {
            cout << "Błędna odpowiedź! Wpisz 't' lub 'n'.\n";
        }
    }

    return 0;
}