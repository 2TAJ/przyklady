// #include <iostream>
// #include <string>

// int main()
// {
//     std::string input;
//     std::cout << "Podaj liczbę: ";
//     std::getline(std::cin, input); // Wczytanie wejścia jako ciąg znaków

//     // Sprawdzamy każdy znak w ciągu, czy jest przecinkiem
//     for (char c : input)
//     {
//         if (c == ',')
//         {
//             std::cout << "Powiadomienie: Liczba zawiera przecinek!" << std::endl;
//             return 0; // Zakończ program po wykryciu przecinka
//         }
//     }

//     std::cout << "Liczba nie zawiera przecinka." << std::endl;
//     return 0;
// }
// #include <iostream>
// #include <string>

// int main() {
//     std::string input;
//     std::cout << "Podaj liczbę: ";
//     std::getline(std::cin, input); // Wczytanie wejścia jako ciąg znaków

//     // Sprawdzamy każdy znak w ciągu za pomocą pętli for
//     int i = 0;
//     while (input[i] != '\0') {  // Pętla działa do napotkania końca ciągu
//         if (input[i] == ',') {
//             std::cout << "Powiadomienie: Liczba zawiera przecinek!" << std::endl;
//             return 0; // Zakończ program po wykryciu przecinka
//         }
//         i++; // Przechodzimy do kolejnego znaku
//     }

//     std::cout << "Liczba nie zawiera przecinka." << std::endl;
//     return 0;
// }




// liczba%1!=0



// #include <iostream>
// #include <string>

// int main() {
//     std::string input;
//     std::cout << "Podaj tekst: ";
//     std::getline(std::cin, input); // Wczytanie tekstu

//     bool hasLower = false;
//     bool hasUpper = false;
//     bool hasSpecial = false;

//     // Iterujemy przez każdy znak w ciągu
//     for (char c : input) {
//         int ascii = static_cast<int>(c); // Zmieniamy znak na wartość ASCII

//         // Sprawdzamy, czy znak jest małą literą
//         if (ascii >= 97 && ascii <= 122) {
//             hasLower = true;
//         }
//         // Sprawdzamy, czy znak jest wielką literą
//         else if (ascii >= 65 && ascii <= 90) {
//             hasUpper = true;
//         }
//         // Sprawdzamy, czy znak jest specjalnym (zakładamy, że nie jest literą ani cyfrą)
//         else if ((ascii < 65 || (ascii > 90 && ascii < 97) || ascii > 122) && (ascii < 48 || ascii > 57)) {
//             hasSpecial = true;
//         }
//     }

//     // Wypisujemy odpowiednie powiadomienia
//     if (hasLower) {
//         std::cout << "Zawiera małą literę." << std::endl;
//     } else {
//         std::cout << "Nie zawiera małej litery." << std::endl;
//     }

//     if (hasUpper) {
//         std::cout << "Zawiera wielką literę." << std::endl;
//     } else {
//         std::cout << "Nie zawiera wielkiej litery." << std::endl;
//     }

//     if (hasSpecial) {
//         std::cout << "Zawiera znak specjalny." << std::endl;
//     } else {
//         std::cout << "Nie zawiera znaku specjalnego." << std::endl;
//     }

//     return 0;
// }
// #include <iostream>

// int main() {
//     char c;
//     std::cout << "Podaj znak: ";
//     std::cin >> c;

//     // Sprawdzamy, czy znak jest cyfrą (ASCII od 48 do 57)
//     if (c >= '0' && c <= '9') {
//         std::cout << "Podany znak jest cyfrą." << std::endl;
//     } else {
//         std::cout << "Podany znak nie jest cyfrą." << std::endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int iscapital(char x)
// {
//   if ((int)x > 64 && (int)x < 91)
//     return 1;
//   else
//     return 0;
// }

// int main()
// {
//   char x = 'A';
//   cout << iscapital(x);

//   return 0;
// }