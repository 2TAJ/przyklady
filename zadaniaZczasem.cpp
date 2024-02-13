#include <iostream>
using namespace std;
struct czas
{
   int sekundy;
   int minuty;
   int godziny;
};
void obliczanieCzasu(int czasWSekundach, czas &czas)
{
   int czasGodziny = 0;
   int czasMinuty = 0;
   int czasSekundy = 0;
   czasGodziny = czasWSekundach / 3600;
   czasWSekundach = czasWSekundach % 3600;
   czasMinuty = czasWSekundach / 60;
   czasWSekundach = czasWSekundach % 60;
   czasSekundy = czasWSekundach;
   cout << "Godziny: " << czasGodziny << endl;
   cout << "Minuty: " << czasMinuty << endl;
   cout << "Sekundy: " << czasSekundy << endl;
   czas.sekundy = czasSekundy;
   czas.minuty = czasMinuty;
   czas.godziny = czasGodziny;
}
void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
   int czasGodziny = 0;
   int czasMinuty = 0;
   int czasSekundy = 0;
   czasGodziny = staryCzas.godziny + nowyCzas.godziny;
   czasMinuty = staryCzas.minuty + nowyCzas.minuty;
   czasSekundy = staryCzas.sekundy + nowyCzas.sekundy;
   if (czasSekundy > 59)
   {
      czasMinuty += czasSekundy / 60;
      czasSekundy = czasSekundy % 60;
   }
   if (czasMinuty > 59)
   {
      czasGodziny += czasMinuty / 60;
      czasMinuty = czasMinuty % 60;
   }
   if (czasGodziny > 23)
   {

      czasGodziny = czasGodziny % 24;
   }
   nowyCzas.sekundy = czasSekundy;
   nowyCzas.minuty = czasMinuty;
   nowyCzas.godziny = czasGodziny;
}
void wypisz(czas timex){
   cout<<timex.sekundy<<endl;
   cout<<timex.minuty<<endl;
   cout<<timex.godziny<<endl;
}
int main(){
int sekundyOdUzytkownika;
czas staryCzas{59,59,23},nowyCzas;
cout<<"podaj ile sekund dołożyć";
cin>>sekundyOdUzytkownika;
obliczanieCzasu(sekundyOdUzytkownika,nowyCzas);
dodajCzas(nowyCzas,staryCzas);
wypisz(nowyCzas);
return 0;
}