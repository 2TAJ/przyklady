#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ZmienNapis(const string& tekst) 
{
    size_t spacja = tekst.find(' ');
    if (spacja == string::npos) {
    return tekst;
    }

    string czesc1 = tekst.substr(0,spacja);
    string czesc2 = tekst.substr(spacja +1);
    string nowyTekst = czesc2 + " " + czesc1;
    nowyTekst[0] = toupper(nowyTekst[0]);
    nowyTekst[nowyTekst.size()-1]= toupper(nowyTekst[nowyTekst.size()-1]);

    string wynik;
    for (char c : nowyTekst){
        if (c=='a' || c == 'A') {
            wynik += '%';
        }
        wynik += c;
    }
    return wynik;
}
int main() {
    string tekst;
    cout << "Podaj napis dwuczłonowy: ";
    getline(cin, tekst);

    string wynik = ZmienNapis(tekst);
    cout << "Zmieniony napis: " << wynik << endl;

    return 0;
}
