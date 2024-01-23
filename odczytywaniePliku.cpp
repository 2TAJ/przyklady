#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    string nazwisko;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    fstream plik;
    plik.open("wejscia.txt", ios::in | ios::app);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            string wartosc;
            plik >> wartosc;
            if (a % 4 == 1 && wartosc == nazwisko)
            {
                cout << "znaleziono"<<endl;
                cout <<"Podane nazwisko: "<< wartosc;
                return 0;
            }
            a++;
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo się otworzyć";
    }

    return 0;
}
