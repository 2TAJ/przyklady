// #include <iostream>
// using namespace std;

// class Pracownik
// {
// private:
//     string imie{};
//     string nazwisko{};

// public:
//     // Konstruktor klasy bazowej
//     Pracownik(string Imie, string Nazwisko) : imie(Imie), nazwisko(Nazwisko) {}

//     // Gettery dla pól prywatnych
//     string getImie() const { return imie; }
//     string getNazwisko() const { return nazwisko; }

//     // Settery dla pól prywatnych
//     void setImie(const string &Imie) { imie = Imie; }
//     void setNazwisko(const string &Nazwisko) { nazwisko = Nazwisko; }
// };

// class Nazwa : public Pracownik
// {
// public:
//     // Konstruktor klasy pochodnej
//     Nazwa(string Imie, string Nazwisko) : Pracownik(Imie, Nazwisko) {}

//     // Metoda do wyświetlania danych
//     void display() const
//     {
//         cout << "Imie: " << getImie() << endl;
//         cout << "Nazwisko: " << getNazwisko() << endl;
//     }

//     // Settery dla pól klasy pochodnej
//     void setImie(const string &Imie) { Pracownik::setImie(Imie); }
//     void setNazwisko(const string &Nazwisko) { Pracownik::setNazwisko(Nazwisko); }
// };

// int main()
// {

//     // Tworzenie obiektu klasy pochodnej
//     Nazwa nazwa("Pawel", "Kaczka");

//     // Wyświetlanie początkowych danych
//     nazwa.display();

//     // Edytowanie danych
//     nazwa.setImie("Hubert");
//     nazwa.setNazwisko("Bambik");

//     // Wyświetlanie zaktualizowanych danych
//     nazwa.display();

//     return 0;
// }

// Gr. A
//  ||
//  \/

#include <iostream>
using namespace std;

class Pracownik
{
protected:
    string imie{};
    string nazwisko{};

public:
    // Konstruktor klasy bazowej
    Pracownik(string Imie, string Nazwisko) : imie(Imie), nazwisko(Nazwisko) {}

    // Gettery dla pól prywatnych
    string getImie() const { return imie; }
    string getNazwisko() const { return nazwisko; }

    // Settery dla pól prywatnych
    void setImie(const string &Imie) { imie = Imie; }
    void setNazwisko(const string &Nazwisko) { nazwisko = Nazwisko; }
};

class Nazwa : private Pracownik
{
public:
    // Konstruktor klasy pochodnej
    Nazwa(string Imie, string Nazwisko) : Pracownik(Imie, Nazwisko) {}

    // Metoda do wyświetlania danych
    void display() const
    {
        cout << "Imie: " << getImie() << endl;
        cout << "Nazwisko: " << getNazwisko() << endl;
    }

    // Settery dla pól klasy pochodnej
    void setImie(const string &Imie) { Pracownik::setImie(Imie); }
    void setNazwisko(const string &Nazwisko) { Pracownik::setNazwisko(Nazwisko); }
};

int main()
{

    // Tworzenie obiektu klasy pochodnej
    Nazwa nazwa("Pawel", "Kaczka");

    // Wyświetlanie początkowych danych
    nazwa.display();

    // Edytowanie danych
    nazwa.setImie("Hubert");
    nazwa.setNazwisko("Bambik");

    // Wyświetlanie zaktualizowanych danych
    nazwa.display();

    return 0;
}
