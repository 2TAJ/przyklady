#include <iostream>
using namespace std;

class motor
{
private:
    bool czyDwusuw, czyCross;
    int pojemnosc;
    int pojemnoscBaku;

public:
    motor()
    {
        czyDwusuw = true;
        czyCross = true;
        pojemnosc = 300;
        pojemnoscBaku = 20;
        kolor = "czerwony";
        czyLyse = true;
        ilePaliwa = 1;
    };
    friend void porownajMotory(motor, motor);
    string kolor;
    bool czyLyse;
    float ilePaliwa;
    void tankuj(float ilosc)
    {
        ilePaliwa += ilosc;
        if (ilePaliwa > pojemnoscBaku)
        {
            ilePaliwa = pojemnoscBaku;
            cout << "Po tankowaniu masz tyle paliwa: " << ilePaliwa << endl;
        }
        else
        {
            cout << "Po tankowaniu masz tyle paliwa: " << ilePaliwa << endl;
        }
    }
    int porownajMotory(motor motor1, motor motor2)
    {
        int wynik1, wynik2;
        if (motor1.czyDwusuw > motor2.czyDwusuw)
        {
            wynik2++;
            return wynik1;
        }
        else if (motor1.czyDwusuw < motor2.czyDwusuw)
        {
            wynik1++;
            return wynik2;
        }
        
        // if (motor1.czyCross > motor2.czyCross)
        // {
        //     wynik1++;
        // }
        // else if (motor1.czyCross < motor2.czyCross)
        // {
        //     wynik2++;
        // }
        // if (motor1.pojemnosc > motor2.pojemnosc)
        // {
        //     wynik1++;
        // }
        // else if (motor1.pojemnosc < motor2.pojemnosc)
        // {
        //     wynik2++;
        // }
        // if (wynik1 > wynik2)
        // {
        //     cout << "Motor 1 jest lepszy" << endl;
        // }
        // else if (wynik1 < wynik2)
        // {
        //     cout << "Motor 2 jest lepszy" << endl;
        // }
        // else if (wynik1 == wynik2)
        // {
        //     cout << "Motory sa takie same" << endl;
        // }
    }
    void setCzyDwusuw(char czy)
    {
        cout << "czy Dwusuw (podaj 't' jesli tak): ";
        cin >> czy;
        if (czy == 't')
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

        cout << "czy Cross: ";
        cin >> czy;
        if (czy == 't')
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
        cout << "podaj pojemnosc: " << endl;
        cin >> value;
        pojemnosc = value;
    }
    void setPaliwo(float value)
    {
        cout << "podaj ile jest paliwa: " << endl;
        cin >> value;
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
    motor motor2;
    int pojemnosc;
    int pojemnosc2;
    float tankowanie;
    float tankowanie2;
    float paliwo;
    float paliwo2;
    string kolor;
    string kolor2;
    char czy1, czy2, czy3;
    char czy4, czy5, czy6;
    motor1.setCzyDwusuw(czy1);
    motor1.setCzyCross(czy2);
    motor1.setPojemnosc(pojemnosc);

    cout << "podaj kolor: ";
    cin >> kolor;
    motor1.kolor = kolor;

    cout << "czy opony sa lyse: ";
    cin >> czy3;

    motor1.setPaliwo(paliwo);

    cout << "tankujesz: ";
    cin >> tankowanie;

    if (motor1.getCzyDwusuw())
    {
        cout << "Dwusuw" << endl;
    }
    else
    {
        cout << "nie Dwusuw" << endl;
    }

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
    int x = motor1.getPojemnosc();
    if (motor1.czySieNadaje(x))
    {
        cout << "nadaje sie" << endl;
    }
    else
    {
        cout << "nie nadaje sie" << endl;
    }
    motor1.tankuj(tankowanie);
    //
    motor2.setCzyDwusuw(czy4);
    motor2.setCzyCross(czy5);
    motor2.setPojemnosc(pojemnosc2);

    cout << "podaj kolor: ";
    cin >> kolor2;
    motor2.kolor = kolor2;

    cout << "czy opony sa lyse: ";
    cin >> czy6;

    motor2.setPaliwo(paliwo2);

    cout << "tankujesz: ";
    cin >> tankowanie2;

    if (motor2.getCzyDwusuw())
    {
        cout << "Dwusuw" << endl;
    }
    else
    {
        cout << "nie Dwusuw" << endl;
    }

    if (motor2.getCzyCross())
    {
        cout << "cross" << endl;
    }
    else
    {
        cout << "nie cross" << endl;
    }

    cout << "pojemnosc:" << motor2.getPojemnosc() << endl;

    if (motor2.czyTymPojade())
    {
        cout << "pojedziesz" << endl;
    }
    else
    {
        cout << "nie pojedziesz" << endl;
    }
    int x1 = motor2.getPojemnosc();
    if (motor2.czySieNadaje(x1))
    {
        cout << "nadaje sie" << endl;
    }
    else
    {
        cout << "nie nadaje sie" << endl;
    }
    motor2.tankuj(tankowanie2);
    return 0;
}