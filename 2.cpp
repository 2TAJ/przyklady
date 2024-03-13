#include <iostream>
#include <vector>
using namespace std;
void wypelnij(vector<int> &liczby)//wektor można przekazać przez wartość ireferencje
{
    for (int &itertor : liczby)
    {
        cout << "podaj kolejny element\n";
        cin >> itertor;
    }
}
int sumaElementow(vector<int> liczby)
{
    int suma = 0;
    for (int &itertor : liczby)

    {
        suma += itertor;
    }
    return suma;
}
double srednia(vector<int> liczby)
{
    return (double)sumaElementow(liczby)/(double)liczby.size();
}

int main()
{
    int sizeWektor;
    cout <<"podaj rozmiar wektora\n";
    cin>>sizeWektor;
    vector<int> liczby;
    liczby.resize(sizeWektor);
    wypelnij(liczby);
    cout<<sumaElementow(liczby)<<endl;
    cout<<srednia(liczby)<<endl;
    return 0;
}