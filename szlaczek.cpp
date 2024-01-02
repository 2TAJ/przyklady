
#include <iostream>
using namespace std;

void szlaczek(char znak, int liczba) {
    for (int x = 0; x < liczba; x++) {
        cout << znak;
    }
}

int main() {
    char znak;
    int liczba;

    cout << "Podaj znak: ";
    cin >> znak;

    cout << "Podaj liczbe powtorzen: ";
    cin >> liczba;

    szlaczek(znak, liczba);

    return 0;
}