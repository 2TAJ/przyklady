#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    Pracownik(string imie_p, string nazwisko_p) : imie{imie_p}, nazwisko{nazwisko_p} {}
};

class Dyrektor : public Pracownik
{
    long long poziom_cwela;
};

class Nauczyciel : public Pracownik
{
public:
    long poziom_nieuka;
    Nauczyciel(string imie_p, string nazwisko_p, int poziom) : Pracownik(imie_p, nazwisko_p) { poziom_nieuka = poziom; }
};

class Sekretarka : public Pracownik
{
    int poziom_niekompetencji;
};

class Wychowawca : public Nauczyciel
{
    int poziom_czlowieka;

public:
    void display()
    {
        cout << "Imie " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "poziom nieuka " << poziom_nieuka << endl;
        cout << "poziom czlowieka " << poziom_czlowieka;
    }
    Wychowawca(string imie_p, string nazwisko_p, int poziom, int poziom_cz) : Nauczyciel(imie_p, nazwisko_p, poziom) { poziom_czlowieka = poziom_cz; }
};

int main()
{
    Wychowawca wychowawca1("bob", "the bill", 15, 12);
    wychowawca1.display();
    return 0;
}