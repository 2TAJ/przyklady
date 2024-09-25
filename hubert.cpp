#include <iostream>
using namespace std;
double rekurencja(int n)
{
    if (n == 1)
    {
        return 3.0;
    }
    else if (n == 2)
    {
        return 0.5;
    }
    else
    {
       return (rekurencja(n-1)*rekurencja(n-2))/5.0;
    }
}
int main()
{
    int n;
    cout << "napisz mi twoje n: ";
    cin >> n;
    // cout << rekurencja(n);
    cout<<rekurencja(n);
}