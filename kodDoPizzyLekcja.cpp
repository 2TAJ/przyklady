#include <iostream>
using namespace std;

class Pizza
{
private:
  float cenaSera;
  float cenaSzynki;
  float cenaCiastaMalego;
  float cenaBrokuly;
  static int ilePizz;

public:
  int ileSera;
  int ileSzynki;
  int ileBrokuly;
  bool czyDuze;

  Pizza(float pCenaSera, float pCenaSzynki, float pCenaBrokuly, float pCenaCiastaMalego, int pIleSera, int pIleBrokul, int pIleSzynki, bool pCzyDuze)
  {
    cenaSera = pCenaSera;
    cenaSzynki = pCenaSzynki;
    cenaBrokuly = pCenaBrokuly;
    cenaCiastaMalego = pCenaCiastaMalego;
    ileSera = pIleSera;
    ileBrokuly = pIleBrokul;
    ileSzynki = pIleSzynki;
    czyDuze = pCzyDuze;
    ilePizz++;
  }
  Pizza()
  {
    cenaSera = 2;
    cenaSzynki = 3;
    cenaBrokuly = 1;
    cenaCiastaMalego = 5;
    ileSera = 1;
    ileBrokuly = 1;
    ileSzynki = 0;
    czyDuze = false;
    ilePizz++;
  }

  float getCenaSera()
  {
    return cenaSera;
  }

  float getCenaSzynki()
  {
    return cenaSzynki;
  }

  float getCenaBrokuly()
  {
    return cenaBrokuly;
  }

  float getCenaCiastaMalego()
  {
    return cenaCiastaMalego;
  }

  float getIlePizz()
  {
    return ilePizz;
  }

  void setCenaSera(float podanaCena)
  {
    cenaSera = podanaCena;
  }

  void setCenaSzynki(float podanaCena)
  {
    cenaSzynki = podanaCena;
  }

  void setCenaBrokuly(float podanaCena)
  {
    cenaBrokuly = podanaCena;
  }

  void setCenaCiastaMalego(float podanaCena)
  {
    cenaCiastaMalego = podanaCena;
  }

  bool czyVege()
  {
    if (ileSzynki > 0)
    {
      return false;
    }
    return true;
  }

  float cenaPizzy()
  {
    float cena = 0;

    cena += cenaSzynki * ileSzynki;
    cena += cenaBrokuly * ileBrokuly;
    cena += cenaSera * ileSera;

    if (czyDuze)
    {
      cena += cenaCiastaMalego * 2;
    }
    else
    {
      cena += cenaCiastaMalego;
    }

    return cena;
  }

  int ileKalorii()
  {
    int kalorie = 0;

    kalorie += 145 * ileSzynki;
    kalorie += 34 * ileBrokuly;
    kalorie += 402 * ileSera;

    if (czyDuze)
    {
      kalorie += 500 * 2;
    }
    else
    {
      kalorie += 500;
    }

    return kalorie;
  }
};

int Pizza::ilePizz = 0;

int main()
{
  Pizza pizza1;
  pizza1.setCenaBrokuly(4);
  Pizza pizza2(4, 5, 3, 8, 2, 1, 1, true);

  cout << "Cena sera:" << pizza2.getCenaSera() << endl;
  cout << "Cena brokulow:" << pizza2.getCenaBrokuly() << endl;
  cout << "Cena szynki:" << pizza2.getCenaSzynki() << endl;
  cout << "Cena ciasta malego:" << pizza2.getCenaCiastaMalego() << endl;
  cout << "Ilosc sera:" << pizza2.ileSera << endl;
  cout << "Ilosc szynki:" << pizza2.ileSzynki << endl;
  cout << "Ilosc brokulow:" << pizza2.ileBrokuly << endl;
  cout << "Czy pizza jest duza:" << (pizza2.czyDuze ? "Tak" : "Nie") << endl;
  cout << "Ilosc kalorii:" << pizza2.ileKalorii() << endl;
  cout << "Cena pizzy:" << pizza2.cenaPizzy() << endl;
  cout << "Czy pizza jest vege:" << (pizza2.czyVege() ? "Tak" : "Nie") << endl;
  cout << "Ilosc pizz:" << pizza2.getIlePizz() << endl;
  return 0;
}