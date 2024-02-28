#include <iostream>
#include <fstream>
#include "plik.h"
using namespace std;

int main()
{
    int podanaDlugosc;
    cout << "Podaj ilosc ocen:" << endl;
    cin >> podanaDlugosc;
    int dlugosc = podanaDlugosc;
    oceny *osoby = new oceny[dlugosc];
    wartosciUzytkownika(osoby, podanaDlugosc);
    srednia(osoby, podanaDlugosc);

    return 0;
}