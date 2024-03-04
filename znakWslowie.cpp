#include <iostream>
#include <string>
using namespace std;
int main()
{
    string podaneSlowo;
    char szukanyZnak;
    int ileRazy = 0;
    int ileRazy1 = 0;
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
    for (char podaneSlowo1 : podaneSlowo)
    {
        if (podaneSlowo1 == szukanyZnak)
        {
            ileRazy1++;
        }
    }

    cout << szukanyZnak << " wystapilo: " << ileRazy << endl;
    cout << szukanyZnak << " wystapilo: " << ileRazy1 << endl;
    return 0;
}
