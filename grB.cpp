#include <iostream>
using namespace std;

class Osoba
{
private:
    string nazwisko{};

public:
    string imie{};
    Osoba(string Imie, string Nazwisko) : imie(Imie), nazwisko(Nazwisko) {}
    void setImie(string pImie)
    {
        imie = pImie;
    }
    void setNazwisko(string pNazwisko)
    {
        nazwisko = pNazwisko;
    }
    string getNazwisko() const { return nazwisko; }
};

class KlasaPochodna : private Osoba
{
public:
    KlasaPochodna(string Imie, string Nazwisko) : Osoba(Imie, Nazwisko) {}

    void setImie(string pImie)
    {
        Osoba::setImie(pImie);
    }
    void setNazwisko(string pNazwisko)
    {
        Osoba::setNazwisko(pNazwisko);
    }
    void display() const
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << getNazwisko() << endl;
    }
};

int main()
{
    KlasaPochodna KlasaPochodna("adam", "marek");
    KlasaPochodna.display();
    KlasaPochodna.setNazwisko("nazwisko po zmianie");
    KlasaPochodna.setImie("imie po zmianie");
    KlasaPochodna.display();
    return 0;
}