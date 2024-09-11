#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 2
    // string napis1 = "Programowanie ";
    // string napis2 = "zorientowane ";
    // string napis3 = "obeiktowo";
    // string napis4 = napis1 + napis2 + napis3;
    // cout << napis4;
    // 3
    // string napis1 = "Java";
    // string napis2 = "JavaScript";
    // if (napis1.compare(napis2) == 0)
    // {
    //     cout << "Napisy sa takie same";
    // }
    // else
    // {
    //     cout << "Napisy sa rozne";
    // }
    // 4
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
    // 5
    // string napis1;
    // cout << "Podaj nazwe ";
    // getline(cin, napis1);
    // cout << napis1;
    // 6
    string napis1 = "C++, JavaScript, C#";
    napis1.replace(5, 10, "Java");
    cout << napis1;
    return 0;
}