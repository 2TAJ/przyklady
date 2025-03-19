/* Napisz program który zawiera szablon klasy zależny od dwóch zmiennych uogólnionych.Napisz przynajmniej jeden szablon specjalizowany i stwórz obiekt konkretyzując i specjalizując zaznaczając w komentarzu kiedy konkretyzujesz, a kiedy specjalizujesz. */
#include <iostream>
using namespace std;
// żeby mieć wspólny licznik instancji nalezy utworzyć klasę bazową, a szablony powinny dziedziczyć z utworzonej klasy

class ThreesomeCounter
{
public:
    static int countOfThreesomes;
    ThreesomeCounter()
    {
        countOfThreesomes++;
    }
    virtual void display() = 0;
    ~ThreesomeCounter()
    {
        countOfThreesomes--;
    }
};

template <class T, typename TypPola>
class Threesome : public ThreesomeCounter
{
public:
    static int CountOfThreesomes;
    Threesome() : ThreesomeCounter()
    {
        CountOfThreesomes++;
    };
    T person;
    TypPola *persons = new TypPola[2];
    void display()
    {
        cout << persons[0] << persons[1];
    }
};
template <class T, typename TypPola>
int Threesome<T, TypPola>::CountOfThreesomes = 0;
template <typename TypPola>
class Threesome<int, TypPola> : public ThreesomeCounter
{
public:
    static int CountOfThreesomes;
    Threesome() : ThreesomeCounter()
    {
        CountOfThreesomes++;
    };
    int person;
    TypPola *persons = new TypPola[2];
    void display()
    {
        cout << persons[0] << persons[1];
    }
};
template <typename TypPola>
int Threesome<int, TypPola>::CountOfThreesomes = 0;

//
template <>
class Threesome<string, string> : public ThreesomeCounter
{
public:
    static int CountOfThreesomes;
    Threesome() : ThreesomeCounter()
    {
        CountOfThreesomes++;
    };
    string person;
    string *persons = new string[2];
    void display()
    {
        cout << persons[0] << persons[1];
    }
};

int ThreesomeCounter::countOfThreesomes = 0;
int Threesome<string, string>::CountOfThreesomes = 0;

int main()
{
    Threesome<int, string> firstThreesome;
    Threesome<int, int> secondThreesome;
    firstThreesome.person = 2;
    firstThreesome.persons[0] = "ala";
    firstThreesome.persons[1] = "ola";
    firstThreesome.display();
    cout << endl;
    secondThreesome.person = 1;
    secondThreesome.persons[0] = 22;
    secondThreesome.persons[1] = 22;
    secondThreesome.display();
    cout << endl
         << Threesome<int, string>::CountOfThreesomes << endl;
    Threesome<int, string> firstThreesome2;
    Threesome<string, string> *firstThreesome3 = new Threesome<string, string>();
    firstThreesome3->persons[0] = "lala";
    firstThreesome3->persons[1] = "la";
    firstThreesome3->display();
    cout << endl
         << Threesome<int, string>::CountOfThreesomes;
    cout << endl
         << "how many threesomes " << ThreesomeCounter::countOfThreesomes;
    delete firstThreesome3;
    cout << endl
         << "how many threesomes " << ThreesomeCounter::countOfThreesomes;
    return 0;
}