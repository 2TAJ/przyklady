#include <iostream>
// Dołączenie do programu zasobów zbioru nagłówkowego vector:
#include <vector>
using namespace std;
int main()
{
    // Deklaracja i inicjalizacja (w stylu C++11) wektora o nazwie wektor:

    vector<int> wektor = {10, 20, 30, 40, 50};
    /* UWAGA
     * Wektor należący do typu vector zawiera elementy składowe typu int.
     * Początkowa liczba elementów (rozmiar) wektora wynosi 5.
     */
    // Wyświetlenie zawartości wektora:
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }
    // Dopisanie nowego elementu z zadaną wartością na końcu wektora:
    wektor.push_back(60);
    cout << "Ostatni element (dopisany): " << wektor[wektor.size() - 1] << endl;
    // Wstawienie nowego elementu o wartości 0 przed pierwszym elementem:
    wektor.insert(wektor.begin(), 0);
    cout << "Pierwszy element (dopisany): " << wektor[0] << endl;
    // Wyświetlenie bieżącej zawartości wektora:
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }
    cout << endl
         << endl;
    cout << wektor.size() << endl;     // wyswietla ile elementóów ma wektor
    cout << wektor.capacity() << endl; // wyświetla ile pamieci zajmuje wskażnik do wektora
    // wektor.resize(5);//zmieniamy rozmiar wyrzucając z końca i robiąc wolne miejsca na koncu
    // wektor.insert(wektor.begin() + 1, 1);//wstawiamy na pierwsze miejsce po zerowym.
    // wektor.erase(wektor.begin() + 1);//usuwamu pierwszy element po zerowym
    //  wektor.erase(wektor.begin() + 1,wektor.end());//usuwamy przedzial elementów od drugiego do konca
    // wektor.clear();//w ten sposób można zwalniać pamięć na zaallokowaną na stercie dla wektora
    // wektor.resize(0);//w ten sposób można zwalniać pamięć na zaallokowaną na stercie dla wektora
    // for (int i = 0; i < wektor.size(); i++)
    // {
    //     cout << "wektor[" << i << "] = " << wektor[i] << endl;
    // }
    // cout << *wektor.begin() << endl;
    // wektor.insert(wektor.begin() + 1, 1);
    return 0;
}