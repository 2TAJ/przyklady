#include <iostream>

using namespace std;

int losujLiczbeCalkowita()
{
    return rand() % 21 - 10; 
}

int main()
{
    srand(time(NULL));

    int losowaLiczba = losujLiczbeCalkowita();

    cout << "Wylosowana liczba calkowita: " << losowaLiczba << endl;

    return 0;
}