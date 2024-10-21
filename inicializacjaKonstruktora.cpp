#include <iostream>
using namespace std;
class Prostokat
{
public:
    int a;
    int b;

    Prostokat(int podaneA, int podaneB)
    {
        a = podaneA;
        b = podaneB;
    }

    Prostokat(const Prostokat &wzorzec)
    {
        a = wzorzec.a;
        b = wzorzec.b;
    }
    Prostokat()
        : a{8}, b{9} {}

    void wyswietl()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
Prostokat::Prostokat()
    : a{8}, b{9} {};

int main()
{
    Prostokat p1{1, 2};
    Prostokat p2(3, 4);
    Prostokat p3(p1);
    Prostokat p4;
    p1.wyswietl();
    p2.wyswietl();
    p3.wyswietl();
    p4.wyswietl();
}