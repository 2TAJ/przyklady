#include <iostream>
using namespace std;
class Uczen
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string podaneImie)
    {
        imie = podaneImie;
    }
    void setNazwisko(string podaneNazwisko)
    {
        nazwisko = podaneNazwisko;
    }
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
};
int main()
{
    string podaneImie = "Jan";
    string podaneNazwisko = "Kowalski";
    Uczen *w_Uczen;
    w_Uczen = new Uczen();
    w_Uczen->setImie(podaneImie);
    w_Uczen->setNazwisko(podaneNazwisko);
    cout << w_Uczen->getImie()<<endl;
    cout << w_Uczen->getNazwisko()<<endl;
    delete w_Uczen;
    return 0;
}