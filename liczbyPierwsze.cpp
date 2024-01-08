#include <iostream>
using namespace std;
int main()
{
    int podanaLiczba;
    int i = 2;
    cin >> podanaLiczba;
    if (podanaLiczba < i)
    {
        cout << "Liczba pierwsza";
    }
    else if (podanaLiczba % i == 0)
    {
        cout << "Liczba zlozona";
    }
    else
    {
        
    }

    return 0;
}