#include <iostream>
using namespace std;
class Auto
{
private:
    int cena;

public:
    string marka;
    string model;
    int rokProdukcji;
    string nrRejestracyjny;
    void setCena(int podanaCena)
    {
        cena = podanaCena;
    };
    int getCena()
    {
        return cena;
    }
    void porownajCene(Auto &a1, Auto &a2);
    
};

Auto *pobierzDane(Auto *podane)
{
    int podanaCena;
    cout << "Podaj marke";
    cin >> podane->marka;
    cout << "Podaj model";
    cin >> podane->model;
    cout << "Podaj rok produkcji";
    cin >> podane->rokProdukcji;
    cout << "Podaj numer rejestracyjny";
    cin >> podane->nrRejestracyjny;
    cout << "Podaj cene";
    cin >> podanaCena;
    podane->setCena(podanaCena);
    return podane;
}
Auto *pobierzDane(Auto *);
int main()
{
    Auto *auto1 = new Auto();
    Auto *auto2 = new Auto();
    auto1 = pobierzDane(auto1);
    auto2 = pobierzDane(auto2);
    porownajCene(auto1,auto2);
    delete auto1;
    delete auto2;
    return 0;
}
void porownajCene(Auto &a1, Auto &a2)
    {
        if (a1.getCena() > a2.getCena())
        {
            cout << "1 auto jest drozsze\n";
        }
        else if (a1.getCena() < a2.getCena())
        {
            cout << "2 auto jest drozsze\n";
        }
        else
        {
            cout << "auta maja taka sama cene\n";
        }
    }