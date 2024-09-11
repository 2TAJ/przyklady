#include <iostream>
using namespace std;
#define PI 3.1415
#define READ_VARIABLE(m, promien) \
    cout << m;                    \
    cin >> promien
#define POLE (PI * promien * promien)
#define OBWOD (PI * 2 * promien)

int main()
{
    float promien;
    READ_VARIABLE("Podaj promien kola : ", promien);
    cout << promien << endl;
    cout << "Pole wynosi:" << POLE << endl;
    cout << "Obwod wynosi:" << OBWOD << endl;
    return 0;
}
