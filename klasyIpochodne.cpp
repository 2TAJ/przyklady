#include <iostream>
using namespace std;
class Imie
{
public:
    string imie;
    void zwrocDane();
};
class Nazwisko
{
public:
    string nazwisko;
    void zwrocDane();
};
class Klasa
{
public:
    string klasa;
    void zwrocDane();
};
class Przedmiot
{
public:
    string przedmiot;
    void zwrocDane();
};
class Pracownik : public Imie, public Nazwisko
{
};
class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
{
};
class Wychowawca : public Imie, public Nazwisko, public Przedmiot, public Klasa
{
};

void Imie::zwrocDane()
{
    cout << "Imię: " << imie << endl;
}
void Nazwisko::zwrocDane()
{
    cout << "Nazwisko: " << nazwisko << endl;
}
void Klasa::zwrocDane()
{
    cout << "Klasa: " << klasa << endl;
}
void Przedmiot::zwrocDane()
{
    cout << "Przedmiot: " << przedmiot << endl;
}

int main()
{

    Imie *w_imie;
    Pracownik pracownik1;
    w_imie = &pracownik1;
    w_imie->imie = "Jan";
    w_imie->zwrocDane();
    return 0;
}