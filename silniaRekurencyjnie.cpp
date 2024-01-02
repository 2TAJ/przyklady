#include <iostream>
using namespace std;
int silnia(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
        return silnia(n - 1) * silnia(n - 1) - silnia(n - 2) * silnia(n - 2);
}
int main()
{
    // silnia iteracyjnie
    int liczba;
    cin >> liczba;
    // for(int i=1; i<=liczba; i++){
    // wynik=wynik*i;
    // }
    // silnia rekurencyjnie
    // cout << sizeof(short int) << endl;
    cout << silnia(liczba);
    return 0;
}