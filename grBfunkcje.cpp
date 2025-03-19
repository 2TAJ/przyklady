// Grupa B
#include <iostream>
using namespace std;

// Szablon ogólny
template <typename T1, typename T2 = T1>
void funkcja(T1 a) {
    cout << "Ogólny szablon: " << a << endl;
}

// Specjalizacja dla <float, int> (powiększa o 1)
template <>
void funkcja<float, int>(float a) {
    cout << "Specjalizacja float, int: " << a + 1 << endl;
}

// Specjalizacja dla <double, float> (powiększa o 2)
template <>
void funkcja<double, float>(double a) {
    cout << "Specjalizacja double, float: " << a + 2 << endl;
}

int main() {
    cout << "niejawne: " << endl;
    funkcja(3.14f);  // Niejawne wywołanie specjalizacji float, int
    funkcja(6.28);   // Niejawne wywołanie ogólnego szablonu (nie double, float)

    cout << "jawne: " << endl;
    funkcja<float, int>(3.14f);
    funkcja<double, float>(6.28);

    return 0;
}