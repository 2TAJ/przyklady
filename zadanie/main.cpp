#include <iostream>
#include <string>
#include "plik.h"
using namespace std;

int main()

{
    int podaneCale = 0;
    cout << "Podaj wielkosc w calach:" << endl;
    cin >> podaneCale;
    zamianaNaJednoskiAnglosaskie(podaneCale);
    return 0;
}