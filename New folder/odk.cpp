#include <iostream>
using namespace std;

class Urzadzenie
{
public:
    void wyswietl_komunikat(const string &komunikat)
    {
        cout << komunikat << endl;
    }
};

class Pralka : public Urzadzenie
{
private:
    int numer_programu = 0;
public:

/*
************************************************
Nazwa funkcji:          nrProgramu
Opis funkcji:           Ustawia numer programu pralki, jeśli jest on w poprawnym zakresie (1-12).
                        W przeciwnym razie ustawia numer programu na 0.
Parametry:              numer - numer programu, który ma zostać ustawiony
Zwracany typ i opis:    Zwraca numer programu pralki, który został ustawiony,
                        lub 0, jeśli numer był niepoprawny
Autor:                  000000000
************************************************
*/

    int nrProgramu(int numer)
    {
        if (numer >= 1 && numer <= 12)
        {
            numer_programu = numer;
        }
        else
        {
            numer_programu = 0;
        }
        return numer_programu;
    }
};

class Odkurzacz : public Urzadzenie
{
private:
    bool czyWlaczony = false;
public:
    void wlaczony()
    {
        if (!czyWlaczony)
        {
            czyWlaczony = true;
            wyswietl_komunikat("Odkurzacz włączono");
        }
    }
    void wylaczony()
    {
        if (!czyWlaczony)
        {
            czyWlaczony = false;
            wyswietl_komunikat("Odkurzacz wyłączono");
        }
    }
    void wyladowany()
    {
        if (czyWlaczony)
        {
            czyWlaczony = false;
            wyswietl_komunikat("Odkurzacz wyładował się");
        }
    }
};

int main()
{
    Pralka pralka;
    Odkurzacz odkurzacz;

    cout << "Podaj numer programu od 1 do 12: ";
    int numer;
    cin >> numer;

    if (pralka.nrProgramu(numer))
    {
        cout << numer << endl << "Program został ustawiony" << endl;
    }
    else
    {
        cout << "Podano niepoprawny numer" << endl;
    }

    cout << endl;
    odkurzacz.wlaczony();
    odkurzacz.wyladowany();
    odkurzacz.wylaczony();

    return 0;
};