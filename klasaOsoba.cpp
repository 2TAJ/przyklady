#include <iostream>
using namespace std;
class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;
    int Osoba::liczbaInstancji = 0;
    Osoba()
    {
        int id = 0;
        string imie;
        liczbaInstancji = 0;
    }
    Osoba(int id, string imie)
    {
        int id = id;
        string imie = imie;
    }
    void setId(int podaneId)
    {
        id = podaneId;
    }
    void setImie(string podaneImie)
    {
        imie = podaneImie;
    }
    int getId()
    {
        return id;
    }
    string getImie()
    {
        return imie;
    }
    // void wypiszImie()
    // {
    //     cout << "Czesc " << argument << ",mam na imie " << imie << endl;
    // }
};
int main()
{
    return 0;
}
