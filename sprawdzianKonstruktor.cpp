// Stwórz klasę „książka” zawierającą:
// – pola prywatne: tytuł, autor, rok wydania
// – settery i gettery do prywatnych pól
// – metoda wypisująca informację o książce
// – lista użyta do inicjalizacji
// – konstruktor parametryczny i kopiujący
// – pole statyczne zliczające liczbę książek
// – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego
// – W programie użyty konstruktor parametryczny i kopiujący
// -W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt
// w którym rok wydania jest pomniejszony o 100. Pobierz parametr i zwróć wartość tak by użyć jak najmniej pamieci.
#include <iostream>
using namespace std;

class Ksiazka
{
private:
    string tytul{};
    string autor{};
    int rokWydania{};

public:
    static int liczbaKsiazek;
    Ksiazka(string podanyTytul, string podanyAutor, int podanyRokWydania)
        : tytul(podanyTytul), autor(podanyAutor), rokWydania(podanyRokWydania) { liczbaKsiazek++; }
    Ksiazka(Ksiazka &wzorzec)
        : tytul(wzorzec.tytul), autor(wzorzec.autor), rokWydania(wzorzec.rokWydania) { liczbaKsiazek++; }
    Ksiazka() { tytul = "", autor = "", rokWydania = 0; }
    Ksiazka(string podanyTytul, string podanyAutor) : Ksiazka() { liczbaKsiazek++; }
    void setTytul(string PodanyTytul)
    {
        tytul = PodanyTytul;
    }
    void setAutor(string PodaneAutor)
    {
        autor = PodaneAutor;
    }
    void setRokWydania(int PodaneRok)
    {
        rokWydania = PodaneRok;
    }
    string getTytul()
    {
        return tytul;
    }
    string getAutor()
    {
        return autor;
    }
    int getRokWydania()
    {
        return rokWydania;
    }
    void display() const
    {
        cout << "Tytuł: " << tytul << endl;
        cout << "Autor: " << autor << endl;
        cout << "Rok wydania: " << rokWydania << endl;
        cout << "Liczba ksiazek: " << liczbaKsiazek << endl;
    }
    static Ksiazka pomniejszRokWydania(const Ksiazka &podanaKsiazka)
    {
        return Ksiazka(podanaKsiazka.autor, podanaKsiazka.tytul, podanaKsiazka.rokWydania - 100);
    }
};
int Ksiazka::liczbaKsiazek = 0;
int main()
{
    Ksiazka ksiazka("Tytul", "Autor", 2000);
    ksiazka.display();
    Ksiazka ksiazka2(ksiazka);
    ksiazka2.display();
    Ksiazka ksiazka3 = Ksiazka::pomniejszRokWydania(ksiazka);
    ksiazka3.display();
    return 0;
}
