
#include <iostream>
using namespace std;

class Urzadzenie
{
private:
public:
    void display(string komunikat)
    {
        cout << komunikat << endl;
    };
};
class Pralka : public Urzadzenie
{
private:
    int nrProgramu = 0;

public:
    int ustawProgram(int nrProg)
    {
        if (nrProg >= 1 && nrProg <= 12)
        {
            cout << "ustawiono program " << nrProg << endl;
            nrProgramu = nrProg;

            return nrProgramu;
        }
        else
        {
            cout << "wybrano zly program " << endl;
            nrProgramu = 0;
            return nrProgramu;
        }
    };
};
class Odkurzacz : public Urzadzenie
{
private:
    bool stanOdkurzacza = false;

public:
    void on()
    {
        if (stanOdkurzacza == false)
        {
            stanOdkurzacza = true;
            cout << "Odkurzacz wlaczono" << endl;
        }
    }
    void off()
    {
        if (stanOdkurzacza == true)
        {
            stanOdkurzacza = false;
            cout << "Odkurzacz wylaczono" << endl;
        }
    }
};
int main()
{
    Pralka pralka;
    Odkurzacz odkurzacz;
    int podanyProg1;
    cout << "Podaj nr programu prania (od 1 do 12)" << endl;
    cin >> podanyProg1;
    pralka.ustawProgram(podanyProg1);
    odkurzacz.on();
    odkurzacz.on();
    odkurzacz.on();
    odkurzacz.display("Odkurzacz wyladowal sie");
    odkurzacz.off();
    return 0;
}