#include <iostream>
#include <string>
using namespace std;
class Jajo
{
private:
    string kod;
    int typChowu;
    string krajPochodzenia;
    string reszta;
    static int iloscJaj;

    void setTypChowu()
    {
        typChowu = kod[0] - '0';
    }
    void setKrajPochodzenia()
    {
        krajPochodzenia = kod.substr(1, 2);
    }
    void setReszta()
    {

        reszta = kod.substr(7, 4);
    }

public:
    Jajo() {
        iloscJaj++;
    }
    Jajo(string kodd)
    {
        setKod(kodd);
        iloscJaj++;
    }

    void setKod(string kodd)
    {
        kod = kodd;
        setTypChowu();
        setKrajPochodzenia();
        setReszta();
    }
    string getTypChowuSlownie()
    {
        if (typChowu == 0)
        {
            return "ekologiczny";
        }
        else if (typChowu == 1)
        {
            return "na wolnym wybiegu";
        }
        else if (typChowu == 2)
        {
            return "ściołkowy";
        }
        else if (typChowu == 3)
        {
            return "klatkowy";
        }
        return "nieznany typ chowu";
    }

    void print()
    {
        cout << "Typ chowu: " << getTypChowuSlownie() << endl;
        cout << "Kraj pochodzenia: " << krajPochodzenia << endl;
        cout << "Reszta: " << reszta <<" ile jajek: "<<iloscJaj<< endl;
    }
};

int Jajo::iloscJaj = 0;

int main()
{

    string jajkoCIN = "0PL21383259";
    Jajo jajka;
    jajka.setKod(jajkoCIN);
    jajka.print();
    return 0;
}