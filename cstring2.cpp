// #include <iostream>
// #include <fstream>
// #include <cstring>
// using namespace std;


// int main()
// {
//     char napis[30]="bob the bob";
//     cout<<strchr(napis,'t')<<endl;//the bob
//     cout<<*strchr(napis,'t')<<endl;//t
//     if (strchr(napis,'w')==nullptr)
//     {
//         cout<<"trafiony";
//     }
    
//     cout<<strchr(napis,'w');
//     return 0;
// }
// #include <iostream>
// #include <cstring>
// using namespace std;

// void ilerazywystepuje(char *tekst, char znak)
// {
//     int wystepuje = 0;
   

//     for(int i=0;tekst[i]!='\0';i++)
//     {
//         if (tekst[i] == znak)
//         {
//             wystepuje++;
//             cout<<i<<endl;
//         }
       
//     }

//     cout << "litera " << znak << " jest w tekscie tyle razy: " << wystepuje << endl;
// }

// int indekspierwszego(char *napis, char litera)
// {
//     return strlen(napis) - strlen(strchr(napis, litera));
// }

// int main()
// {
//     char napis[30] = "matematyka";
//     char litera = 'm';

//     ilerazywystepuje(napis, litera);
//     int wystapienie = indekspierwszego(napis, litera);

//     cout << "pierwsze wystapienie litery " << litera << " : " << wystapienie << endl;

//     return 0;
// }