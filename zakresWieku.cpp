#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "Podaj swoj wiek a ja cie opisze" << endl;
    cin >> wiek;
    if(wiek>60){
    cout << "Jestes boomerem "<< endl;}
    else if(wiek>=20 && wiek<=60){
    cout << "Jestes x-gen"<< endl;}
    else if(wiek<20){
    cout << "Jestes zoomerem "<< endl;}
    else
    {cout<<"blad";}
    return 0;
}