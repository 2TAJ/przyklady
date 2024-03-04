#include <iostream>
#include <vector>
#include "foreach.h"
using namespace std;

int main()
{
    int elementyWektora;
    int wielkoscWektora;
    cout << "podaj wielkosc wektora:" << endl;
    cin >> wielkoscWektora;
    vector<int> wektor(wielkoscWektora);
    wypelnijWektor(wektor,wielkoscWektora);
    cout<<sumaWwektorze(wektor)<<endl;
    cout<<sredniaWwektorze(wektor);
    return 0;
}