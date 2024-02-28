#include <iostream>
#include <fstream>
using namespace std;

struct Osoba
{
  int id;
  string imie;
  string nazwisko;
  int wiek;
  int numerButa;
};

void wypisz(Osoba *osoby, int dlugosc)
{
  for (int i = 0; i < dlugosc; i++)
  {
    cout << "Id:" << osoby[i].id << endl;
    cout << "Imie:" << osoby[i].imie << endl;
    cout << "Nazwisko:" << osoby[i].nazwisko << endl;
    cout << "Wiek:" << osoby[i].wiek << endl;
    cout << "Number buta:" << osoby[i].numerButa << endl;
    cout << "==========" << endl;
  }
}

int wczytajDlugosc()
{
  fstream plik;
  plik.open("dane.txt", ios::in);
  int liczbaOsob = 0;
  string temp = "";
  if (plik.good())
  {
    while (!plik.eof())
    {
      plik >> temp >> temp >> temp >> temp >> temp;
      liczbaOsob++;
    }
  }
  else
  {
    cout << "Blad";
  }

  if(temp == ""){
    return 0;
  }

  plik.close();
  return liczbaOsob;
}

void wczytaj(Osoba *osoby)
{
  int i = 0;
  fstream plik;
  plik.open("dane.txt", ios::in);

  if (plik.good())
  {
    while (!plik.eof())
    {
      plik >> osoby[i].id >> osoby[i].imie >> osoby[i].nazwisko >> osoby[i].wiek >> osoby[i].numerButa;
      i++;
    }
  }
  else
  {
    cout << "Blad";
  }
}

void zapisz(Osoba *osoby, int dlugosc)
{
  fstream plik;
  plik.open("dane.txt", ios::out);

  if (plik.good())
  {
    for (int i = 0; i < dlugosc; i++)
    {
      plik << osoby[i].id << " " << osoby[i].imie << " " << osoby[i].nazwisko << " " << osoby[i].wiek << " " << osoby[i].numerButa;
      if (i != dlugosc - 1)
      {
        plik << endl;
      }
    }
    plik.close();
  }
  else
  {
    cout << "Blad";
  }
}

int najwiekszeId(Osoba *osoby, int dlugosc)
{
  int max = -1;
  for (int i = 0; i < dlugosc; i++)
  {
    if (osoby[i].id > max)
    {
      max = osoby[i].id;
    }
  }

  return max;
}

int znajdzPoId(Osoba *osoby, int dlugosc, int id)
{
  for (int i = 0; i < dlugosc; i++)
  {
    if (osoby[i].id == id)
    {
      return i;
    }
  }

  return -1;
}

bool porownajNapisy(string napis1, string napis2)
{
  // sprawdza czy lewy alfabetycznie pierwszy niz prawy
  int i;
  int numerZnaku1;
  int numerZnaku2;

  while (napis1[i] != '\0' && napis2[i] != '\0')
  {
    numerZnaku1 = int(tolower(napis1[i]));
    numerZnaku2 = int(tolower(napis2[i]));

    if (numerZnaku1 < numerZnaku2)
    {
      return true;
    }
    if (numerZnaku2 < numerZnaku1)
    {
      return false;
    }

    i++;
  }

  if (napis1[i] == '\0')
  {
    return true;
  }

  if (napis2[i] == '\0')
  {
    return false;
  }
  return true;
}

void sortujPoWieku(Osoba *osoby, int dlugosc)
{
  for (int i = 1; i < dlugosc; i++)
  {
    Osoba temp = osoby[i];
    int j = i - 1;

    while (osoby[j].wiek > temp.wiek && j >= 0)
    {
      osoby[j + 1] = osoby[j];

      j--;
    }

    osoby[j + 1] = temp;
  }
}

void sortujPoNumerzeButa(Osoba *osoby, int dlugosc)
{
  for (int i = 1; i < dlugosc; i++)
  {
    Osoba temp = osoby[i];
    int j = i - 1;

    while (osoby[j].numerButa > temp.numerButa && j >= 0)
    {
      osoby[j + 1] = osoby[j];

      j--;
    }

    osoby[j + 1] = temp;
  }
}

void sortujPoImieniu(Osoba *osoby, int dlugosc)
{
  for (int i = 1; i < dlugosc; i++)
  {
    Osoba temp = osoby[i];
    int j = i - 1;

    while (porownajNapisy(temp.imie, osoby[j].imie) && j >= 0)
    {
      osoby[j + 1] = osoby[j];

      j--;
    }

    osoby[j + 1] = temp;
  }
}

void sortujPoNazwisku(Osoba *osoby, int dlugosc)
{
  for (int i = 1; i < dlugosc; i++)
  {
    Osoba temp = osoby[i];
    int j = i - 1;

    while (porownajNapisy(temp.nazwisko, osoby[j].nazwisko) && j >= 0)
    {
      osoby[j + 1] = osoby[j];

      j--;
    }

    osoby[j + 1] = temp;
  }
}

void sortuj()
{
  int dlugosc = wczytajDlugosc();
  Osoba *osoby = new Osoba[dlugosc];
  wczytaj(osoby);
  char rodzajSortowania;

  cout << "wpisz w jesli chcesz posortowac po wieku, b jesli po numerze buta, i jesli po imieniu, n jesli po nazwisku" << endl;
  cin >> rodzajSortowania;

  if (rodzajSortowania == 'w')
  {
    sortujPoWieku(osoby, dlugosc);
  }
  else if (rodzajSortowania == 'b')
  {
    sortujPoNumerzeButa(osoby, dlugosc);
  }
  else if (rodzajSortowania == 'i')
  {
    sortujPoImieniu(osoby, dlugosc);
  }
  else if (rodzajSortowania == 'n')
  {
    sortujPoNazwisku(osoby, dlugosc);
  }
  else
  {
    cout << "Nie poprawna operacja" << endl;
  }

  zapisz(osoby, dlugosc);
}

void dodajOsobe()
{
  int dlugosc = wczytajDlugosc();
  Osoba *osoby = new Osoba[dlugosc + 1];
  wczytaj(osoby);
  string imie,
      nazwisko;
  int wiek, numerButa;

  cout << "Podaj imie:" << endl;
  cin >> imie;
  cout << "Podaj nazwisko:" << endl;
  cin >> nazwisko;
  cout << "Podaj wiek:" << endl;
  cin >> wiek;
  cout << "Podaj numerButa:" << endl;
  cin >> numerButa;

  osoby[dlugosc].id = najwiekszeId(osoby, dlugosc) + 1;
  osoby[dlugosc].imie = imie;
  osoby[dlugosc].nazwisko = nazwisko;
  osoby[dlugosc].wiek = wiek;
  osoby[dlugosc].numerButa = numerButa;
  zapisz(osoby, dlugosc + 1);
}

void zmodyfikujOsobe()
{
  int dlugosc = wczytajDlugosc();
  Osoba *osoby = new Osoba[dlugosc];
  wczytaj(osoby);

  int wartosc;
  cout << "Podaj id użytkownika, którego chcesz edytowac:" << endl;
  cin >> wartosc;
  int indeks = znajdzPoId(osoby, dlugosc, wartosc);

  if (indeks == -1)
  {
    cout << "Nie znaleziono użytkownika o podanym id" << endl;
    return;
  }

  string imie,
      nazwisko;
  int wiek, numerButa;
  cout << "Podaj imie:" << endl;
  cin >> imie;
  cout << "Podaj nazwisko:" << endl;
  cin >> nazwisko;
  cout << "Podaj wiek:" << endl;
  cin >> wiek;
  cout << "Podaj numerButa:" << endl;
  cin >> numerButa;

  osoby[indeks].imie = imie;
  osoby[indeks].nazwisko = nazwisko;
  osoby[indeks].wiek = wiek;
  osoby[indeks].numerButa = numerButa;
  zapisz(osoby, dlugosc);
}

void usunOsobe()
{
  int dlugosc = wczytajDlugosc();
  Osoba *osoby = new Osoba[dlugosc];
  wczytaj(osoby);

  int wartosc;
  cout << "Podaj id użytkownika, którego chcesz usunac:" << endl;
  cin >> wartosc;
  int indeks = znajdzPoId(osoby, dlugosc, wartosc);

  if (indeks == -1)
  {
    cout << "Nie znaleziono użytkownika o podanym id" << endl;
    return;
  }

  int i = indeks;
  while (i < dlugosc - 1)
  {
    osoby[i] = osoby[i + 1];
    i++;
  }

  zapisz(osoby, dlugosc - 1);
}

int main()
{
  cout << "Kliknij d jesli chcesz dodac osobe, m jesli chcesz zmodyfikowac, u jesli chcesz usunac, s jesli chcesz posortowac:" << endl;
  char operacja;
  cin >> operacja;

  if (operacja == 'd')
  {
    dodajOsobe();
  }
  else if (operacja == 'm')
  {
    zmodyfikujOsobe();
  }
  else if (operacja == 'u')
  {
    usunOsobe();
  }
  else if (operacja == 's')
  {
    sortuj();
  }
  else
  {
    cout << "Nieznana operacja" << endl;
  }
  return 0;
}
