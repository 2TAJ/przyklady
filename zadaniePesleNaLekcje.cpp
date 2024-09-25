// #include <iostream>
// using namespace std;
// int sequence(int n){
// if(n==1){
//     return 3;
// }
// else{
//     return (sequence(n-1)sequence(n-1))-20sequence(n-1);
// }
// }
// int main(){
//     int n;
// cout<<"podaj n: ";
// cin>>n;
// cout<<sequence(n);
// }

// #include <iostream>
// using namespace std;
// int f(int n){
//     if(n==0)return 3;
//     else return f(n-1)+2;
// }
// long int potega(int p, int w){
//     if(w==0) return 1;
//     else return p*potega(p,w-1);
// }
// long int fiba(int n)
// {
//     if(n==1 || n==2) return 1;
//     else return fiba(n-1)+fiba(n-2);

// }
// long int silnia(int n){
//     if(n==0)return 1;
//     else return n*silnia(n-1);

// }
// int main()
// {
//     int liczba=0;
//     cout<<"podaj liczbe"<<endl;
//     cin>>liczba;
//    cout<<f(liczba)<<endl;
//    int liczbaPotegi=0;
//    cout<<"podaj liczbe potegi"<<endl;
//    cin>>liczbaPotegi;
//    cout<<potega(liczba,liczbaPotegi)<<endl;
//    int liczbaFiba=0;
//    cout<<"podej liczbe fiba"<<endl;
//    cin>>liczbaFiba;
//    cout<<fiba(liczbaFiba)<<endl;
//     int liczbaSilnia=0;
//    cout<<"podej liczbe silnia"<<endl;
//    cin>>liczbaSilnia;
//    cout<<silnia(liczbaSilnia);

//    return 0;
// }
// #include <iostream>
// #include <string>

// // Funkcja rekurencyjna do odwracania ciągu znaków
// void odwrocCiag(std::string str) {
//     if (str.length() == 0) // warunek bazowy
//         return;

//     // Wywołanie rekurencyjne
//     odwrocCiag(str.substr(1));

//     // Wyświetlenie pierwszego znaku po odwrocie reszty ciągu
//     std::cout << str[0];
// }

// int main() {
//     std::string tekst;
//     std::cout << "Podaj tekst do odwrócenia: ";
//     std::getline(std::cin, tekst);

//     std::cout << "Odwrócony tekst: ";
//     odwrocCiag(tekst);
//     std::cout << std::endl;

//     return 0;
// }
// #include <iostream>

// // Funkcja rekurencyjna do obliczania sumy cyfr liczby
// int suma_cyfr(int n) {
//     if (n == 0) // warunek bazowy
//         return 0;
//     else
//         return (n % 10) + suma_cyfr(n / 10); // wywołanie rekurencyjne
// }

// int main() {
//     int liczba;
//     std::cout << "Podaj liczbe: ";
//     std::cin >> liczba;

//     std::cout << "Suma cyfr liczby " << liczba << " to: " << suma_cyfr(liczba) << std::endl;
//     return 0;
// }
// #include <iostream>
// #include <vector>

// // Funkcja rekurencyjna do znajdowania maksymalnego elementu w tablicy
// int maksymalnyElement(const std::vector<int>& tablica, int n) {
//     if (n == 1) // warunek bazowy
//         return tablica[0];

//     return std::max(tablica[n - 1], maksymalnyElement(tablica, n - 1)); // wywołanie rekurencyjne
// }

// int main() {
//     std::vector<int> tablica = {1, 4, 3, 7, 5, 9, 2};
//     int rozmiar = tablica.size();

//     std::cout << "Maksymalny element w tablicy to: " << maksymalnyElement(tablica, rozmiar) << std::endl;
//     return 0;
// }
// #include <iostream>

// // Funkcja rekurencyjna do rysowania wiersza gwiazdek
// void rysujWiersz(int n) {
//     if (n > 0) {
//         std::cout << "*";
//         rysujWiersz(n - 1); // wywołanie rekurencyjne
//     }
// }

// // Funkcja rekurencyjna do rysowania trójkąta
// void rysujTrojkat(int n) {
//     if (n > 0) {
//         rysujTrojkat(n - 1); // wywołanie rekurencyjne
//         rysujWiersz(n); // rysowanie aktualnego wiersza
//         std::cout << std::endl;
//     }
// }

// int main() {
//     int liczba;
//     std::cout << "Podaj liczbe wierszy trojkata: ";
//     std::cin >> liczba;

//     rysujTrojkat(liczba);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Funkcja do obliczania n-tego wyrazu ciągu
// int obliczWyraz(int n) {
//     if (n == 0) return 1; // a0 = 1
//     if (n == 1) return 2; // a1 = 2

//     int an_minus_1 = 2; // a1
//     int an_minus_2 = 1; // a0
//     int an;

//     // Obliczanie kolejnych wyrazów ciągu aż do n-tego
//     for (int i = 2; i <= n; i++) {
//         an = an_minus_1 + 2 * an_minus_2 / 2;
//         an_minus_2 = an_minus_1;
//         an_minus_1 = an;
//     }

//     return an;
// }

// int main() {
//     int n = 20; // Obliczamy 20. wyraz ciągu
//     int wynik = obliczWyraz(n - 1); // indeksowanie zaczynamy od 0
//     cout << "20. wyraz ciagu to: " << wynik << endl;

//     return 0;
// }