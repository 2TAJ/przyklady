#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "Podaj swoj wiek a powiem ile klas ci pozostalo" << endl;
    cin >> wiek;
    switch (wiek)
    {
    case 7:
        cout << "1 klasa" << endl;

    case 8:
        cout << "2 klasa" << endl;

    case 9:
        cout << "3 klasa" << endl;

    case 10:
        cout << "4 klasa" << endl;

    case 11:
        cout << "5 klasa" << endl;

    case 12:
        cout << "6 klasa" << endl;

    case 13:
        cout << "7 klasa" << endl;

    case 14:
        cout << "8 klasa" << endl;
        break;

    default:
        cout << "blad";
        break;
    }

    return 0;
}