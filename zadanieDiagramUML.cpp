#include <iostream>
#include <string>
using namespace std;

class Pizza
{
private:
    float cenaSera;
    float cenaSzynki;
    float cenaBrokuly;
    float cenaCiastaMalego;
    static int ilePizz;

public:
    int ileSera;
    int ileSzynki;
    int ileBrokuly;
    bool czyDuza;
    Pizza()
    {
        cenaSera = 2;
        cenaSzynki = 3;
        cenaBrokuly = 1;
        cenaCiastaMalego = 5;
        ilePizz++;
    }
    float cenaPizzy()
    {
        int cena;
        if (czyDuza != true)
        {
            cena = ileSera * cenaSera;
            cena += ileSzynki * cenaSzynki;
            cena += ileBrokuly * cenaBrokuly;
            cena += cenaCiastaMalego;
            return cena;
        }
        else
        {
            cena = ileSera * cenaSera;
            cena += ileSzynki * cenaSzynki;
            cena += ileBrokuly * cenaBrokuly;
            cena += cenaCiastaMalego;
            cena += cena;
            return cena;
        }
    }
    int ileKalorii()
    {
        int kalorie;
        if (czyDuza != true)
        {
            kalorie = ileSera * 402;
            kalorie += ileSzynki * 145;
            kalorie += ileBrokuly * 34;
            kalorie += 500;
            return kalorie;
        }
        else
        {
            kalorie = ileSera * 402;
            kalorie += ileSzynki * 145;
            kalorie += ileBrokuly * 34;
            kalorie += 500;
            kalorie += kalorie;
            return kalorie;
        }
    }
    bool czyVege()
    {
        if (czyDuza == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void vege(bool vege)
    {
        if (vege == true)
        {
            cout << "pizza jest vege\n";
        }
        else
        {
            cout << "pizza nie jest vege\n";
        }
    }
    float getIlePizz()
    {
        return ilePizz;
    }
};
int Pizza::ilePizz = 0;

int main()
{
    Pizza pizza;
    cout << "Podaj ile sera (jedna porcja odpowiada 100g)\n";
    cin >> pizza.ileSera;
    cout << "Podaj ile szynki (jedna porcja odpowiada 100g)\n";
    cin >> pizza.ileSzynki;
    cout << "Podaj ile brokuly (jedna porcja odpowiada 100g)\n";
    cin >> pizza.ileBrokuly;
    cout << "Czy ma byc duza (jesli tak to wpisz '1')\n";
    cin >> pizza.czyDuza;
    pizza.vege(pizza.czyVege());
    cout <<"twoja pizza kosztuje: \n"<< pizza.cenaPizzy()<<endl;
    cout <<"twoja pizza ma tyle kalorii: \n"<< pizza.ileKalorii()<<endl;
    // pizza.getIlePizz();
    return 0;
}