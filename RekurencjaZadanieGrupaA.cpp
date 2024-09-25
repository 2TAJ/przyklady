//oblicz 20 wyraz ciagu , a0=1 a1=2 an=(an-1+2an-2)/2
#include <iostream>
using namespace std;
int oblicz20Wyraz(int n=20)
{
    int x;
    int x0=1;
    int x1=2;
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    for(int i=2;i<=n;i++){
        x=(x0-1+2*x1-2)/2;
        x1=x0;
        x0=x;
        return x;
    }
}
    int main() {
    int n;
    int wynik = oblicz20Wyraz(n);
    cout << "20 wyraz to: " << wynik << endl;
    return 0;
}
