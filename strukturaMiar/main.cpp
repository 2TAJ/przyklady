#include <iostream>
#include <fstream>
#include "miary.h"
using namespace std;

int main()
{
    int podanaDlugosc;
    cout << "Podaj ilosc piedzi:" << endl;
    cin >> podanaDlugosc;
    normalizacjaMiar(podanaDlugosc);
    return 0;
}