#include <iostream>

using namespace std;

class ArraySorter {
private:
    int arr[10];  // Tablica 10 liczb całkowitych

    // Metoda wyszukuje indeks największego elementu od indeksu 'start' do końca tablicy
    int findMaxIndex(int start) {
        int maxIndex = start;
        for (int i = start + 1; i < 10; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    // Wczytanie tablicy z klawiatury
    void inputArray() {
        cout << "Podaj 10 liczb calkowitych:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Sortowanie tablicy malejąco metodą przez wybieranie
    void sortDescending() {
        for (int i = 0; i < 9; i++) {
            int maxIndex = findMaxIndex(i);
            // Zamiana elementu aktualnego z elementem o największej wartości
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }

    // Wyświetlenie zawartości tablicy
    void displayArray() {
        cout << "\nPosortowana tablica (malejaco):" << endl;
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArraySorter sorter;

    // Wczytanie tablicy z klawiatury
    sorter.inputArray();

    // Sortowanie tablicy malejaco
    sorter.sortDescending();

    // Wyświetlenie posortowanej tablicy
    sorter.displayArray();

    return 0;
}
