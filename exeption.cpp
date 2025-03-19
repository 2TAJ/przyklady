#include <iostream>
using namespace std;
int main()
{
    try
    {
        int liczba, reszta1;
        double reszta2;
        float cztero;
        long int domyslny;
        cout << "podaj liczbe dwucyfrowa: \n";
        cin >> liczba;
        if (liczba < 10)
            throw liczba;
        if (liczba > 99 && liczba < 1000)
            throw 1.0;
        if (liczba > 999 && liczba < 10000)
            throw cztero;
        if (liczba > 9999)
            throw domyslny;
        reszta1 = liczba % 10;
        reszta2 = (liczba - reszta1) / 10;
        cout << "podana liczba rozlozona: \n";
        cout << reszta2 << endl;
        cout << reszta1 << endl;
    }
    catch (int)
    {
        cout << "Podales liczbe jednocyfrowa\n";
    }
    catch (double)
    {
        cout << "Podales liczbe trzycyfrowa";
    }
    catch (float)
    {
        cout << "Podales liczbe czterocyfrowa";
    }
    catch (...)
    {
        cout << "wiecej niz czterocyfrowa";
    }
    return 0;
}