#include <iostream>
using namespace std;

class Block
{
public:
    virtual float objetosc();
    virtual void zwrocDane();
};

class Cylinder : public Block
{
public:
    int radius, h;
    virtual float objetosc();
    virtual void zwrocDane();
};

class Cone : public Cylinder
{
public:
    virtual float objetosc();
    virtual void zwrocDane();
};

class Cuboid : public Block
{
public:
    int a, b, h;
    virtual float objetosc();
    virtual void zwrocDane();
};

float Cylinder::objetosc()
{
    return 3.14 * (radius * radius) * h;
}

float Cone::objetosc()
{
    return (3.14 * radius * radius * h) / 3;
}

float Cuboid::objetosc()
{
    return a * b * h;
}
float Block::objetosc()
{
    return 0;
}
void Block::zwrocDane()
{
}

void Cylinder::zwrocDane()
{
    cout << "Wysokosc: " << h << endl;
    cout << "Promien: " << radius << endl;
    cout << "Objetosc: " << objetosc() << endl;
}

void Cone::zwrocDane()
{
    cout << "Wysokosc: " << h << endl;
    cout << "Promien: " << radius << endl;
    cout << "Objetosc: " << objetosc() << endl;
}

void Cuboid::zwrocDane()
{
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "Wysokosc: " << h << endl;
    cout << "Objetosc: " << objetosc() << endl;
}

int main()
{
    Cuboid cuboid;
    cuboid.a = 10;
    cuboid.b = 5;
    cuboid.h = 3;
    cuboid.zwrocDane();
    return 0;
}
// #include <iostream>
// using namespace std;

// class Block
// {
// public:
//    virtual float volume()
//    {
//       return 0;
//    };
// };

// class Cuboid : public Block
// {
// public:
//    int a, b, h;
//    float volume()
//    {
//       return a * b * h;
//    }
// };

// class Cylinder : public Block
// {
// public:
//    int h, r;
//    float volume()
//    {
//       return r * r * 3.14 * h;
//    }
// };

// class Cone : public Block
// {
// public:
//    int h, r;
//    float volume()
//    {
//       return r * r * 3.14 * (0.33 * h);
//    }
// };

// int main()
// {
//    Cone cone;
//    cone.h = 2;
//    cone.r = 2;
//    Cylinder cylinder;
//    cylinder.h = 2;
//    cylinder.r = 2;
//    Cuboid cuboid;
//    cuboid.a = 2;
//    cuboid.b = 2;
//    cuboid.h = 2;
//    Block *block;
//    block = &cone;
//    cout << "Objetosc stozka " << block->volume() << endl;
//    block = &cylinder;
//    cout << "Objetosc walca " << block->volume() << endl;
//    block = &cuboid;
//    cout << "Objetosc prostopadloscianu " << block->volume() << endl;
//    return 0;
// }

#include <iostream>
// using namespace std;

// class Block
// {
// public:
//     virtual float objetosc();
//     virtual void zwrocDane();
// };

// class Cylinder : public Block
// {
// public:
//     int radius, h;
//     virtual float objetosc();
//     virtual void zwrocDane();
// };

// class Cone : public Cylinder
// {
// public:
//     virtual float objetosc();
//     virtual void zwrocDane();
// };

// class Cuboid : public Block
// {
// public:
//     int a, b, h;
//     virtual float objetosc();
//     virtual void zwrocDane();
// };

// float Cylinder::objetosc()
// {
//     return 3.14 * (radius * radius) * h;
// }

// float Cone::objetosc()
// {
//     return (3.14 * radius * radius * h) / 3;
// }

// float Cuboid::objetosc()
// {
//     return a * b * h;
// }
// float Block::objetosc()
// {
//     return 0;
// }
// void Block::zwrocDane()
// {
// }

// void Cylinder::zwrocDane()
// {
//     cout << "Wysokosc: " << h << endl;
//     cout << "Promien: " << radius << endl;
//     cout << "Objetosc: " << objetosc() << endl;
// }

// void Cone::zwrocDane()
// {
//     cout << "Wysokosc: " << h << endl;
//     cout << "Promien: " << radius << endl;
//     cout << "Objetosc: " << objetosc() << endl;
// }

// void Cuboid::zwrocDane()
// {
//     cout << "A: " << a << endl;
//     cout << "B: " << b << endl;
//     cout << "Wysokosc: " << h << endl;
//     cout << "Objetosc: " << objetosc() << endl;
// }

// int main()
// {
//     Cuboid cuboid;
//     cuboid.a = 10;
//     cuboid.b = 5;
//     cuboid.h = 3;
//     cuboid.zwrocDane();
//     return 0;
// }
// // #include <iostream>
// // using namespace std;

// // class Block
// // {
// // public:
// //    virtual float volume()
// //    {
// //       return 0;
// //    };
// // };

// // class Cuboid : public Block
// // {
// // public:
// //    int a, b, h;
// //    float volume()
// //    {
// //       return a * b * h;
// //    }
// // };

// // class Cylinder : public Block
// // {
// // public:
// //    int h, r;
// //    float volume()
// //    {
// //       return r * r * 3.14 * h;
// //    }
// // };

// // class Cone : public Block
// // {
// // public:
// //    int h, r;
// //    float volume()
// //    {
// //       return r * r * 3.14 * (0.33 * h);
// //    }
// // };

// // int main()
// // {
// //    Cone cone;
// //    cone.h = 2;
// //    cone.r = 2;
// //    Cylinder cylinder;
// //    cylinder.h = 2;
// //    cylinder.r = 2;
// //    Cuboid cuboid;
// //    cuboid.a = 2;
// //    cuboid.b = 2;
// //    cuboid.h = 2;
// //    Block *block;
// //    block = &cone;
// //    cout << "Objetosc stozka " << block->volume() << endl;
// //    block = &cylinder;
// //    cout << "Objetosc walca " << block->volume() << endl;
// //    block = &cuboid;
// //    cout << "Objetosc prostopadloscianu " << block->volume() << endl;
// //    return 0;
// // }
// #include <iostream>
// using namespace std;

// class Block
// {
// public:
//     virtual float volume()
//     {
//         return 0;
//     };
// };

// class Cuboid : public Block
// {
// public:
//     Cuboid() {};
//     Cuboid(int szer_p, int h_p, int r_p)
//     {
//         a = h_p;
//         b = r_p;
//         h = szer_p;
//     };
//     int a, b, h;
//     float volume()
//     {
//         return a * b * h;
//     }
// };

// class Cylinder : public Block
// {
// public:
//     Cylinder() {};
//     Cylinder(int h_p, int r_p)
//     {
//         h = h_p;
//         r = r_p;
//     };
//     int h, r;
//     float volume()
//     {
//         return r * r * 3.14 * h;
//     }
// };

// class Cone : public Block
// {
// public:
//     Cone() {};
//     Cone(int h_p, int r_p)
//     {
//         h = h_p;
//         r = r_p;
//     };
//     int h, r;
//     float volume()
//     {
//         return r * r * 3.14 * (0.33 * h);
//     }
// };

// int main()
// {
//     Block *block = new Cone(2, 2);
//     cout << "Objetosc stozka " << block->volume() << endl;
//     block = new Cylinder(2, 2);
//     cout << "Objetosc walca " << block->volume() << endl;
//     block = new Cuboid(2, 2, 2);
//     cout << "Objetosc prostopadloscianu " << block->volume() << endl;
//     return 0;
// }