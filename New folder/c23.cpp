#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
**********************************************
Nazwa funkcji:          wypelnij_sito
Opis funkcji:           Funkcja wypełnia tablicę wartościami true/false według algorytmu Sita Eratostenesa
Parametry:              sito - tablica bool przechowująca informację o liczbach pierwszych
                        n - zakres wyszukiwania (100)
Zwracany typ i opis:    void - funkcja nie zwraca wartości, modyfikuje tablicę sito
Autor:                  0000000000000
***********************************************
*/
void wypelnij_sito(vector<bool> &sito, int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (sito[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                sito[j] = false;
            }
        }
    }
}

/*
**********************************************
Nazwa funkcji:          wyswietl_liczby_pierwsze
Opis funkcji:           Funkcja wyświetla liczby pierwsze na podstawie tablicy Sita Eratostenesa
Parametry:              sito - tablica bool przechowująca informację o liczbach pierwszych
Zwracany typ i opis:    void - funkcja nie zwraca wartości, wypisuje liczby pierwsze na ekranie
Autor:                  0000000000000
***********************************************
*/
void wyswietl_liczby_pierwsze(const vector<bool> &sito)
{
    cout << "Liczby pierwsze w przedziale 2..100: ";
    for (size_t i = 2; i < sito.size(); i++)
    {
        if (sito[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int zakres = 100;
    vector<bool> sito(zakres + 1, true);
    sito[0] = sito[1] = false; // 0 i 1 nie są liczbami pierwszymi

    wypelnij_sito(sito, zakres);
    wyswietl_liczby_pierwsze(sito);

    return 0;
}