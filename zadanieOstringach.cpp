#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string napis1;
     string napis2;
    cout << "Podaj dwuczlonowy napis" << endl;
    getline(cin, napis1);
    int odciecie1 = napis1.find(" ");
    int dlugosc=napis1.length();
    string napis3 = napis1.substr(0, odciecie1);
    int dlugosc1=napis3.length();
    napis3[dlugosc1-1] = toupper(napis3[0]);
    string napis4 = napis1.substr(odciecie1 + 1, dlugosc);
    napis2=napis4+" "+napis3;
    napis2[0] = toupper(napis2[0]);
    cout<<napis2;
}
