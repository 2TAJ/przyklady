#include <iostream>
#include <string>
using namespace std;
int main()
{
    string napis1;
    string napis2;
    cout << "Podaj 2 napisy" << endl;
    cin >> napis1;
    cin >> napis2;
    string napis3 = napis1 + napis2;
    cout << napis3 << endl;
    float napisDouble1 = stof(napis1);
    float napisDouble2 = stof(napis2);
    float napisDouble3 = napisDouble1 + napisDouble2;
    cout << napisDouble3 << endl;
    int napisInt1 = stoi(napis1);
    int napisInt2 = stoi(napis2);
    int napisInt3 = napisInt1 + napisInt2;
    cout << napisInt3 << endl;
    //to_string(napisInt1) //zamiana int na stringa
    return 0;

}
