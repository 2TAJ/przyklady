/*A. Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena. Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float. Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie. */


/* Grupa B: Stworz szablon klasy cylinder który zawiera pola height i radius  i metodę objętość. Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla double int, konkretyzację dla float double. Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie. */
//B
#include <iostream>
#include <cmath>
using namespace std;
template<class T, class T2>
class Cylinder{
    public:
    Cylinder(){

    }
    T height;
    T2 radius;
   T2 objetosc(){
       return  3.14 *( pow(radius,2))*height;
    }
};
//specjalizacja
template <>
class
    Cylinder<double, int>
{
     public:
    Cylinder(){

    }
    double height;
    int radius;
     int objetosc(){
        return (int)(radius*radius*3.14*height);
    }
};

int main(){
    //niejawnie
    Cylinder <float,double>cylinder1;
cylinder1.height=2;
cylinder1.radius=2;
    cout<<cylinder1.objetosc()<<endl;
Cylinder<double,int>cylinder2;
cylinder2.height =2;
cylinder2.radius=2;
cout<<cylinder2.objetosc()<<endl;
//jawnie
Cylinder <float,double>  *cylinder3 = new Cylinder<float,double>;
cylinder3->height=2;
cylinder3->radius=2;
cout<<cylinder3->objetosc()<<endl;
Cylinder <double,int>  *cylinder4 = new Cylinder<double,int>;
cylinder4->height=2;
cylinder4->radius=2;
cout<<cylinder4->objetosc()<<endl;
    return 0;
}