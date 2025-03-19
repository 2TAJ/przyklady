/*Definicja i zastosowanie klasy runtime_error:

namespace std {
    class runtime_error : public exception {
    public:
        // Konstruktor przyjmujący argumenty
        explicit runtime_error(const string& what_arg);
        explicit runtime_error(const char* what_arg);

        // Metoda zwracająca komunikat błędu
        virtual const char* what() const noexcept override;
    };
}*/
#include <iostream>
#include <stdexcept>
using namespace std;
class MyRuntimeError : public runtime_error
{
public:
    MyRuntimeError(const string &msg) : runtime_error(msg) {} // tu nadpisałem metodę what()
};

class MyLogicError : public logic_error
{
public:
    MyLogicError(const string &msg) : logic_error(msg) {}
};

int main()
{
    try
    {
        throw MyRuntimeError("This is a runtime error!");
    }
    catch (const runtime_error &e)
    {
        cout << "Caught MyRuntimeError: " << e.what() << endl;
    }

    try
    {
        throw MyLogicError("This is a logic error!");
    }

    catch (const logic_error &e)
    {
        cout << "Caught MyLogicError: " << e.what() << endl;
    }
    return 0;
}
/*
Oto bardziej szczegółowa wersja tej definicji:

namespace std {
    class runtime_error : public exception {
    private:
        std::string message;  // Przechowywany komunikat

    public:
        // Konstruktor przyjmujący std::string jako argument
        explicit runtime_error(const string& what_arg) : message(what_arg) {}//message(what_arg) kontatruktor kopiujący klasy string

        // Konstruktor przyjmujący const char* jako argument
        explicit runtime_error(const char* what_arg) : message(what_arg) {}

        // Metoda zwracająca komunikat
        virtual const char* what() const noexcept override {
            return message.c_str();  // Zwraca komunikat
        }
    };//czyli argument konstruktora jest komunikatem błedu
}*/