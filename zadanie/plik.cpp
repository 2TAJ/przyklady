#include <iostream>
#include <fstream>
using namespace std;
void zamianaNaJednoskiAnglosaskie(int podaneCale)
{
    
    int cal = 0;
    int stopa = 0;
    int jard = 0;
    int mila = 0;
    mila = podaneCale / 63360;
    podaneCale = podaneCale %63360;
    jard = podaneCale / 36;
    podaneCale = podaneCale % 36;
    stopa = podaneCale / 12;
    podaneCale = podaneCale % 12;
    cal = podaneCale;
    cout << "mile" << mila << endl;
    cout << "jard" << jard << endl;
    cout << "stopa" << stopa << endl;
    cout << "cal" << cal << endl;
}