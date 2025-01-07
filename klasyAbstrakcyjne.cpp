#include <iostream>
using namespace std;
class kolor
{
public:
    virtual void kolor1() = 0;
};
class ksztalt
{
public:
    virtual void ksztalt1() = 0;
};
class Figura : public kolor, public ksztalt
{
public:
    void kolor1()
    {
        cout << "czarny" << endl;
    }
    void ksztalt1()
    {
        cout << "jakis ksztalt" << endl;
    }
};

int main()
{
    Figura *figura = new Figura();
    figura->ksztalt1();
    figura->kolor1();
    return 0;
}