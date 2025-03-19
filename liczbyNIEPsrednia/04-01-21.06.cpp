#include <iostream>
#include <vector>

class Sorter {
private:
    std::vector<int> numbers;

    /********************************************************
    * nazwa funkcji: findMaxIndex
    * parametry wejściowe: start - indeks w tablicy, od którego rozpoczyna się wyszukiwanie
    * wartość zwracana: indeks największej wartości w tablicy w zakresie od start do końca
    * autor: ee-informatyk.pl
    ********************************************************/
    int findMaxIndex(int start) {
        int maxIndex = start;
        for (size_t i = start + 1; i < numbers.size(); ++i) {
            if (numbers[i] > numbers[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    Sorter() : numbers(10) {}

    /********************************************************
    * nazwa funkcji: readNumbers
    * parametry wejściowe: brak
    * wartość zwracana: brak (wczytuje dane do tablicy `numbers` z klawiatury)
    * autor: ee-informatyk.pl
    ********************************************************/
    void readNumbers() {
        std::cout << "Podaj 10 liczb calkowitych do posortowania:" << std::endl;
        for (int& num : numbers) {
            std::cin >> num;
        }
    }

    /********************************************************
    * nazwa funkcji: sortDescending
    * parametry wejściowe: brak
    * wartość zwracana: brak (sortuje tablicę `numbers` malejąco)
    * autor: ee-informatyk.pl
    ********************************************************/
    void sortDescending() {
        for (size_t i = 0; i < numbers.size() - 1; ++i) {
            int maxIndex = findMaxIndex(i);
            if (maxIndex != static_cast<int>(i)) {
                std::swap(numbers[i], numbers[maxIndex]);
            }
        }
    }

    /********************************************************
    * nazwa funkcji: displayNumbers
    * parametry wejściowe: brak
    * wartość zwracana: brak (wyświetla zawartość tablicy `numbers` na ekranie)
    * autor: ee-informatyk.pl
    ********************************************************/
    void displayNumbers() const {
        std::cout << "Posortowana tablica (malejaco):" << std::endl;
        for (const int& num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Sorter sorter;
    sorter.readNumbers();
    sorter.sortDescending();
    sorter.displayNumbers();
    return 0;
}