#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string a;
    string b;
    int c;
    int d;
    cout << "Podaj swoje imie: " << endl;
    cin >> a;
    cout << "Podaj swoje nazwisko: " << endl;
    cin >> b;
    cout << "Podaj swój wiek: " << endl;
    cin >> c;
    cout << "Podaj swój numer buta: " << endl;
    cin >> d;

    fstream plik;
    plik.open("baza1.txt",ios::in | ios::out | ios::app);
    if (plik.good() == true)
    {
        plik << a << " ";
        plik << b << " ";
        plik << c << " ";
        plik << d << " ";
        plik << endl;
        plik.close();
    }
    else
    {
        cout << "Nie udalo się otworzyć";
    }
    


    return 0;
}
