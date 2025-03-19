#include <iostream>
#include <string>

/************************************************
 klasa: Note
 opis: Klasa reprezentujaca notatke
 pola:
     - noteCounter: statyczny licznik utworzonych notatek
     - id: unikalny identyfikator notatki
     - title: tytul notatki
     - content: tresc notatki
 autor: ee-informatyk.pl
************************************************/

class Note
{
private:
    static int noteCounter; // Statyczny licznik notatek
    int id; // Unikalny identyfikator notatki
protected:
    std::string title; // Tytul notatki
    std::string content; // Tresc notatki

public:
    // Konstruktor
    Note(const std::string& title, const std::string& content)
    {
        noteCounter++;
        id = noteCounter;
        this->title = title;
        this->content = content;
    }

    // Metoda wyswietlajaca tytul i tresc notatki
    void DisplayNote() const
    {
        std::cout << "Tytul: " << title << "\nTresc: " << content << std::endl;
    }

    // Metoda diagnostyczna
    void DiagnosticInfo() const
    {
        std::cout << "ID: " << id << "; Tytul: " << title << "; Tresc: " << content << "; Licznik: " << noteCounter << std::endl;
    }
};

// Inicjalizacja statycznego licznika notatek
int Note::noteCounter = 0;

int main()
{
    // Testowanie aplikacji
    std::cout << "Tworzenie pierwszej notatki..." << std::endl;
    Note firstNote("Zakupy", "Kupic chleb, mleko, jajka");
    firstNote.DisplayNote();
    firstNote.DiagnosticInfo();

    std::cout << "\nTworzenie drugiej notatki..." << std::endl;
    Note secondNote("Praca domowa", "Napisac esej na temat historii Polski");
    secondNote.DisplayNote();
    secondNote.DiagnosticInfo();

    std::cout << "\nNacisnij Enter, aby zakonczyc...";
    std::cin.get();

    return 0;
}