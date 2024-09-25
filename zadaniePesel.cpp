

/*
nazwa funkcji: plec
opis funkcji: sprawdzana jest dziesiąta cyfra PESElu, dla wartości parzystych oznacza płeć żeńską, dla nieparzystych męską 
parametry: napis-PESEL
zwracany typ i opis: zwracany typ danych to char i ma na celu ukazac plec K(kobieta) i M(mezczyzna) z podanego PESELu oraz date urodzenia
autor: DB

*/
#include <iostream>
using namespace std;
char plec(string &PESEL)
{
    if (PESEL[9] % 2 == 0)
    {
        return 'K'; // Kobieta
    }
    else
    {
        return 'M'; // Mezczyzna
    }
}
/*
nazwa funkcji: DataUrodz
opis funkcji: funkcja wypisuje odpowiedni rok miesc i dzien wyciagniety z peselu
parametry: napis-PESEL
zwracany typ i opis: funkcja jest void wiec wypisywany jest tylko cout z odpowiednia data urodzenia
autor: DB

*/
void DataUrodz(string &PESEL)
{
    if (PESEL[2] - '0' == 2)
    {
        cout << "Rok urodzenia: " << "20" << (PESEL[0] - '0') << (PESEL[1] - '0') << endl
             << "Miesc urodzenia: " << (PESEL[3] - '0') << endl;
    }
    else if (PESEL[2] - '0' == 1)
    {
        cout << "Rok urodzenia: " << "19" << (PESEL[0] - '0') << (PESEL[1] - '0') << endl
             << "Miesc urodzenia: " << (PESEL[2] - '0') << (PESEL[3] - '0') << endl;
    }
    else if (PESEL[2] - '0' == 3)
    {
        cout << "Rok urodzenia: " << "20" << (PESEL[0] - '0') << (PESEL[1] - '0') << endl
             << "Miesc urodzenia: " << (PESEL[2] - '0') << (PESEL[3] - '0') << endl;
    }
    else
    {
        cout << "Rok urodzenia: " << "19" << (PESEL[0] - '0') << (PESEL[1] - '0') << endl
             << "Miesc urodzenia: " << (PESEL[3] - '0') << endl;
    }

    cout << "Dzien urodzenia: " << (PESEL[4] - '0') << (PESEL[5] - '0') << endl;

}
/*
nazwa funkcji: sumaKontrolna
opis funkcji: jesli suma kontrolna ("suma" liczb od 1 do 10) jest taka jak liczba 11 to jest poprawna
parametry: napis-PESEL
zwracany typ i opis: funckja zwraca odpowiednio true albo false gdy "suma" 10 pierwszych liczb odpowiada 11 liczbie
autor: DB

*/
bool sumaKontrolna(string &PESEL)
{
    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int S = 0;
    int R = 0;

    for (int i = 0; i < 10; i++)
    {
        S += (PESEL[i] - '0') * wagi[i];
    }
    int M = S % 10;
    // Jesli  M = 0 TO R=0 jesli nie to R=10-M
    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }
    if (R == PESEL[10] - '0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string PESEL;
    cout << "Podaj swoj pesel a ja powiem ci czy jestes mezczyzna czy kobieta oraz twoja date urodzenia\n";
    cin >> PESEL;
    if (plec(PESEL) == 'K')
    {
        cout << "Jestes Kobieta" << endl;
    }
    else if (plec(PESEL) == 'M')
    {
        cout << "Jestes Mezczyzna" << endl;
    }

    if (sumaKontrolna(PESEL))
    {
        cout << "pesel zgodny z suma kontrolna" << endl;
    }
    else
    {
        cout << "pesel niezgodny z suma kontrolna" << endl;
    }
    DataUrodz(PESEL);
    return 0;
}
