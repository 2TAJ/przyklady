#include <iostream>
#include <cmath>
using namespace std;

class Osoba
{
private:
    string pesel;

public:
    int iq;
    string plec;
    void setPesel(string znak)
    {
        if (!sumaKontrolna(znak))
        {
            cout << "nie ma takiego peselu";
            exit(-1);
        }
        else
            pesel = znak;
    }
    void getPesel(string &znak)
    {
        znak = pesel;
    }
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
    void sprawdzeniePlci(string &PESEL)
    {
        if (PESEL[9] % 2 == 0)
        {
            cout << "Jestes Kobieta" << endl;
        }
        else
        {
            cout << "Jestes Mezczyzna" << endl;
        }
    }
    void wypiszRokUrodzenia(string pesel)
    {
        int rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);

        int miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

        if (miesiac > 20)
        {
            rokUrodzenia += 2000;
        }
        else
        {
            rokUrodzenia += 1900;
        }

        if (rokUrodzenia > 1999)
        {
            miesiac -= 20;
        }

        int dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
        cout << "Urodziłeś się: ";

        if (dzien < 10)
        {
            cout << "0" << dzien;
        }
        else
        {
            cout << dzien;
        }
        cout << ".";

        if (miesiac < 10)
        {
            cout << "0" << miesiac;
        }
        else
        {
            cout << miesiac;
        }

        cout << ".";
        cout << rokUrodzenia << endl;
    }
};

int main()
{
    string pesel;
    string pesel1;
    string plec;
    int iq;
    cout << "podaj swoj pesel i iq\n";
    cin >> pesel;
    cin >> iq;
    Osoba osoba;
    osoba.iq = iq;
    osoba.setPesel(pesel);
    osoba.getPesel(pesel1);
    cout << "Twoje iq: " << osoba.iq << endl;
    cout << "Twoj pesel: " << pesel1 << endl;
    osoba.sprawdzeniePlci(pesel);
    osoba.wypiszRokUrodzenia(pesel);
    return 0;
}