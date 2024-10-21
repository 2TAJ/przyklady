// #include <iostream>
// #include <string>

// using namespace std;

// class Osoba
// {
// private:
//     int id;
//     string imie;

// public:
//     static int liczbaInstancji;

//     Osoba()
//     {
//         id = 0;
//         imie = "";
//         liczbaInstancji++;
//     }

//     Osoba(int identyfikator, string imieOsoby)
//     {
//         id = identyfikator;
//         imie = imieOsoby;
//         liczbaInstancji++;
//     }
//     void wypisz(string argument)
//     {
//         if (imie == "")
//         {
//             cout << "Brak danych" << endl;
//         }
//         else
//         {
//             cout << "Czesc " << argument << ", mam na imie " << imie << endl;
//         }
//     }
//     void wypiszLiczbeInstancji()
//     {
//         cout << "Liczba instancji: " << liczbaInstancji << endl;
//     }
// };

// int Osoba::liczbaInstancji = 0;
// int main()
// {
//     Osoba osoba1;
//     Osoba osoba2(0, "Dominik");
//     osoba1.wypisz("Imie1");
//     osoba1.wypiszLiczbeInstancji();
//     osoba2.wypisz("Imie2");
//     osoba2.wypiszLiczbeInstancji();
//     return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// class Osoba
// {
// private:
//     int id;
//     string imie;

// public:
//     static int liczbaInstancji;

//     Osoba()
//     {
//         id = 0;
//         imie = "";
//         liczbaInstancji++;
//     }

//     Osoba(int identyfikator, string imieOsoby)
//     {
//         id = identyfikator;
//         imie = imieOsoby;
//         liczbaInstancji++;
//     }
//     void wypisz(string argument)
//     {
//         if (imie == "")
//         {
//             cout << "Brak danych" << endl;
//         }
//         else
//         {
//             cout << "Czesc " << argument << ", mam na imie " << imie << endl;
//         }
//     }
//     void wypiszLiczbeInstancji()
//     {
//         cout << "Liczba instancji: " << liczbaInstancji << endl;
//     }
//     void setImie(string podaneImie)
//     {
//         imie = podaneImie;
//     }
//     string getImie()
//     {
//         return imie;
//     }
// };

// int Osoba::liczbaInstancji = 0;
// int main()
// {
//     Osoba osoba1;
//     Osoba osoba2(0, "Dominik");
//     string podaneImie, podaneImie2;
//     osoba1.wypisz("Imie1");
//     osoba1.wypiszLiczbeInstancji();
//     cout << "podaj imie\n";
//     cin >> podaneImie;
//     cout << "podaj drugie imie\n";
//     cin >> podaneImie2;
//     osoba2.setImie(podaneImie2);
//     osoba2.wypisz(podaneImie);
//     osoba2.wypiszLiczbeInstancji();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;
    Osoba()
    {
        liczbaInstancji++;
        id = 0;
        imie = "";
    }
    Osoba(const Osoba &wzorzec)
    {
        liczbaInstancji++;
        id = wzorzec.id;
        imie = wzorzec.imie;
        cout << "Konstruktor kopiujacy" << " " << id << " " << imie << endl;
    }
    Osoba(string imieP, int idP)
    {
        imie = imieP;
        id = idP;
    }
    void getId(int &idObiektu)
    {
        idObiektu = id;
    }
    void getImie(string &imiedObiektu)
    {
        imiedObiektu = imie;
    }
    void setId(int idNowe)
    {
        id = idNowe;
    }
    void setImie(string imieNowe)
    {
        imie = imieNowe;
    }
    void powitanie(string imieP)
    {
        if (imie == "")
        {
            cout << "brak danych";
        }
        else
        {
            cout << "czesc " << imieP << " mam na imie " << imie;
        }
    }
};
int Osoba::liczbaInstancji = 0;

int main()
{
    Osoba person, personess;
    int idKopiujacego, imieKopiujacego;
    person.powitanie("bob");
    person.setImie("Stefan");
    cout << endl;
    person.powitanie("bob");
    cout << endl;
    cout << "Liczba instancji: " << person.liczbaInstancji << endl;
    Osoba person1(person);
    cout << "Liczba instancji: " << person.liczbaInstancji << endl;
    return 0;
}