#include <iostream>
using namespace std;
class Pomieszczenie
{
private:
public:
    int bok1;
    int bok2;
    Pomieszczenie(const Pomieszczenie &);
    Pomieszczenie(int, int);
    int pole()
    {
        return bok1 * bok2;
    };
    int obwod()
    {
        return 2 * bok1 + 2 * bok2;
    };
};

Pomieszczenie::Pomieszczenie(const Pomieszczenie &wzorzec)
{
    bok1 = wzorzec.bok1;
    bok2 = wzorzec.bok2;
}
Pomieszczenie::Pomieszczenie(int a, int b)
{
    bok1 = a;
    bok2 = b;
}

int main()
{
    Pomieszczenie p1{2, 4};
    Pomieszczenie p2{p1};
    Pomieszczenie p3{p1};
    Pomieszczenie p4{p1};
    cout << p1.pole() << endl;
    cout << p2.pole() << endl;
    cout << p3.pole() << endl;
    cout << p4.pole() << endl;
    cout << p1.obwod() << endl;
    cout << p2.obwod() << endl;
    cout << p3.obwod() << endl;
    cout << p4.obwod() << endl;

    return 0;
}