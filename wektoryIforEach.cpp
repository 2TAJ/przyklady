#include <iostream>
#include <vector>

using namespace std;

void wypelnij(vector<int> &wektor, int count)
{
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < count; ++i)
    {
        wektor.push_back(rand() % 10 + 1);
    }
}

void wyswietl(vector<int> &wektor)
{
    cout << "Wszystkie liczby: " << endl;

    for (int num : wektor)
    {
        cout << num << " ";
    }

    cout << endl;
}

void wiekszeOd7(vector<int> &wektor)
{
    cout << "Liczby większe od 7:" << endl;

    for (int num : wektor)
    {

        if (num > 7)
        {
            cout << num << endl;
        }
    }

    cout << endl;
}
void bubbleSortRosnaco(vector<int> &wektor)
{
    int n = wektor.size();

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (wektor[j] > wektor[j + 1])
            {
                int temp = wektor[j];
                wektor[j] = wektor[j + 1];
                wektor[j + 1] = temp;
            }
        }
    }
}
int main()
{
    vector<int> wektor;
    int rozmiar;
    cout << "Podaj ile liczb chcesz zapisac" << endl;
    cin >> rozmiar;
    wypelnij(wektor, rozmiar);
    wyswietl(wektor);
    wiekszeOd7(wektor);
    bubbleSortRosnaco(wektor);
    wyswietl(wektor);
    return 0;
}