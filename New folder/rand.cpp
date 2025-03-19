#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int liczbaRzutow;
    char wybor = 't'; // początkowa wartość, aby pętla while się wykonała
    srand(time(NULL));

    while(wybor == 't' || wybor == 'T') {
        // Punkt 1: Pobranie liczby rzutów z klawiatury z walidacją
        cout << "Podaj liczbe rzutow kostka od 3 do 10: ";
        cin >> liczbaRzutow;
        while (liczbaRzutow < 3 || liczbaRzutow > 10) {
            cout << "Podana liczba nie jest w przedziale [3, 10]. Podaj jeszcze raz: ";
            cin >> liczbaRzutow;
        }
        
        // Przygotowanie tablicy do zliczania wystąpień oczek (indeksy 1-6)
        int wystapienia[7] = {0};  // inicjujemy zerami
        int sumaPunktow = 0;
        
        // Punkt 2: Rzuty kośćmi
        for (int i = 1; i <= liczbaRzutow; i++) {
            int liczbaLos = rand() % 6 + 1; // Losowanie liczby od 1 do 6
            cout << "Kostka " << i << ": " << liczbaLos << endl;
            wystapienia[liczbaLos]++;  // zwiększamy licznik dla wylosowanej liczby
        }
        
        // Punkt 4: Obliczenie sumy punktów wg reguły:
        // liczby występujące tylko raz są pomijane, a pozostałe dodajemy tyle razy ile wystąpiły.
        for (int oczka = 1; oczka <= 6; oczka++) {
            if (wystapienia[oczka] > 1) {
                sumaPunktow += oczka * wystapienia[oczka];
            }
        }
        cout << "Suma punktow: " << sumaPunktow << endl;
        
        // Punkt 5: Pytanie o powtórzenie gry
        cout << "Czy chcesz zagrac ponownie? (t/n): ";
        cin >> wybor;
        cout << endl;
    }
    
    cout << "Dziekuje za gre!" << endl;
    return 0;
}
