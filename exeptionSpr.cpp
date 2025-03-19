
// Grupa B  Pobierz dużą literę od użytkownika: jeżeli jest dużą to jest dobrze i się wypisuje komunikat "JD".
//  Jeżeli litera jest mała błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej.
//  Jeżeli jest cyfrą błąd jest wyrzucany przy pomocy klasy exception.
//   Jeżeli litera nie jest literą ani cyfrą błąd wyrzucany jest przy pomocy klasy  runtime_error.
#include <iostream>
#include <stdexcept>

using namespace std;

class MyException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "to jest cyfra";
    }
};

class MyRuntimeError : public runtime_error
{
public:
    MyRuntimeError(const string &msg) : runtime_error(msg) {}
};

int main()
{
    try
    {
        char literka;
        int liczba;
        cout << "podaj duza literke" << endl;
        cin >> literka;
        int ascii = literka;
        if (ascii >= 65 && ascii <= 90) // duza
        {
            cout << "JD" << endl;
        }
        else if (ascii >= 97 && ascii <= 122) // mala
        {
            throw liczba;
        }
        else if (ascii >= 48 && ascii <= 57)
        {
            throw MyException();
        }
        else if ((ascii < 65 || ascii > 90) && (ascii < 97 || ascii > 122) && (ascii < 48 || ascii > 57))
        {
            throw MyRuntimeError("to nie jest cyfra ani literka");
        }
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }

    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
    catch (int)
    {
        cout << "podales mala literke" << endl;
    }
    catch (...)
    {
        cout << "jakis inny blad" << endl;
    }
    return 0;
}