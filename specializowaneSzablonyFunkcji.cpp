#include <iostream>
#include <cmath>
using namespace std;
// Definicja szablonu funkcji srednia():
template <typename T> // określenie parametru szablonowego
T srednia(T wyklad, T cwiczenia, T laboratorium, T seminarium) {
return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
}
// Definicja specjalizowanej wersji szablonu funkcji srednia() dla typu danych double:
template <>
double srednia(
double wyklad,
double cwiczenia,
double laboratorium,
double seminarium) {
  cout<<"template dla double";
return 0; 

}
// Definicja specjalizowanej wersji szablonu funkcji srednia() dla typu danych float:
template <>
float srednia(
float wyklad,
float cwiczenia,
float laboratorium,
float seminarium) {
  cout<<"template dla float";
return 0;
}
// // Definicja specjalizowanej wersji szablonu funkcji srednia() dla typu danych int:
// template <>
// int srednia(
// int wyklad,
// int cwiczenia,
// int laboratorium,
// int seminarium) {
//   cout<<"template dla int";
// return 0;
// }

int main() {

cout << "Średnia z ocen: " << srednia(3, 4, 3, 4) << endl;

cout << "Średnia z ocen: " << srednia<float>(3, 4, 3, 4) << endl;

cout << "Średnia z ocen: " << srednia(3.0, 4.0, 3.0, 4.0) << endl;

return 0;
}