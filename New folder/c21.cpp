#include <iostream>

using namespace std;

class SortowanieTablicy
{
private:
    int tab[10];                   // Tablica liczb całkowitych
    static const int dlugosc = 10; // Stała długość tablicy
                                   /*
                                   ************************************************
                                   Nazwa funkcji:          znajdzMaksimum
                                   Opis funkcji:           Szuka indeksu wartości maksymalnej w tablicy od określonego indeksu początkowego
                                   Parametry:              start - indeks, od którego zaczyna się wyszukiwanie maksymalnej wartości
                                   Zwracany typ i opis:    Zwraca indeks największej wartości w tablicy, zaczynając od pozycji 'start'
                                   Autor:                  000000000
                                   ************************************************
                                   */

    // Metoda szukająca indeks wartości maksymalnej w podanym zakresie
    int znajdzMaksimum(int start)
    {
        int maxIndex = start;
        for (int i = start + 1; i < dlugosc; i++)
        {
            if (tab[i] > tab[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    // Wczytanie tablicy od użytkownika
    void wczytajTablice()
    {
        cout << "Podaj 10 liczb calkowitych:\n";
        for (int i = 0; i < dlugosc; i++)
        {
            cout << "Element " << i + 1 << ": ";
            cin >> tab[i];
        }
    }

    // Sortowanie przez wybieranie (malejąco)
    void sortuj()
    {
        for (int i = 0; i < dlugosc - 1; i++)
        {
            int maxIndex = znajdzMaksimum(i); // Znajduje indeks największej wartości
            swap(tab[i], tab[maxIndex]);      // Zamienia miejscami
        }
    }

    // Wyświetlanie posortowanej tablicy
    void wyswietlTablice()
    {
        cout << "Posortowana tablica (malejąco):\n";
        for (int i = 0; i < dlugosc; i++)
        {
            cout << "Index " << i << ": " << tab[i] << "\n";
        }
    }
};

int main()
{
    SortowanieTablicy sortowanie;
    sortowanie.wczytajTablice();
    sortowanie.sortuj();
    sortowanie.wyswietlTablice();
    return 0;
}