#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    double x, y, a, b, c, d, e, f, g;
    cin >> x;
    a=x*x;
    b=a*a;
    c=b*a;
    d=c*b;
    y=d-c+3*a-2;
    cout << "Игрик: "<<y;
    return 0;
}