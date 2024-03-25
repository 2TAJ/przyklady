#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
int main() {
    //==========================
    //1
    // char marka[45];
    // char model[15];
    // char rokProdukcji[4];
    // cout<<"marka | model | rok produkcji "<<endl;
    // cin>> marka;
    // cin>>model;
    // strcat(marka," ");
    // strcat(marka,model);
    // cin >> model;
    // strcat(marka," ");
    // strcat(marka,model);
    // cout << marka;
    //===========================
    //3
    // char napis[30] = "JavaScript";
    // char napis1[30] = "JavaScript";
    // if (strstr(napis, napis1) == 0)
    // {
    //     cout << "Sa rozne" << endl;
    // }
    // else
    // {
    //     cout << "Sa takie same" << endl;
    // }
    //===========================
    //4
    // char napis[60] = "Java runtime environment";
    // if(strchr(napis, 'r')!=nullptr){
    //     cout<<"Jest napis"<<endl;
    // }
    //==========================
    //5
    // char napis[30];
    // cout << "Podaj napis dwuczlonowy" << endl;
    // cin.getline(napis, 30);
    // cout << napis << endl;
    //=========================
    //6
    // char napis[30] = "Java";
    // char napis1[30] = "C++, JavaScript, C#";
    // char napis2[30];
    // for (int i = 0; napis1[i] != ' '; i++)
    // {
    //     cout<<napis1[i]<<endl;
    //     napis2[i] = napis1[i];
    // }
    // strcat(napis2, " ");//"C++, " 
    // strcat(napis2, napis);//"C++, Java"
    // strcat(napis2, ", ");
    // strchr(napis1,' '); //" JavaScript, C#"
    // char *napis3=strchr(strchr(napis1,' '),',');//", C#"
    // strcat(napis2, napis3);
    // cout << napis2 << endl;
    //===================================
    char imieNazwisko[30]="Jan Probosz";
    char drugieImie[30]="Stanislaw";
    char napis1[30];
    strcpy(napis1,strchr(imieNazwisko, ' '));
    char napis2[30];
    strcpy(napis2,strcat(drugieImie, napis1));
    char napis3[15];
    for (int i = 0; imieNazwisko[i] != ' '; i++)
    {
        napis3[i] = imieNazwisko[i];
    }
    strcat(napis3," ");
    strcat(napis3,napis2 );
    cout<<napis3;
return 0;
}

//cin.ignore( numeric_limits<std::streamsize>::max(), '\n') CZYŚĆI BUFOR 

//cin.getline(wersja3,15) POBIERA CAŁĄ LINIE DO TABLICY CSTRINGÓW PRZEKAZANEJ W PIERWSZYM ARGUMENCIE Z ILOŚĆIĄ PODANĄ W DRUGIM ARGUMENCIE

//cin.ignore( 10,'\n') IGNORUJE Z WPISANEGO JUŻ WIERSZA ILOŚĆ ZNAKÓW W PIERWSZYM ARGUMENCIE DO MOMENTU NAPOTKANIA DFRUGIEGO ZNAKU ŁĄCZNIE Z NIM

//strlen(zmienna) OKREŚLA ROZMIAR ZMIENNEJ BEZ \0
//strcpy(zmienna, napis) DO ZMIENNEJ zmienna OVERWRITUJE WARTOŚĆ ZMIENNEJ napis
//strcat KONKATENACJA STRINGÓW
//strchr(napis1, 'u') ZWRACA RESZTĘ NAPISU OD MOMENTU WYSTĄPIENIA u
//(strchr(napis1,'b')==nullptr)//jeżeli literka (napis) nie występuje w badanym stringu to funkcja zwraca nulptr