#include <iostream>
using namespace std;

class Motor
{
    bool czyDwusuw;
    bool czyCross;
    int pojemnosc = 350;
    float pojemnoscBaku;
    float ilePaliwa;

public:
    string kolor;
    bool czyLyse;
    Motor(bool dwusow, bool cross, int poj, float bak, float paliwo, bool opony, string kolorU)
    {
        czyDwusuw = dwusow;
        czyCross = cross;
        pojemnosc = poj;
        pojemnoscBaku = bak;
        setPaliwo(paliwo);
        czyLyse = opony;
        kolor = kolorU;
    }
    Motor()
    {
        czyDwusuw = 1;
        czyCross = 1;
        pojemnoscBaku = 10;
        ilePaliwa = 0;
        czyLyse = 0;
        kolor = "czarny";
    };
    friend void ktoryLepszy(Motor, Motor);
    void tankuj(float paliwo)
    {
        if (ilePaliwa + paliwo >= pojemnoscBaku)
        {
            ilePaliwa = pojemnoscBaku;
            cout << "Do " << pojemnoscBaku << " sie dalo\n";
        }
        else
        {
            ilePaliwa += paliwo;
        }
    }
    void setPaliwo(float paliwo)
    {
        if (paliwo >= pojemnoscBaku)
        {
            cout << "Max to " << pojemnoscBaku << endl;
            ilePaliwa = pojemnoscBaku;
        }
        else
        {
            ilePaliwa = paliwo;
        }
    }
    void setCzyDwusuw(bool czyJest)
    {
        czyDwusuw = czyJest;
    }
    void setCzyCross(bool czyJest)
    {
        czyCross = czyJest;
    }
    void setPojemnosc(int nowaPojemnosc)
    {
        pojemnosc = nowaPojemnosc;
    }
    void setPojemnoscBaku(float bak)
    {
        if (bak > 20)
        {
            cout << "Bez przesady, bedzie 20\n";
            pojemnoscBaku = 20;
        }
        else
        {
            pojemnoscBaku = bak;
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
    int getPojemnosc()
    {
        return pojemnosc;
    }
    bool getCzyTymPojade()
    {
        if (kolor == "czerwony" && czyDwusuw && !czyLyse && ilePaliwa > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool getCzyNadejeSie(int pojemnoscKtoraSieNadaje)
    {
        if (pojemnosc >= pojemnoscKtoraSieNadaje)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void ktoryLepszy(Motor motor1, Motor motor2)
{
    int punktyMotor1 = 0, punktyMotor2 = 0;
    if (motor1.kolor == "czerwony" && motor2.kolor != "czerwony")
    {
        cout << "Motor 1 jest lepszy bo czerwony\n";
    }
    else if (motor1.kolor != "czerwony" && motor2.kolor == "czerwony")
    {
        cout << "Motor 2 jest lepszy bo czerwony\n";
    }
    else
    {
        if (motor1.czyCross == 1)
        {
            punktyMotor1++;
        }
        if (motor2.czyCross == 1)
        {
            punktyMotor2++;
        }
        if (motor1.czyDwusuw == 1)
        {
            punktyMotor1++;
        }
        if (motor2.czyDwusuw == 1)
        {
            punktyMotor2++;
        }
        if (motor1.czyLyse == 0)
        {
            punktyMotor1++;
        }
        if (motor2.czyLyse == 0)
        {
            punktyMotor2++;
        }
        if (motor1.ilePaliwa > motor2.ilePaliwa)
        {
            punktyMotor1++;
        }
        if (motor1.ilePaliwa < motor2.ilePaliwa)
        {
            punktyMotor2++;
        }
        if (motor1.pojemnosc > motor2.pojemnosc)
        {
            punktyMotor1++;
        }
        if (motor1.pojemnosc < motor2.pojemnosc)
        {
            punktyMotor2++;
        }

        if (punktyMotor1 > punktyMotor2)
        {
            cout << "Motor 1 jest lepszy \n";
        }
        else if (punktyMotor2 > punktyMotor1)
        {
            cout << "Motor 2 jest lepszy \n";
        }
        else
        {
            cout << "remis \n";
        }
    }
}
int main()
{
    float paliwo;
    string kolor;
    cout << "Napisz 1 jesli true i 0 jesli false\n";
    Motor motor;
    bool wartosciLogiczne;
    int liczbyCalkowite;
    cout << "czy to cross? \n";
    cin >> wartosciLogiczne;
    motor.setCzyCross(wartosciLogiczne);
    cout << "czy to dwusuw? \n";
    cin >> wartosciLogiczne;
    motor.setCzyDwusuw(wartosciLogiczne);
    cout << "podaj pojemnosc \n";
    cin >> liczbyCalkowite;
    motor.setPojemnosc(liczbyCalkowite);
    cout << "ile w baku mozesz miec \n";
    cin >> paliwo;
    motor.setPojemnoscBaku(paliwo);
    cout << "Podaj ile masz teraz w baku\n";
    motor.setPaliwo(paliwo);
    cout << "ile paliwa nalejesz \n";
    cin >> paliwo;
    motor.tankuj(paliwo);
    cout << "Czy masz lyse \n";
    cin >> wartosciLogiczne;
    motor.czyLyse = wartosciLogiczne;
    cout << "jaki kolor? \n";
    cin >> kolor;
    motor.kolor = kolor;
    cout << "Czy tym pojade? \n";
    if (motor.getCzyTymPojade())
    {
        cout << "tak";
    }
    else
    {
        cout << "nie";
    }
    cout << endl;
    cout << "Podaj pojemnosc od ktorej wsiadasz na motor\n";
    cin >> liczbyCalkowite;
    cout << "Czy sie nadaje? \n";
    if (motor.getCzyNadejeSie(liczbyCalkowite))
    {
        cout << "tak" << endl;
    }
    else
    {
        cout << "nie" << endl;
    }
    bool dwusuw, cross, opony;
    int pojemnosc, bak;

    cout << "teraz drugi motor ";
    cout << "czy to cross? \n";
    cin >> cross;
    cout << "czy to dwusuw? \n";
    cin >> dwusuw;
    cout << "podaj pojemnosc \n";
    cin >> pojemnosc;
    cout << "ile w baku mozesz miec \n";
    cin >> bak;
    cout << "Podaj ile masz teraz w baku\n";
    cin >> paliwo;
    cout << "Czy masz lyse \n";
    cin >> opony;
    cout << "jaki kolor? \n";
    cin >> kolor;
    Motor motor2(dwusuw, cross, pojemnosc, bak, paliwo, opony, kolor);
    cout << "ile paliwa nalejesz \n";
    cin >> paliwo;
    motor2.tankuj(paliwo);
    cout << "Czy tym pojade ";
    if (motor.getCzyTymPojade())
    {
        cout << "tak";
    }
    else
    {
        cout << "nie";
    }
    cout << endl;
    cout << "Podaj pojemnosc od ktorej wsiadasz na motor\n";
    cin >> liczbyCalkowite;
    cout << "Czy sie nadaje? \n";
    if (motor.getCzyNadejeSie(liczbyCalkowite))
    {
        cout << "tak" << endl;
    }
    else
    {
        cout << "nie" << endl;
    }
    ktoryLepszy(motor, motor2);
    return 0;
}