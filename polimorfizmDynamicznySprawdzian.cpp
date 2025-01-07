// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.

//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:

// Hau!
// Miau!
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound() = 0;
};
class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Hau!" << endl;
    }
};
class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Miau!" << endl;
    }
};
int main()
{
    Animal *animal = new Dog();
    animal->makeSound();
    Animal *animal2 = new Cat();
    animal2->makeSound();

    // Dog pies;
    // pies.makeSound();
    // Cat kot;
    // kot.makeSound();
    return 0;
}