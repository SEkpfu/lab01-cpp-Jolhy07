#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double s, r, l;
    cout << "Площадь круга: ";
    cin >> s;
    r = sqrt(s / M_PI);
    l = 2.0 * M_PI * r;
    cout << "Радиус: " << r << "\n";
    cout << "Длина окружности: " << l;
    return 0;
}