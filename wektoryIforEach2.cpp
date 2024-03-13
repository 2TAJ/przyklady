#include <iostream>
#include <vector>


using namespace std;

void sortujRosnaco(vector<int>& tablica) {
    int n = tablica.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tablica[j] > tablica[j + 1]) {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }
}

void sortujMalejaco(vector<int>& tablica) {
    int n = tablica.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tablica[j] < tablica[j + 1]) {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }
}

void wypiszTablice(const vector<int>& tablica) {
    for (const auto& liczba : tablica) {
        cout << liczba << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr)); // Inicjalizacja generatora liczb pseudolosowych

    vector<int> tablica;

    // Pytamy użytkownika o wielkość tablicy
    cout << "Podaj wielkosc tablicy: ";
    int wielkosc;
    cin >> wielkosc;

    // Wypełniamy tablicę losowymi liczbami
    for (int i = 0; i < wielkosc; ++i) {
        tablica.push_back(rand() % 100); // Losujemy liczby z zakresu 0-99
    }

    // Pytamy użytkownika o preferencję sortowania
    cout << "Chcesz wyswietlic od najmniejszej (1) czy od najwiekszej (2) liczby? ";
    int wybor;
    cin >> wybor;

    // Sortujemy tablicę
    if (wybor == 1) {
        sortujRosnaco(tablica);
    } else if (wybor == 2) {
        sortujMalejaco(tablica);
    } else {
        cout << "Nieprawidlowy wybor." << endl;
        return 1;
    }

    // Wypisujemy posortowaną tablicę za pomocą pętli forEach
    cout << "Posortowana tablica: ";
    for (const auto& liczba : tablica) {
        cout << liczba << " ";
    }
    cout << endl;

    return 0;
}