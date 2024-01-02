#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj swoj liczbe" << endl;
    cin >> liczba;
    if (liczba % 3 == 0)
    {
        cout << "Liczba dzieli sie przez 3 " << endl;
    }
    else if (liczba % 2 == 0)
    {
        cout << "Liczba dzieli sie przez 2" << endl;
    }
    else// (liczba % 3 != 0 && liczba % 2 != 0)
    {
        cout << "Liczba nie dzieli sie przez 3 i 2" << endl;
    }
    return 0;
}