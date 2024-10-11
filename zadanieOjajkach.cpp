#include <iostream>
using namespace std;

class Jajo
{
private:
  string kod;
  int typChowu = 0;
  string krajPochodzenia;
  string reszta;
  int setTypChowu()
  {
    if (kod[0] == '0')
    {
      typChowu = 0;
      return typChowu;
    }
    if (kod[0] == '1')
    {
      typChowu = 1;
      return typChowu;
    }
    if (kod[0] == '2')
    {
      typChowu = 2;
      return typChowu;
    }
    if (kod[0] == '3')
    {
      typChowu = 3;
      return typChowu;
    }
    cout << "cwl" << typChowu;
  }
  void setKrajPochodzenia()
  {
    krajPochodzenia += kod[1];
    krajPochodzenia += kod[2];
    cout << krajPochodzenia;
  }
  void setReszta()
  {
    reszta += kod[3];
    reszta += kod[4];
    reszta += kod[5];
    reszta += kod[6];
    reszta += kod[7];
    reszta += kod[8];
    reszta += kod[9];
    reszta += kod[10];
    cout << reszta;
  }

public:
  static int iloscJaj;

  Jajo(string code)
  {
    kod = code;
    Jajo::iloscJaj++;
  };
  Jajo()
  {
    kod = "0PL21383259";
    Jajo::iloscJaj++;
  }
  void setKod(string code)
  {
    kod = code;
  }
  string getTypChowu()
  {
    if (setTypChowu() == 0)
    {
      return "ekologiczny";
    }
    if (setTypChowu() == 1)
    {
      return "na wolnym wybiegu";
    }
    if (setTypChowu() == 2)
    {
      return "sciulkowy";
    }
    if (setTypChowu() == 3)
    {
      return "klatkowy";
    }
  }
  void print()
  {
    cout << "kod: " << kod << endl;
    cout << "typ Chowu: " << getTypChowu() << endl;
    cout << "kraj pochodzenia: ";
    setKrajPochodzenia();
    cout << "\nreszta: ";
    setReszta();
  }
};
int Jajo::iloscJaj = 0;

int main()
{
  Jajo jajo1;
  string kod;
  cout << "podaj kod" << endl;
  cin >> kod;
  jajo1.setKod(kod);
  cout << jajo1.getTypChowu() << endl;
  jajo1.print();
  cout << endl;
  cout << jajo1.iloscJaj << endl;

  Jajo jajo2("2UK32154331");
  cout << jajo2.getTypChowu() << endl;
  jajo2.print();
  cout << endl;
  cout << jajo2.iloscJaj;
  return 0;
}