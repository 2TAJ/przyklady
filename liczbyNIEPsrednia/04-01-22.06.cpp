#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/******************************************************
 nazwa funkcji: fillArray
 argumenty:
   array - wektor liczb całkowitych, który będzie wypełniony wartościami
   size - liczba elementów, które mają zostać wypełnione w wektorze
 typ zwracany: void, brak wartości zwracanej
 informacje: Funkcja wypełnia przekazany wektor pseudolosowymi liczbami z zakresu od 1 do 100.
 autor: EE-Informatyk.pl
 *****************************************************/
void fillArray(vector<int>& array, int size) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        array.push_back(rand() % 100 + 1);
    }
}

/******************************************************
 nazwa funkcji: searchWithSentinel
 argumenty:
   array - wektor liczb całkowitych, w którym będzie wyszukiwana wartość
   valueToFind - liczba całkowita, która ma zostać odnaleziona w tablicy
 typ zwracany: int, indeks pierwszego wystąpienia szukanej wartości lub -1, gdy nie znaleziono
 informacje: Funkcja przeszukuje tablicę za pomocą algorytmu z wartownikiem.
             Wartownik jest tymczasowo dodawany na końcu tablicy, a następnie usuwany.
 autor: EE-Informatyk.pl
 *****************************************************/
int searchWithSentinel(vector<int>& array, int valueToFind) {
    int n = array.size();
    array.push_back(valueToFind);

    int i = 0;
    while (array[i] != valueToFind) {
        i++;
    }

    array.pop_back();

    if (i == n) {
        return -1;
    }
    return i;
}

int main() {
    /******************************************************
     nazwa funkcji: main
     argumenty: brak
     typ zwracany: int, kod zakończenia programu (0 oznacza poprawne zakończenie)
     informacje: Funkcja główna programu, która testuje działanie algorytmu.
                 Wypełnia tablicę pseudolosowymi liczbami, pobiera od użytkownika wartość do wyszukania,
                 wywołuje funkcję wyszukującą i wyświetla wyniki działania.
     autor: EE-Informatyk.pl
     *****************************************************/

    const int ARRAY_SIZE = 50;
    vector<int> array;
    int valueToFind;

    fillArray(array, ARRAY_SIZE);
    cout << "Podaj wartosc do wyszukania: ";
    cin >> valueToFind;

    int index = searchWithSentinel(array, valueToFind);

    cout << "Zawartosc tablicy: ";
    for (size_t i = 0; i < array.size(); ++i) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    if (index == -1) {
        cout << "Nie znaleziono wartosci " << valueToFind << " w tablicy." << endl;
    }
    else {
        cout << "Wartosc " << valueToFind << " odnaleziono pod indeksem: " << index << endl;
    }

    return 0;
}