#include <iostream>
using namespace std;

class motor
{
private:
    bool czyDwusuw, czyCross;
    int pojemnosc;
    float ilePaliwa;
    float pojemnoscBaku = 20;

public:
    string kolor;
    bool czyLyse;
    void tankuj(float ilosc)
    {
        ilePaliwa += ilosc;
        if (ilePaliwa > pojemnoscBaku)
        {
            ilePaliwa = pojemnoscBaku;
            cout << "Po tankowaniu masz tyle paliwa: " << ilePaliwa;
        }
        else
        {
            cout << "Po tankowaniu masz tyle paliwa: " << ilePaliwa;
        }
    }
    void setCzyDwusuw(char czy)
    {
        if (czy == 'T')
        {
            czyDwusuw = true;
        }
        else
        {
            czyDwusuw = false;
        }
    }
    void setCzyCross(char czy)
    {
        if (czy == 'T')
        {
            czyCross = true;
        }
        else
        {
            czyCross = false;
        }
    }
    bool getCzyDwusuw()
    {
        return czyDwusuw;
    }
    bool getCzyCross()
    {
        return czyCross;
    }
    void setPojemnosc(int value)
    {
        pojemnosc = value;
    }
    void setPaliwo(float value)
    {
        ilePaliwa = value;
    }
    float getPaliwo(float value)
    {
        return ilePaliwa;
    }

    int getPojemnosc()
    {
        return pojemnosc;
    }
    bool czyTymPojade()
    {
        if (kolor == "czerwony" && !czyLyse && czyDwusuw)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool czySieNadaje(int value)
    {
        if (value <= pojemnosc)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    motor motor1;
    int pojemnosc;
    float tankowanie;
    float paliwo;
    string kolor;
    char czy1, czy2, czy3;

    cout << "czy Dwusuw (podaj 'T' jesli tak): ";
    cin >> czy1;

    cout << "czy Cross: ";
    cin >> czy2;

    cout << "podaj pojemnosc: " << endl;
    cin >> pojemnosc;
    motor1.setPojemnosc(pojemnosc);

    cout << "podaj kolor: ";
    cin >> kolor;
    motor1.kolor = kolor;

    cout << "czy opony sa lyse: ";
    cin >> czy3;

    cout << "podaj ile jest paliwa: " << endl;
    cin >> paliwo;
    motor1.setPaliwo(paliwo);

    cout << "tankujesz: ";
    cin >> tankowanie;

    motor1.setCzyDwusuw(czy1);
    if (motor1.getCzyDwusuw())
    {
        cout << "Dwusuw" << endl;
    }
    else
    {
        cout << "nie Dwusuw" << endl;
    }

    motor1.setCzyCross(czy2);
    if (motor1.getCzyCross())
    {
        cout << "cross" << endl;
    }
    else
    {
        cout << "nie cross" << endl;
    }

    cout << "pojemnosc:" << motor1.getPojemnosc() << endl;

    if (motor1.czyTymPojade())
    {
        cout << "pojedziesz" << endl;
    }
    else
    {
        cout << "nie pojedziesz" << endl;
    }
    int xd = motor1.getPojemnosc();
    if (motor1.czySieNadaje(xd))
    {
        cout << "nadaje sie" << endl;
    }
    else
    {
        cout << "nie nadaje sie" << endl;
    }
    motor1.tankuj(tankowanie);
    return 0;
}