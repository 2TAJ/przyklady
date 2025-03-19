#include <iostream>
using namespace std;

/*
nazwa funkcji: plec
opis funkcji: sprawdzana jest dziesiąta cyfra PESElu, dla wartości parzystych oznacza płeć żeńską, dla nieparzystych męską
parametry: napis-PESEL
zwracany typ i opis: char 'K' - kobieta lub 'M'-mężczyzna
autor: <numer zdającego >numery to były w ałszwic

*/
char plec(string PESEL)
{
    if (PESEL[9] % 2 == 0)
    {
        return 'K';
    }
    else
    {
        return 'M';
    }
}

bool sumaKontrolna(string PESEL)
{
    unsigned int S = 0, M, R;
    S = PESEL[0] - '0' + PESEL[1] - '0' * 3 + PESEL[2] - '0' * 7 + PESEL[3] - '0' * 9 + PESEL[4] - '0' + PESEL[5] - '0' * 3 + PESEL[6] - '0' * 7 + PESEL[7] - '0' * 9 + PESEL[8] - '0' + PESEL[9] - '0' * 3;
    M = S % 10;
    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }
    if (R == PESEL[10] - '0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string PESEL = "55030101193";
    cout << "Podaj swoj PESEL\n";
    cin >> PESEL;
    if (plec(PESEL) == 'K')
    {
        cout << "Jestes kobieta" << endl;
    }
    else if (plec(PESEL) == 'M')
    {
        cout << "Jestes mezczyzna" << endl;
    }
    if (sumaKontrolna(PESEL))
    {
        cout << "PESEL zgodnny z suma kontrolna" << endl;
    }
    else
    {
        cout << "PESEL niezgodny z suma kontrolna" << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// // **
// // nazwa funkcji: <czyPoprawne>
// // opis funkcji: <sprawdza poprawność peselu>
// // parametry: <string pesel - string z peselem>
// // zwracany typ i opis: <typ bool zwraca wartość true kiedy pesel jest poprawny w przeciwnym razie false>
// // **

// bool czyPoprawne(string pesel)
// {
//   int s;
//   s += ((int)pesel[0] - 48) * 1;
//   s += ((int)pesel[1] - 48) * 3;
//   s += ((int)pesel[2] - 48) * 7;
//   s += ((int)pesel[3] - 48) * 9;
//   s += ((int)pesel[4] - 48) * 1;
//   s += ((int)pesel[5] - 48) * 3;
//   s += ((int)pesel[6] - 48) * 7;
//   s += ((int)pesel[7] - 48) * 9;
//   s += ((int)pesel[8] - 48) * 1;
//   s += ((int)pesel[9] - 48) * 3;
//   int m = s % 10;
//   int r = m == 0 ? 0 : 10 - m;

//   if ((int)pesel[10] - 48 == r)
//   {
//     return true;
//   }
//   return false;
// }

// // **
// // nazwa funkcji: <sprawdzPlec>
// // opis funkcji: <sprawdza płeć>
// // parametry: <string pesel - string z peselem >
// // zwracany typ i opis: <typ char zwraca wartość K, jeśli to pesel kobiety albo M jeśli to pesel mężczyzny>
// // **

// char sprawdzPlec(string pesel)
// {
//   if ((int)pesel[9] - 48 % 2 == 0)
//   {
//     return 'K';
//   }
//   return 'M';
// }

// // **
// // nazwa funkcji: <wypiszRokUrodzenia>
// // opis funkcji: <wypisuje date urodzenia>
// // parametry: <string pesel - string z peselem >
// // zwracany typ i opis: <void nie zwraca nic>
// // **

// void wypiszRokUrodzenia(string pesel)
// {
//   int rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);

//   // rok  1977 poczatek ustalania numeru pesel

//   int miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

//   if (miesiac > 20)
//   {
//     rokUrodzenia += 2000;
//   }
//   else
//   {
//     rokUrodzenia += 1900;
//   }

//   if (rokUrodzenia > 1999)
//   {
//     miesiac -= 20;
//   }

//   int dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
//   cout << "Urodziłeś się: ";

//   if (dzien < 10)
//   {
//     cout << "0" << dzien;
//   }
//   else
//   {
//     cout << dzien;
//   }
//   cout << ".";

//   if (miesiac < 10)
//   {
//     cout << "0" << miesiac;
//   }
//   else
//   {
//     cout << miesiac;
//   }

//   cout << ".";
//   cout << rokUrodzenia << endl;
// }

// int main()
// {
//   cout << "Program, który po podaniu peselu sprawdza czy jest poprawny i wydobywa z niego plec" << endl;
//   string pesel;

//   cout << "Podaj pesel" << endl;
//   cin >> pesel;

//   if (!czyPoprawne(pesel))
//   {
//     cout << "Pesel niepoprawny" << endl;
//     return 0;
//   }
//   cout << "Pesel poprawny" << endl;

//   if (sprawdzPlec(pesel) == 'M')
//   {
//     cout << "Jestes mezczyzna" << endl;
//   }
//   else
//   {
//     cout << "Jestes kobieta" << endl;
//   }

//   wypiszRokUrodzenia(pesel);

//   return 0;
// }