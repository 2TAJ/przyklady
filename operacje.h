#include "operacje.cpp"
    struct Osoba;
    void wypisz(Osoba *osoby, int dlugosc);
    void wypiszJednaOsobe(Osoba osoba);
    int wczytajDlugosc();
    void wczytaj(Osoba *osoby);
    void zapisz(Osoba *osoby, int dlugosc);
    int najwiekszeId(Osoba *osoby, int dlugosc);
    int znajdzPoId(Osoba *osoby, int dlugosc, int id);
    bool porownajNapisy(string napis1, string napis2);
    void sortujPoWieku(Osoba *osoby, int dlugosc);
    void sortujPoNumerzeButa(Osoba *osoby, int dlugosc);
    void sortujPoImieniu(Osoba *osoby, int dlugosc);
    void sortujPoNazwisku(Osoba *osoby, int dlugosc);
    void sortuj();
    void przeszukaj();
    void dodajOsobe();
    void zmodyfikujOsobe();
    void usunOsobe();