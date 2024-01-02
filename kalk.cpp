#include <iostream>
using namespace std;
int main()
{
    int liczba1, liczba2;
    int wynik;

    cout << "Podaj dwie liczby: " << endl;
    cin >> liczba1 >> liczba2;
    // if (liczba2 != 0)
    // {
    //     cout << "Wynik dodawania = ";
    //     cout << liczba1 + liczba2 << endl;
    //     cout << "Wynik odejmowania = ";
    //     cout << liczba1 - liczba2 << endl;
    //     cout << "Wynik dzielenia = ";
    //     cout << liczba1 / liczba2 << endl;
    //     cout << "Wynik mnożenia = ";
    //     cout << liczba1 * liczba2 << endl;
    // }
    // else if (liczba2 == 0)
    // {
    //     cout << "Druga liczba ma być różna od zera!" << endl;
    // }
    // else
    // {
    //     cout << "Błąd" << endl;
    // }
    cout << "Wynik " << liczba1 << " & " << liczba2 << " = ";
    wynik = liczba1 & liczba2;
    cout << wynik << endl;
    cout << "Wynik " << liczba1 << " | " << liczba2 << " = ";
    wynik = liczba1 | liczba2;
    cout << wynik << endl;
    cout << "Wynik " << liczba1 << " ^ " << liczba2 << " = ";
    wynik = liczba1 ^ liczba2;
    cout << wynik << endl;
    cout << "Wynik "
         << " <<2 " << liczba2 << " = ";
    cout << (liczba2 << 2) << endl;
    cout << "Wynik "
         << " >>2 " << liczba2 << " = ";
    cout << (liczba2 >> 2) << endl;
    cout << "Wynik "
         << " <<2 " << liczba1 << " = ";
    cout << (liczba1 << 2) << endl;
    cout << "Wynik "
         << " >>2 " << liczba1 << " = ";
    cout << (liczba1 >> 2) << endl;
    wynik = ~(liczba1);
    cout << wynik << endl;
    wynik = ~(liczba2);
    cout << wynik << endl;

    return 0;
}