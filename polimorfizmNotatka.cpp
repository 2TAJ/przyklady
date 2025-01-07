#include <iostream>
using namespace std;

class Imie
{
public:
    string imie;
    virtual void zwrocDane();
};
class Nazwisko
{
public:
    string nazwisko;
    virtual void zwrocDane();
};
class Przedmiot
{
public:
    string przedmiot;
    virtual void zwrocDane();
};
class Klasa
{
public:
    string klasa;
    virtual void zwrocDane();
};
class Pracownik : public Imie, public Nazwisko
{
public:
    void zwrocDane();
};
class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
{
public:
    void zwrocDane();
};
class Wychowawca : public Imie, public Nazwisko, public Przedmiot, public Klasa
{
public:
    void zwrocDane();
};
void Imie::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Imie"
         << endl;
    cout << "Imię: " << imie << endl;
}
void Nazwisko::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Imie"
         << endl;
    cout << "Nazwisko: " << nazwisko << endl;
}
void Przedmiot::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Przedmiot"
         << endl;
    cout << "Przedmiot: " << przedmiot << endl;
}
void Klasa::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Klasa"
         << endl;
    cout << "Klasa: " << klasa << endl;
}
void Pracownik::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik"
         << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
}
void Nauczyciel::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel"
         << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
}
void Wychowawca::zwrocDane()
{
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca"
         << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
    cout << "Klasa:" << klasa << endl;
}
int main()
{
    //stos
    Imie *pointer;
    Pracownik pracownik1;
    // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
    pointer = &pracownik1;
    // Nadanie wartości zmiennym członkowskim obiektu pracownik1:
    pointer->imie = "Jan";
    // w_pracownik->nazwisko = "Kowalski";//nazwiska nie ma w klasie bazowej Imie i wskażnik go nie obsłuży
    // Wywołanie metody zwrocDane():
    pointer->zwrocDane(); // zostaje wywołana metoda z klasy bazowej Pracownik
    cout << endl;
    // Utworzenie obiektu pracownik2 jako instancji klasy //Nauczyciel:
    Nauczyciel pracownik2;
    pointer = &pracownik2;
    pointer->zwrocDane(); //:(  z klasy Pracownik  :(.
    return 0;
}