#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Funkcja wypełniająca tablicę "sito" zgodnie z algorytmem sita Eratostenesa.
void wypelnijSito(vector<bool>& sito) {
    int n = sito.size() - 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (sito[i])
            for (int j = 2 * i; j <= n; j += i)
                sito[j] = false;
    }
}

int main() {
    const int n = 100;
    vector<bool> sito(n + 1, true); // Indeksy 0..n; liczby 0 i 1 nie są używane.

    wypelnijSito(sito);

    cout << "Liczby pierwsze w przedziale 2.." << n << " to: ";
    for (int i = 2; i <= n; i++) {
        if (sito[i]) {
            cout << ", ";
            cout << i;
        }
    }
    cout << endl;

    return 0;
}
