#include <iostream>
#include <stdexcept>

using namespace std;

class MyException : public exception
{
public:
  const char *what() const noexcept override
  {
    return "podales jednocyfrowa";
  }
};

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
    int liczba;
    cout << "podaj liczbe dwucyfrowa" << endl;
    cin >> liczba;

    if (liczba < 10)
    {
      throw MyException();
    }
    if (liczba > 99 && liczba < 1000)
    {
      throw MyRuntimeError("podales trzycyfrowa");
    }
    if (liczba > 999 && liczba < 10000)
    {
      throw MyLogicError("podales czterocyfrowa");
    }
    if (liczba > 9999)
    {
      throw "uniwersalny blad";
    }

    cout << "liczba jednosci:" << liczba % 10 << endl;
    cout << "liczba dziesiatek:" << liczba / 10 << endl;
  }
  catch (const runtime_error &e)
  {
    cout << e.what() << endl;
  }
  catch (const logic_error &e)
  {
    cout << e.what() << endl;
  }
  catch (const exception &e)
  {
    cout << e.what() << endl;
  }
  catch (...)
  {
    cout << "podales  wieksza" << endl;
  }

  return 0;
}