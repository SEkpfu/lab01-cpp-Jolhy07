#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    double h, d, s, v, l, PI;
    const double PI =3.14;
    cin >> h;
    cin >> d;
    v = (d * d) / (2.0 * 2.0) * PI * h / 3.0;
    l=sqrt(h*h+(d*d)/(2.0*2.0));
    s=PI*d/2.0*(d/2.0+l);
    cout << "Объём: " << v << "\n" << "Площадь: " << s;
    return 0;
}