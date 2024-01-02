#include <iostream>
using namespace std;

void zamianaLiczbami(int &liczba1, int &liczba2) {
    int temp;
    {
       temp=liczba1;
       liczba1=liczba2;
       liczba2=temp;
    }
}

int main() {
    int liczba1;
    int liczba2;
    int temp;

    cout << "Podaj pierwsza liczbe ";
    cin >> liczba1;

    cout << "Podaj druga liczbe ";
    cin >> liczba2;
    cout<<"Pierwsza liczba to "<<liczba1<<endl;
    cout<<"Druga liczba to "<<liczba2<<endl;
    zamianaLiczbami(liczba1, liczba2);
    cout<<"Po zamianie "<<endl;
    cout<<"Pierwsza liczba to "<<liczba1<<endl;
    cout<<"Druga liczba to "<<liczba2<<endl;

    return 0;
}