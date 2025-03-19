#include <iostream>

using namespace std;

// Funkcja obliczająca NWD metodą Euklidesa
int obliczNWD(int a, int b) {
    while (a != b) { // Powtarzamy aż liczby będą równe
        if (a > b) {
            a = a - b; // Odejmujemy mniejszą liczbę od większej
        } else {
            b = b - a;
        }
    }
    return a; // Zwracamy wynik
}

int main() {
    int a, b;

    // Pobranie danych od użytkownika z walidacją
    cout << "Podaj dwie dodatnie liczby calkowite: ";
    cin >> a >> b;

    while (a <= 0 || b <= 0) {
        cout << "Liczby musza byc dodatnie. Podaj jeszcze raz: ";
        cin >> a >> b;
    }

    // Obliczenie i wyświetlenie NWD
    int wynik = obliczNWD(a, b);
    cout << "Najwiekszy wspolny dzielnik (NWD) wynosi: " << wynik << endl;

    return 0;
}
