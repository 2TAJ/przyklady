#include <iostream>
using namespace std;
// Definicja klasy Uczen:
class Uczen
{
public:
    string imie;
    string nazwisko;
    int klasa;
    string grupa;
    int nrWdzienniku;
    struct data
    {
        int rokUrodzenia;
        int miesiac;
        int dzien;
    };
    data dataUrodzenia;

    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << klasa << endl;
        cout << "Grupa: " << grupa << endl;
        cout << "Nr w dzienniku: " << nrWdzienniku << endl;
        cout << "Data urodzenia: " << dataUrodzenia.rokUrodzenia << " " << dataUrodzenia.miesiac << " " << dataUrodzenia.dzien << endl;
    }
};
int main()
{
    // Deklaracja zmiennej wskaźnikowej (wskaźnika) w_Uczen na dowolny obiekt należący do typu Uczen:
    Uczen *w_Uczen;
    // Utworzenie obiektu typu Uczen (instancji klasy Uczen) wskazywanego przez wskaźnik w_Uczen:
    w_Uczen = new Uczen();
    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    w_Uczen->imie = "Jan";
    w_Uczen->nazwisko = "Kowalski";
    w_Uczen->klasa = 4;
    w_Uczen->grupa = "A";
    w_Uczen->nrWdzienniku = 2;
    w_Uczen->dataUrodzenia.rokUrodzenia = 2006;
    w_Uczen->dataUrodzenia.miesiac = 9;
    w_Uczen->dataUrodzenia.dzien = 1;
    // Prezentacja danych zapisanych w zmiennych członkowskich obiektu na ekranie monitora:
    w_Uczen->wyswietlDane();
    // Usunięcie (zniszczenie) obiektu wskazywanego przez wskaźnik w_Uczen:
    delete w_Uczen;
    return 0;
}