#include <iostream>
using namespace std;

struct czas
{
    int sekundy;
    int minuty;
    int godziny;
    int dni;
    int miesiace;
    int lata;
};

void obliczanieCzasu(int czasWDniach, czas &czas)
{
    int czasLata = 0;
    int czasMiesiace = 0;
    int czasDni = 0;
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;

    czasLata = czasWDniach / 360;
    czasWDniach = czasWDniach % 360;

    czasMiesiace = czasWDniach / 30;
    czasWDniach = czasWDniach % 30;

    czasDni = czasWDniach;

    czasGodziny = czasDni * 24;
    czasMinuty = czasGodziny * 60;
    czasSekundy = czasMinuty * 60;

    cout << "Lata: " << czasLata << endl;
    cout << "Miesiące: " << czasMiesiace << endl;
    cout << "Dni: " << czasDni << endl;
    cout << "Godziny: " << czasGodziny << endl;
    cout << "Minuty: " << czasMinuty << endl;
    cout << "Sekundy: " << czasSekundy << endl;

    czas.sekundy = czasSekundy;
    czas.minuty = czasMinuty;
    czas.godziny = czasGodziny;
    czas.dni = czasDni;
    czas.miesiace = czasMiesiace;
    czas.lata = czasLata;
}

void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
    nowyCzas.sekundy += staryCzas.sekundy;
    nowyCzas.minuty += staryCzas.minuty;
    nowyCzas.godziny += staryCzas.godziny;
    nowyCzas.dni += staryCzas.dni;
    nowyCzas.miesiace += staryCzas.miesiace;
    nowyCzas.lata += staryCzas.lata;

    nowyCzas.minuty += nowyCzas.godziny * 60;
    nowyCzas.godziny = nowyCzas.minuty / 60;
    nowyCzas.minuty = nowyCzas.minuty % 60;

    nowyCzas.dni += nowyCzas.miesiace * 30;
    nowyCzas.miesiace = nowyCzas.dni / 30;
    nowyCzas.dni = nowyCzas.dni % 30;

    nowyCzas.lata += nowyCzas.miesiace / 12;
    nowyCzas.miesiace = nowyCzas.miesiace % 12;
}

void wypisz(czas timex)
{
    cout << "Lata: " << timex.lata << endl;
    cout << "Miesiące: " << timex.miesiace << endl;
    cout << "Dni: " << timex.dni << endl;
    cout << "Godziny: " << timex.godziny << endl;
    cout << "Minuty: " << timex.minuty << endl;
    cout << "Sekundy: " << timex.sekundy << endl;
}

int main()
{
    int dniOdUzytkownika;
    czas staryCzas{0, 0, 0, 0, 0, 0}, nowyCzas;

    cout << "Podaj ilość dni: ";
    cin >> dniOdUzytkownika;

    obliczanieCzasu(dniOdUzytkownika, nowyCzas);
    dodajCzas(nowyCzas, staryCzas);
    wypisz(nowyCzas);

    return 0;
}

#include <iostream>
using namespace std;

struct czas
{
    int sekundy;
    int minuty;
    int godziny;
    int dni;
    int tygodnie;
    int miesiace;
    int lata;
};

void obliczanieCzasu(int czasWGodzinach, czas &czas)
{
    int czasLata = 0;
    int czasMiesiace = 0;
    int czasTygodnie = 0;
    int czasDni = 0;
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;

    czasLata = czasWGodzinach / (360 * 24);
    czasWGodzinach = czasWGodzinach % (360 * 24);

    czasMiesiace = czasWGodzinach / (30 * 24);
    czasWGodzinach = czasWGodzinach % (30 * 24);

    czasTygodnie = czasWGodzinach / (7 * 24);
    czasWGodzinach = czasWGodzinach % (7 * 24);

    czasDni = czasWGodzinach / 24;
    czasWGodzinach = czasWGodzinach % 24;

    czasGodziny = czasWGodzinach;

    czasMinuty = czasGodziny * 60;
    czasSekundy = czasMinuty * 60;

    cout << "Lata: " << czasLata << endl;
    cout << "Miesiące: " << czasMiesiace << endl;
    cout << "Tygodnie: " << czasTygodnie << endl;
    cout << "Dni: " << czasDni << endl;
    cout << "Godziny: " << czasGodziny << endl;
    cout << "Minuty: " << czasMinuty << endl;
    cout << "Sekundy: " << czasSekundy << endl;

    czas.sekundy = czasSekundy;
    czas.minuty = czasMinuty;
    czas.godziny = czasGodziny;
    czas.dni = czasDni;
    czas.tygodnie = czasTygodnie;
    czas.miesiace = czasMiesiace;
    czas.lata = czasLata;
}

void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
    nowyCzas.sekundy += staryCzas.sekundy;
    nowyCzas.minuty += staryCzas.minuty;
    nowyCzas.godziny += staryCzas.godziny;
    nowyCzas.dni += staryCzas.dni;
    nowyCzas.tygodnie += staryCzas.tygodnie;
    nowyCzas.miesiace += staryCzas.miesiace;
    nowyCzas.lata += staryCzas.lata;

    nowyCzas.minuty += nowyCzas.godziny * 60;
    nowyCzas.godziny = nowyCzas.minuty / 60;
    nowyCzas.minuty = nowyCzas.minuty % 60;

    nowyCzas.dni += nowyCzas.tygodnie * 7;
    nowyCzas.tygodnie = nowyCzas.dni / 7;
    nowyCzas.dni = nowyCzas.dni % 7;

    nowyCzas.tygodnie += nowyCzas.miesiace * 4;
    nowyCzas.miesiace = nowyCzas.tygodnie / 4;
    nowyCzas.tygodnie = nowyCzas.tygodnie % 4;

    nowyCzas.miesiace += nowyCzas.lata * 12;
    nowyCzas.lata = nowyCzas.miesiace / 12;
    nowyCzas.miesiace = nowyCzas.miesiace % 12;
}

void wypisz(czas timex)
{
    cout << "Lata: " << timex.lata << endl;
    cout << "Miesiące: " << timex.miesiace << endl;
    cout << "Tygodnie: " << timex.tygodnie << endl;
    cout << "Dni: " << timex.dni << endl;
    cout << "Godziny: " << timex.godziny << endl;
    cout << "Minuty: " << timex.minuty << endl;
    cout << "Sekundy: " << timex.sekundy << endl;
}

int main()
{
    int godzinyOdUzytkownika;
    czas staryCzas{0, 0, 0, 0, 0, 0, 0}, nowyCzas;

    cout << "Podaj ilość godzin: ";
    cin >> godzinyOdUzytkownika;

    obliczanieCzasu(godzinyOdUzytkownika, nowyCzas);
    dodajCzas(nowyCzas, staryCzas);
    wypisz(nowyCzas);

    return 0;
}
