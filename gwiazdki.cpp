// #include <iostream>
// using namespace std;

// int main()
// {
//     short int howManyTimes = 0;
//     short int j = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         for (int k = 0; k < 5; k++)
//         {
//             for (j = 0; j < 10; j++)
//             {
//                 cout << "+";
//             }
//             cout << endl;
//         }
//         howManyTimes++;
//         if (howManyTimes == 4)
//         {
//             for (j = 0; j < 10; j++)
//             {
//                 cout << "*";
//             }
//         }
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {

//         for (int j=10; j >= i; j--)// for (int j=0; j <10-i; j++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}