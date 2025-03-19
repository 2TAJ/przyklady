#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class BubbleSortApp {
public:
    static void BubbleSort(std::vector<int>& array) {
        int n = array.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }

    static std::vector<int> GenerateRandomArray(int size, int minValue, int maxValue) {
        std::vector<int> array(size);
        for (int i = 0; i < size; i++) {
            array[i] = rand() % (maxValue - minValue + 1) + minValue;
        }
        return array;
    }

    static void PrintArray(const std::vector<int>& array) {
        for (size_t i = 0; i < array.size(); i++) {
            std::cout << array[i];
            if (i < array.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    std::vector<int> numbers = BubbleSortApp::GenerateRandomArray(100, 0, 1000);
    std::cout << "Tablica przed sortowaniem:" << std::endl;
    BubbleSortApp::PrintArray(numbers);
    BubbleSortApp::BubbleSort(numbers);
    std::cout << "\nTablica po sortowaniem:" << std::endl;
    BubbleSortApp::PrintArray(numbers);
    return 0;
}