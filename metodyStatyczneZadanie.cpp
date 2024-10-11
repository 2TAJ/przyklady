#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik
{
    // Deklaracja prywatnej zmiennej członkowskiej statycznej o nazwie s_szkola:
    static string s_szkola;
    static string s_stanowisko;

public:
    // Deklaracje zmiennych członkowskich instancyjnych:
    string imie;
    string nazwisko;

    // Prototyp metody statycznej s_zwrocSzkola():
    static string s_zwrocSzkola();
    static string s_zwrocStanowisko();
    // Definicja metody statycznej s_ustawSzkola():
    static void s_ustawSzkola(string pSzkola)
    {
        s_szkola = pSzkola;
    }
    static void s_ustawStanowisko(string pStanowisko)
    {
        s_stanowisko = pStanowisko;
    }

    // Definicja metody instancyjnej wyswietlDane():
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Szkoła :" << s_szkola << endl;
        cout << " Stanowisko " << s_stanowisko << endl;
    }
};
// Inicjalizacja zmiennej klasowej s_szkola:
string Pracownik::s_szkola = "Technikum Informatyczne";
string Pracownik::s_stanowisko = " Nauczyciel";
// Definicja metody statycznej s_pobierzSzkola():
string Pracownik::s_zwrocStanowisko()
{
    return s_stanowisko;
}
string Pracownik::s_zwrocSzkola()
{
    return s_szkola;
}
// PROGRAM GŁÓWNY
int main()
{
    // Utworzenie obiektu pracownik1:
    Pracownik pracownik1;
    // Nadanie wartości zmiennym członkowskim instancyjnym obiektu pracownik1:
    pracownik1.imie = "Jan";
    pracownik1.nazwisko = "Kowalski";
    cout << "Dane pracownika: " << endl;
    // Odwołanie się do zmiennych instancyjnych obiektu pracownik1:

    pracownik1.wyswietlDane();

    // Odwołanie się do zmiennej klasowej s_szkola za pośrednictwem metody statycznej s_pobierzSzkola():

    // Utworzenie obiektu pracownik2:
    Pracownik pracownik2;
    // Nadanie wartości zmiennym instancyjnym obiektu pracownik2:
    pracownik2.imie = "Adam";
    pracownik2.nazwisko = "Nowak";
    // Zmiana wartości zmiennej klasowej s_szkola za pośrednictwem metody statycznej s_ustawSzkola():
    Pracownik::s_ustawSzkola("Technikum Elektroniczne");
    // Pracownik::s_ustawStanowisko("Jakies stanowisko");
    pracownik2.wyswietlDane();
    return 0;
}