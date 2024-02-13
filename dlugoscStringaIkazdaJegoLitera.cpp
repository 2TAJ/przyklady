#include <iostream>
using namespace std;
int main()
{
    string napis, napis1;
    int i = 0;
    cout << "podaj napis" << endl;
    cin >> napis;
    cout << "podaj napis 1" << endl;
    cin >> napis1;

    while (napis[i] != '\0')
    {
        i++;
        cout<<napis[i];//dobieranie sie do literek w stringu
    }
    cout << i;//dlugosc stringa

    return 0;
}