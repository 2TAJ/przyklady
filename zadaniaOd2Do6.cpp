#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string s1("Programowanie");
    // string s2("zorientowane");
    // string s3("obiektowe");
    // s1 = s1+" "+s2 + " " + s3;
    // cout << s1;

    // string s1("Java");
    // string s2("JavaScript");

    // if (s1.compare(s2) == 0)
    // {
    //     cout << "sa takie same" << endl;
    // }
    // else
    // {
    //     cout << "nie sa takie same" << endl;
    // }

    // string napis1 = "Java Runtime Environment";
    // int napis2 = napis1.find("Runtime");
    // if (napis2 >= 0)
    // {
    //     cout << "Jest ";
    // }
    // else
    // {
    //     cout << "Nie ma";
    // }

    // string s1;
    // cout << "Podaj dwuczlonowa nazwe ";
    // getline(cin, s1);
    // cout << s1 << endl;

    string s1 = "C++, JavaScript, C#";
    string s2 = "Java";
    int spacja = s1.find(", ");
    string s4=s1.substr(spacja+1);
    int spacja1 = s4.find(", ");
    s1.replace(spacja+1, spacja1+1, s2);
    cout << s1;

    // string napis1;
    // string napis2;
    // cout << "Podaj dwie dwuczlonowe nazwy oddzielone spacja ";
    // getline(cin, napis1);
    // getline(cin, napis2);

    // int odciecie1 = napis1.find(" ");
    // int odciecie2 = napis2.find(" ");
    // string napis3 = napis1.substr(0, odciecie1 + 1);
    // string napis4 = napis2.substr(odciecie2, napis2.length());
    // napis1.replace(0, odciecie1, napis4);
    // int dlugosc = napis2.length();
    // napis2.replace(odciecie2+1, dlugosc, napis3);
    // cout << napis1 << endl;
    // cout << napis2;
    return 0;
}
