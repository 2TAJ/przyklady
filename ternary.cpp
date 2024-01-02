#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "podaj wiek" << endl;
  cin >> a;
  (a >= 60) ? cout << "jestes stary " : cout << "jestes mlody";
}