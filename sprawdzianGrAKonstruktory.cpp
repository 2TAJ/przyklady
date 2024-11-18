// Grupa:A
// W klasie bazowej jedna wlasność ma
// być dostępna w programie bezposrednio,
// a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.
// W klasie pochodnej odziedziczone własności mają być protected.
// Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.
#include <iostream>
using namespace std;

class Osoba
{
protected:
    string nazwisko{};

public:
    string imie{};
    Osoba(string Imie, string Nazwisko) : imie(Imie), nazwisko(Nazwisko) {}
    void setImie(string PodaneImie)
    {
        imie = PodaneImie;
    }
    void setNazwisko(string PodaneNazwisko)
    {
        nazwisko = PodaneNazwisko;
    }
};

class OsobaPochodna : protected Osoba
{
public:
    OsobaPochodna(string Imie, string Nazwisko) : Osoba(Imie, Nazwisko) {}
    void display() const
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
    void setImie(string PodaneImie)
    {
        Osoba::setImie(PodaneImie);
    }
    void setNazwisko(string PodaneNazwisko)
    {
        Osoba::setNazwisko(PodaneNazwisko);
    }
};

int main()
{
    OsobaPochodna OsobaPochodna("Dominik", "Burda");
    OsobaPochodna.display(); // przed
    OsobaPochodna.setImie("zmienione imie");
    OsobaPochodna.setNazwisko("zmienione nazwisko");
    OsobaPochodna.display(); // po
    return 0;
}
