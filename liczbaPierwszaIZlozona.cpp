#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int liczba, j = 0;

    cout << "Podaj liczbe: ";

    cin >> liczba;

    for (int i = 2; i < sqrt(liczba); i++)
    {

        if (liczba % i == 0)
            j = j + 1;
    };

    if (j == 0)
        cout << "Liczba jest piersza";

    else
        cout << "Liczba nie jest pierwsza";
    return 0;
}