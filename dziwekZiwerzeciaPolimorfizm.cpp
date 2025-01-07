#include <iostream>
using namespace std;

// Klasa abstrakcyjna
class Zwierze {
public:
    virtual void dzwiek()  = 0; // Metoda czysto wirtualna
};

// Klasa dziedzicząca Pies
class Pies : public Zwierze {
public:
    void dzwiek() {
        cout << "Hau Hau!" << endl;
    }
};

// Klasa dziedzicząca Kot
class Kot : public Zwierze {
public:
    void dzwiek()  {
        cout << "Miau Miau!" << endl;
    }
};

// Funkcja wykorzystująca polimorfizm
void wydajDzwiek( Zwierze* zwierze) {
    zwierze->dzwiek();
}

int main() {
    Pies pies;
    Kot kot;

    // Wywołanie metod dzwiek
    wydajDzwiek(&pies); // powinno wyświetlić: Hau Hau!
    wydajDzwiek(&kot);  // powinno wyświetlić: Miau Miau!

    return 0;
}
// #include <iostream>
// using namespace std;

// // Klasa abstrakcyjna
// class Zwierze {
// public:
//     virtual void dzwiek()  = 0; // Metoda czysto wirtualna
// };

// // Klasa dziedzicząca Pies
// class Pies : public Zwierze {
// public:
//     void dzwiek() {
//         cout << "Hau Hau!" << endl;
//     }
// };

// // Klasa dziedzicząca Kot
// class Kot : public Zwierze {
// public:
//     void dzwiek()  {
//         cout << "Miau Miau!" << endl;
//     }
// };

// // Funkcja wykorzystująca polimorfizm
// void wydajDzwiek(Zwierze* zwierze) {
//     zwierze->dzwiek();
// }

// int main() {
//     // Tworzymy obiekty Pies i Kot
//     Pies pies;
//     Kot kot;

//     // Tablica wskaźników do obiektów typu Zwierze
//     Zwierze* zwierzeta[] = { &pies, &kot };

//     // Iteracja przez tablicę obiektów i wywołanie dzwiek()
//     for (int i = 0; i < 2; i++) {
//         wydajDzwiek(zwierzeta[i]);
//     }

//     return 0;
// }
// Zadanie 1: Zwierzęta

// Rozwiązanie

// #include <iostream>
// #include <string>
// using namespace std;

// // Abstrakcyjna klasa Animal
// class Animal {
// public:
//     virtual void makeSound() = 0; // Czysto wirtualna metoda
//     virtual ~Animal() {}
// };

// // Klasa pochodna Dog
// class Dog : public Animal {
// public:
//     void makeSound() override {
//         cout << "Dog: Woof! Woof!" << endl;
//     }
// };

// // Klasa pochodna Cat
// class Cat : public Animal {
// public:
//     void makeSound() override {
//         cout << "Cat: Meow! Meow!" << endl;
//     }
// };

// int main() {
//     // Tworzenie tablicy wskaźników do zwierząt
//     Animal* animals[] = {
//         new Dog(),
//         new Cat(),
//         new Dog(),
//         new Cat()
//     };

//     // Iteracja przez tablicę i wywoływanie makeSound()
//     for (Animal* animal : animals) {
//         animal->makeSound();
//         delete animal;
//     }

//     return 0;
// }

// Zadanie 2: Figury geometryczne

// Rozwiązanie

// #include <iostream>
// #include <cmath>
// using namespace std;

// // Abstrakcyjna klasa Shape
// class Shape {
// public:
//     virtual double calculateArea() = 0; // Czysto wirtualna metoda
//     virtual void displayInfo() = 0;    // Czysto wirtualna metoda
//     virtual ~Shape() {}
// };

// // Klasa pochodna Rectangle
// class Rectangle : public Shape {
// private:
//     double width, height;
// public:
//     Rectangle(double w, double h) : width(w), height(h) {}

//     double calculateArea() override {
//         return width * height;
//     }

//     void displayInfo() override {
//         cout << "Shape: Rectangle, Width: " << width << ", Height: " << height 
//              << ", Area: " << calculateArea() << endl;
//     }
// };

// // Klasa pochodna Circle
// class Circle : public Shape {
// private:
//     double radius;
// public:
//     Circle(double r) : radius(r) {}

//     double calculateArea() override {
//         return M_PI * radius * radius;
//     }

//     void displayInfo() override {
//         cout << "Shape: Circle, Radius: " << radius 
//              << ", Area: " << calculateArea() << endl;
//     }
// };

// int main() {
//     // Tworzenie tablicy wskaźników do Shape
//     Shape* shapes[] = {
//         new Rectangle(4.0, 5.0),
//         new Circle(3.0),
//         new Rectangle(6.0, 7.0),
//         new Circle(2.5)
//     };

//     // Wyświetlanie informacji o każdej figurze
//     for (Shape* shape : shapes) {
//         shape->displayInfo();
//         delete shape;
//     }

//     return 0;
// }