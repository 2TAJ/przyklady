// napisz funkcje rekurencyjna ktora liczy potegi liczb
#include <iostream>
using namespace std;
int obliczPotegeLiczby(int podstawa, int wykladnik)
{
    if (wykladnik == 0)
    {
        return 1;
    }
    else
    {
        return podstawa * obliczPotegeLiczby(podstawa, wykladnik - 1);
    }
}
int main()
{
    int podstawa, wykladnik;
    cout << "Podaj podstawe i wykladnik potegi" << endl;
    cin >> podstawa;
    cin >> wykladnik;
    int wynik = obliczPotegeLiczby(podstawa, wykladnik);
    cout << wynik << endl;
    return 0;
}
