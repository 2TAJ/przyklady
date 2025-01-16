#include <iostream>
using namespace std;

class Dane
{

    float height;
    float radius;

public:
    void setHeight(float heightP)
    {
        height = heightP;
    }

    void setRadius(float radiusP)
    {
        radius = radiusP;
    }

    float getHeight()
    {
        return height;
    }

    float getRadius()
    {
        return radius;
    }

    friend class Cylinder;
};

class Cylinder
{
public:
    void volume(Dane dane)
    {
        cout << "Objetosc walca: " << (3.14 * (dane.radius * dane.radius)) * dane.height << endl;
    }
};
class Cone
{
public:
    void volume(Dane dane)
    {
        cout << "Objetosc stozka: " << ((3.14 * (dane.getRadius() * dane.getRadius())) * dane.getHeight()) / 3 << endl;
    }
};

int main()
{
    Dane dane;
    dane.setHeight(10);
    dane.setRadius(1);

    Cylinder cylinder;
    cylinder.volume(dane);

    Cone cone;
    cone.volume(dane);
    return 0;
}