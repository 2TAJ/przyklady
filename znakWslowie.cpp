#include <iostream>
using namespace std;
int main()
{
    string podaneSlowo;
    char szukanyZnak;
    int ileRazy = 0;
    cout << "podaj slowo: " << endl;
    cin >> podaneSlowo;
    cout << "podaj znak ktorego szukasz: " << endl;
    cin >> szukanyZnak;
    for (int i = 0; i < podaneSlowo.length(); i++)
    {
        if (podaneSlowo[i] == szukanyZnak)
        {
            ileRazy++;
        }
    }

    cout << szukanyZnak << " wystapilo: " << ileRazy << endl;

    return 0;
}
