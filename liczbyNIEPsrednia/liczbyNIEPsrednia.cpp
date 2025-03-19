#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

class tablica
{
private:
    static const int maxsize = 100;
    int n;
    int tab[maxsize];
public:
    tablica(int nx)
    {
        n=nx;
        srand (time(NULL));
        for(int i=0;i<n;i++)
        {
            tab[i]=rand()%1000+1;
        }
    }
    void wypisz()
    {
        for(int j=0;j<n;j++)
        {
            cout << j << ":" << tab[j] << endl;
        }
    }
    int szukaj(int item)
    {
        for(int k=0;k<n;k++)
        {
            if(tab[k]==item)
            {
                return k;
                break;
            }
        }
        return -1;
    }
    int nieparzyste()
    {
        int counter=0;
        for(int l=0;l<n;l++)
        {
            if(tab[l]%2!=0)
            {
                counter++;
            }
        }
        return counter;
    }
    float srednia()
    {
        int sum=0;
        for(int m=0;m<n;m++)
        {
            sum+=tab[m];
        }
        return sum/n;
    }
};

int main() {

    tablica t(100);
    t.wypisz();
    cout << t.szukaj(300) << endl;
    cout << t.nieparzyste() << endl;
    cout << t.srednia();
    return 0;
}