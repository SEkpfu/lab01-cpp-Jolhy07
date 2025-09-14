#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
    double x, y, a, b, c, a0, b0, c0;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    a = y * y + 12 * x * y - 3 * x * x;
    b = 18 * y - 1;
    c = exp(x) - a / b;
    a0 = 1 + sin(sqrt(x + 1));
    b0 = cos(12 * y - 4);
    c0 = a0 / b0;
    cout << showpos << fixed << setprecision(5) << c << endl;
    cout << showpos << scientific << c0 << endl;
    return 0;
}