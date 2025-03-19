#include <iostream>
#include <string>

using namespace std;

// Funkcja określająca płeć na podstawie numeru PESEL
char okreslPlec(const string &pesel) {
    int cyfraPlec = pesel[9] - '0'; // Pobranie 10. cyfry
    return (cyfraPlec % 2 == 0) ? 'K' : 'M'; // Parzysta - kobieta, nieparzysta - mężczyzna
}

// Funkcja sprawdzająca poprawność sumy kontrolnej numeru PESEL
bool sprawdzSumeKontrolna(const string &pesel) {
    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3}; // Wagi dla pierwszych 10 cyfr
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        suma += (pesel[i] - '0') * wagi[i]; // Obliczanie sumy ważonej
    }

    int M = suma % 10; // Obliczenie M
    int R = (M == 0) ? 0 : (10 - M); // Obliczenie R

    return (R == pesel[10] - '0'); // Porównanie z 11. cyfrą PESEL
}

int main() {
    string pesel = "55030101193"; // Domyślny numer PESEL

    // Pobranie numeru PESEL od użytkownika
    cout << "Podaj numer PESEL (11 cyfr) lub nacisnij Enter, aby użyć domyślnego (" << pesel << "): ";
    string input;
    getline(cin, input);
    if (!input.empty()) {
        pesel = input;
    }

    // Sprawdzenie poprawności długości numeru PESEL
    while (pesel.length() != 11) {
        cout << "Niepoprawna dlugosc! Podaj numer PESEL jeszcze raz: ";
        cin >> pesel;
    }

    // Określenie płci
    char plec = okreslPlec(pesel);
    cout << "Plec: " << (plec == 'K' ? "Kobieta" : "Mezczyzna") << endl;

    // Sprawdzenie poprawności numeru PESEL
    if (sprawdzSumeKontrolna(pesel)) {
        cout << "Numer PESEL jest poprawny." << endl;
    } else {
        cout << "Numer PESEL jest niepoprawny." << endl;
    }

    return 0;
}
