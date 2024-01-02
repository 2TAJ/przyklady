#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "Podaj swoj wiek" << endl;
    cin >> wiek;
    switch (wiek)
    {
    case 7:
        cout << "jestes w 1kl";
        break;
    case 8:
        cout << "jestes w 2kl";
        break;
    case 9:
        cout << "jestes w 3kl";
        break;
    case 10:
        cout << "jestes w 4kl";
        break;
    case 11:
        cout << "jestes w 5kl";
        break;
    case 12:
        cout << "jestes w 6kl";
        break;

    case 13:
        cout << "jestes w 7kl";
        break;
    case 14:
        cout << "jestes w 8kl";
        break;

    default:
        cout << "blad";
        break;
    }

    return 0;
}