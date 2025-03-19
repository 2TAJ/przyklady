// Grupa A:
// Napisz program sortujący
// tablicę metodą przez wybieranie według zamieszczonej dokumentacji: Sortowanie przez wybieranie
//  - jedna z prostszych metod sortowania o złożoności O(n2 ).
//   Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym, który jest tam obecnie.
//    Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy.
//     Algorytm przedstawia się następująco: 1. wyszukaj minimalną wartość z tablicy spośród elementów od i do końca tablicy 2.
//      zamień wartość minimalną, z elementem na pozycji i Gdy zamiast wartości minimalnej wybierana będzie maksymalna,
//       wówczas tablica będzie posortowana od największego do najmniejszego elementu. Założenia do programu ‒ Program wykonywany w konsoli.
//        ‒ Obiektowy język programowania zgodny z zainstalowanym na stanowisku egzaminacyjnym: C++ lub C# lub Java lub Python.
//         ‒ Sortowanie odbywa się rosnąco, nie wykorzystuje gotowych funkcji do sortowania oraz do szukania maksimum.
//          ‒ Sortowana jest tablica 100 liczb całkowitych. Tablica jest polem klasy. ‒
//          Tablica jest losowana ‒ Wszystkie elementy posortowanej tablicy są wyświetlane na ekranie.
//          ‒ Klasa zawiera co najmniej dwie metody: sortującą i szukającą wartość najwyższą.
//          Widzialność metody szukającej ogranicza się jedynie do klasy.
//           ‒ Metoda szukająca zwraca wartość, w zależności od przyjętej taktyki może być to wartość maksymalna lub index wartości maksymalnej.
//            ‒ Program powinien być zapisany czytelnie, z zasadami czystego formatowania kodu, należy stosować znaczące nazwy zmiennych i funkcji.
//            W funkcji main przetestuj zaimplementowane funkcjonalności.

#include <iostream>
using namespace std;

class Tablica
{
private:
public:
    int Tab[100];
    int liczbaElementowTablicy;
    void sortowanieRosnaco()
    {
        int temp;
        int minimalny;
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            minimalny = Tab[i];
            for (int j = i; j < liczbaElementowTablicy; j++)
            {
                if (Tab[j] < minimalny)
                {
                    temp = minimalny;
                    minimalny = Tab[j];
                    Tab[i] = minimalny;
                    Tab[j] = temp;
                }
            }
        }
    }
    void wypelnij()
    {
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            srand((i + 1) * time(NULL));
            Tab[i] = rand() % 101;
        }
    }
    void wypisz()
    {
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            cout << Tab[i] << " ";
        }
    }
    void znajdzMaxStat()
    {
        int maksimum = Tab[0];
        int indeksMax = 0;
        for (int i = 1; i < liczbaElementowTablicy; ++i)
        {
            if (Tab[i] > maksimum)
                maksimum = Tab[i];
        }
        cout << "To jest najwieksza liczba znajdujaca sie w tej tabeli: " << maksimum << endl;
    }
};

int main()
{
    Tablica Tab[100];
    Tab->liczbaElementowTablicy = 100;
    Tab->wypelnij();
    cout << "nie posortowane: " << endl;
    Tab->wypisz();
    cout << endl;
    Tab->znajdzMaxStat();
    cout << "posortowane: " << endl;
    Tab->sortowanieRosnaco();
    Tab->wypisz();
    cout << endl;
    return 0;
}