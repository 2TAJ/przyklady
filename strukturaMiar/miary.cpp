#include <iostream>
#include <fstream>
using namespace std;
void normalizacjaMiar(int podanaDlugosc)
{
    int piedz;
    int lokiec;
    int sazen;
    int wiorsta;
    wiorsta = podanaDlugosc / 4500;
    podanaDlugosc = podanaDlugosc % 4500;
    sazen = podanaDlugosc / 9;
    podanaDlugosc = podanaDlugosc % 9;
    lokiec = podanaDlugosc / 3;
    podanaDlugosc = podanaDlugosc % 3;
    piedz = podanaDlugosc;
    cout << "Wiorsty: " << wiorsta << endl;
    cout << "Saznie: " << sazen << endl;
    cout << "Lokcie: " << lokiec << endl;
    cout << "Piedzie: " << piedz << endl;
}