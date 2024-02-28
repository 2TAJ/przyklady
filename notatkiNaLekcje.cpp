#include <iostream>
using namespace std;
struct czas
{
    int dni;
    int miesiace;
    int lata;
    int tygodnie;
};
void obliczanieCzasuDni(int czasWdniach)
{
    int czaslata = 0;
    int czasmiesiace = 0;
    int czasdni = 0;
    int czastygodnie = 0;
    czaslata = czasWdniach / 360;
    czasWdniach = czasWdniach % 360;
    czasmiesiace = czasWdniach / 30;
    czasWdniach = czasWdniach % 30;
    czastygodnie = czasWdniach / 7;
    czasWdniach = czasWdniach % 7;
    czasdni = czasWdniach;
    cout << "lata: " << czaslata << endl;
    cout << "miesiace: " << czasmiesiace << endl;
    cout << "tygodnie: " << czastygodnie << endl;
    cout << "dni: " << czasdni << endl;
}
void oblicznieZlitrow(int podaneLitry)
{
    int litry = 0;
    int wanny = 0;    // 250l
    int cysterny = 0; // 1000l
    int beczki = 0;// 50l
    cysterny = podaneLitry / 1000;
    wanny = podaneLitry / 250;
    beczki = podaneLitry / 50;
    litry = podaneLitry;
    cout << "cysterny:" << cysterny << endl;
    cout << "wanny:" << wanny << endl;
    cout << "beczki:" << beczki << endl;
    cout << "litry:" << litry << endl;
}

void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
    int czaslata = 0;
    int czasmiesiace = 0;
    int czasdni = 0;
    czaslata = staryCzas.lata + nowyCzas.lata;
    czasmiesiace = staryCzas.miesiace + nowyCzas.miesiace;
    czasdni = staryCzas.dni + nowyCzas.dni;
    if (czasdni > 59)
    {
        czasmiesiace += czasdni / 60;
        czasdni = czasdni % 60;
    }
    if (czasmiesiace > 59)
    {
        czaslata += czasmiesiace / 60;
        czasmiesiace = czasmiesiace % 60;
    }
    if (czaslata > 23)
    {

        czaslata = czaslata % 24;
    }
    nowyCzas.dni = czasdni;
    nowyCzas.miesiace = czasmiesiace;
    nowyCzas.lata = czaslata;
}
void wypisz(czas timex)
{
    cout << timex.dni << endl;
    cout << timex.miesiace << endl;
    cout << timex.lata << endl;
}
int main()
{
    int dniOdUzytkownika;
    // czas staryCzas{59, 59, 23},
    // czas nowyCzas;
    // cout << "podaj ilosc dni a ja powiem ile jest dni,miesc,lat";
    cout<<"podaj litry a ja zrobie z nich cysterny,beczki,wanny"<<endl;
    cin >> dniOdUzytkownika;
    // obliczanieCzasuDni(dniOdUzytkownika);
    oblicznieZlitrow(dniOdUzytkownika);
    // dodajCzas(nowyCzas, staryCzas);
    // wypisz(nowyCzas);
    return 0;
}