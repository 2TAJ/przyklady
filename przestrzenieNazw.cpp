#include <iostream>
using namespace std;
namespace dawneMiary
{
    const float sazen = 180;
}

int main()
{
    float wzrost;
    cout << "Podaj swoj wzrost " << endl;
    cin >> wzrost;
    wzrost = wzrost / dawneMiary::sazen;
    cout << "Twoj wzrost w sążniach wynosi " << wzrost << endl;
    return 0;
}