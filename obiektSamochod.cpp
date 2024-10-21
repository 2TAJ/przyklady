#include <iostream>
using namespace std;
class Auto
{
private:
    int cena;

public:
    string marka;
    string model;
    int rokProdukcji;
    string nrRejestracyjny;
    void setCena(int podanaCena)
    {
        cena = podanaCena;
    };
    int getCena()
    {
        return cena;
    }
    double pobierzCene() const
    {
        return cena;
    }
};

Auto *pobierzDane(Auto *podane)

{
    int podanaCena;
    cout << "Podaj marke";
    cin >> podane->marka;
    cout << "Podaj model";
    cin >> podane->model;
    cout << "Podaj rok produkcji";
    cin >> podane->rokProdukcji;
    cout << "Podaj numer rejestracyjny";
    cin >> podane->nrRejestracyjny;
    cout << "Podaj cene";
    cin >> podanaCena;
    podane->setCena(podanaCena);
    return podane;
}
Auto *pobierzDane(Auto *);
Auto *porownajSamochody(Auto *auto1, Auto *auto2)
{
    return (auto1->pobierzCene() > auto2->pobierzCene()) ? auto1 : auto2;
}
int main()
{
    Auto *auto1 = new Auto();
    Auto *auto2 = new Auto();
    auto1 = pobierzDane(auto1);
    auto2 = pobierzDane(auto2);
    Auto *drozszy = porownajSamochody(auto1, auto2);
    cout << "Drozszy jest: \n";
    cout << drozszy->marka << " " << drozszy->model << " " << drozszy->rokProdukcji << " " << drozszy->nrRejestracyjny;
    delete auto1;
    delete auto2;
    return 0;
}
void porownajCene(Auto &a1, Auto &a2)
{
    if (a1.getCena() > a2.getCena())
    {
        cout << "1 auto jest drozsze\n";
    }
    else if (a1.getCena() < a2.getCena())
    {
        cout << "2 auto jest drozsze\n";
    }
    else
    {
        cout << "auta maja taka sama cene\n";
    }
}

//na stosie
//      ||
//      \/

// #include <iostream>
// using namespace std;

// class Auto {
// private:
//     int cena;

// public:
//     string marka;
//     string model;
//     int rokProdukcji;
//     string nrRejestracyjny;

//     void setCena(int podanaCena) {
//         cena = podanaCena;
//     }

//     int getCena() const {
//         return cena;
//     }

//     double pobierzCene() const {
//         return cena;
//     }
// };

// void pobierzDane(Auto& podane) {
//     int podanaCena;

//     cout << "Podaj marke: ";
//     cin >> podane.marka;
//     cout << "Podaj model: ";
//     cin >> podane.model;
//     cout << "Podaj rok produkcji: ";
//     cin >> podane.rokProdukcji;
//     cout << "Podaj numer rejestracyjny: ";
//     cin >> podane.nrRejestracyjny;
//     cout << "Podaj cene: ";
//     cin >> podanaCena;
//     podane.setCena(podanaCena);
// }

// Auto* porownajSamochody(Auto& auto1, Auto& auto2) {
//     return (auto1.pobierzCene() > auto2.pobierzCene()) ? &auto1 : &auto2;
// }

// void porownajCene(Auto& a1, Auto& a2) {
//     if (a1.getCena() > a2.getCena()) {
//         cout << "1 auto jest drozsze\n";
//     } else if (a1.getCena() < a2.getCena()) {
//         cout << "2 auto jest drozsze\n";
//     } else {
//         cout << "auta maja taka sama cene\n";
//     }
// }

// int main() {
//     Auto auto1, auto2;

//     pobierzDane(auto1);
//     pobierzDane(auto2);
    
//     Auto* drozszy = porownajSamochody(auto1, auto2);
    
//     cout << "Drozszy jest: \n";
//     cout << drozszy->marka << " " << drozszy->model << " " << drozszy->rokProdukcji << " " << drozszy->nrRejestracyjny << endl;

//     return 0;
// }
