#include <iostream>
#include <vector>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

// Funkcja do wypełniania wektora losowymi liczbami
void wypelnij(vector<int> &wektor)
{
    srand(time(nullptr)); // Ustawienie ziarna dla generatora liczb pseudolosowych
    for (int &liczba : wektor)
    {
        liczba = rand() % 100 + 1; // Wypełnienie wektora losowymi liczbami z zakresu 1-100
    }
}

int main()
{
    vector<int> wektor(10); // Inicjalizacja wektora z 10 elementami
    int wybor;

    while (true)
    {
        cout << "Menu:" << endl
             << "1. Wypelnij wektor" << endl
             << "2. Przeszukaj wektor" << endl
             << "3. Wypisz wektor" << endl
             << "4. Wyjscie" << endl
             << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            wypelnij(wektor);
            cout << "Wektor zostal wypelniony." << endl;
            break;
        case 2:
        {
            int szukanaLiczba;
            cout << "Podaj liczbe do przeszukania: ";
            cin >> szukanaLiczba;
            bool znaleziona = false;

            for (int liczba : wektor)
            {
                if (liczba == szukanaLiczba)
                {
                    cout << "Znaleziono szukana liczbe: " << szukanaLiczba << endl;
                    znaleziona = true;
                    break;
                }
            }
            if (!znaleziona)
            {
                cout << "Nie znaleziono szukanej liczby." << endl;
            }
            break;
        }
        case 3:
            cout << "Zawartosc wektora:" << endl;
            for (int liczba : wektor)
            {
                cout << liczba << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << "Koniec programu." << endl;
            return 0;
        default:
            cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
            break;
        }
    }
}
