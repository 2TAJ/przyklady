#include <iostream>
using namespace std;

class Czlowiek
{
public:
    virtual void setImieCzlowieka() = 0;
};

class Rasa
{
public:
    virtual void setRasa() = 0;
};

class Zwierze : public Czlowiek, public Rasa
{
public:
    string imieZwierzecia, imieWlasciciela, rasa;
    virtual void setImieCzlowieka()
    {
        cout << "Podaj imie wlasciciela ";
        cin >> imieWlasciciela;
    }
    virtual void setRasa()
    {
        cout << "Podaj rase ";
        cin >> rasa;
    }
    void setImieZwierzecia()
    {
        cout << "Podaj imie zwierzecia ";
        cin >> imieZwierzecia;
    }
};

int main()
{
    Zwierze kot;
    kot.setImieCzlowieka();
    kot.setImieZwierzecia();
    kot.setRasa();
    cout << "wlasciciel " << kot.imieWlasciciela << endl;
    cout << "imie zwierzecia " << kot.imieZwierzecia << endl;
    cout << "rasa " << kot.rasa << endl;
    return 0;
}