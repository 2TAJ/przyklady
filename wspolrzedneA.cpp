#include <iostream>
#include <cmath>
using namespace std;
struct punkt
{
    float x;
    float y;
};
class Punkt
{
    punkt wspolrzedne;

public:
    void displayWspolrzedne()
    {
        cout << "X: " << wspolrzedne.x << endl;
        cout << "Y: " << wspolrzedne.y << endl;
    }
    void setWspolrzedne()
    {
        cout << "Podaj wspolrzedna x: ";
        cin >> wspolrzedne.x;
        cout << "Podaj wspolrzedna y: ";
        cin >> wspolrzedne.y;
    }
    int getX()
    {
        return wspolrzedne.x;
    }
    int getY()
    {
        return wspolrzedne.y;
    }
    void odbijX()
    {
        wspolrzedne.y *= -1;
    }
    void odbijY()
    {
        wspolrzedne.x *= -1;
    }
    void przesun(int x, int y)
    {
        wspolrzedne.x += x;
        wspolrzedne.y += y;
    }
    float odlegloscOdProstej(float a, float b, float c)
    {
        return (float)abs(wspolrzedne.x + wspolrzedne.y + c) / (float)sqrt(pow(a, 2) + pow(b, 2));
    }
    punkt *symetriaPunktow(Punkt *punkt2)
    {
        punkt *symetria = new punkt;
        symetria->x = (punkt2->getX() + getX()) / 2;
        symetria->y = (punkt2->getY() + getY()) / 2;
        return symetria;
    }
};
int odlegloscDwochPunktow(Punkt *punkt1, Punkt *punkt2)
{
    return sqrt(pow((punkt1->getX() - punkt2->getY()), 2) + pow((punkt1->getX() - punkt2->getY()), 2));
}
// PROGRAM GŁÓWNY
int main()
{
    cout << "Aha\n";
    int a, b, c;
    Punkt *punkt1 = new Punkt();
    Punkt *punkt2 = new Punkt();
    punkt *symetria = new punkt;
    punkt1->setWspolrzedne();
    punkt1->displayWspolrzedne();

    /*   punkt1->odbijX();
      punkt1->odbijY();
      punkt1->displayWspolrzedne();
      cout << "O ile przesunac na x ";
      cin >> a;
      punkt1->przesun(3, 3);
      punkt1->displayWspolrzedne();
      punkt2->setWspolrzedne();
      cout << odlegloscDwochPunktow(punkt1, punkt2) << endl;
      symetria = punkt1->symetriaPunktow(punkt2);
      cout << "x: " << symetria->x << " y" << symetria->y;
      delete punkt2;
   */
    cout << "Podaj a ,b ,c do funkcji ";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << punkt1->odlegloscOdProstej(a, b, c);
    return 0;
}