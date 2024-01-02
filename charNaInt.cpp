#include <iostream>
using namespace std;
int main()
{
    char znak, znak1;
    int liczba, liczba1;

    cout << "Podaj dwie cyfry: " << endl;
    cin >> znak >> znak1;

    liczba = (int)znak;
    liczba -= 48;
    liczba1 = (int)znak1;
    liczba1 -= 48;
    cout << "Wynik " << liczba << " + " << liczba1 << " = " << liczba + liczba1 << endl;

    return 0;
}