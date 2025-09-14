#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, h, V, S;
    cout << "Радиус: ";
    cin >> r;
    cout << "Высота: ";
    cin >> h;
    V = M_PI * r * r * h;
    S = 2.0 * M_PI * r * (r + h);
    cout << "Объем: " << V << "\n";
    cout << "Площадь поверхности: " << S;
    return 0;
}