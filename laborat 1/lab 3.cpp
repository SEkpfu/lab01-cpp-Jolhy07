#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    d=a+b+c;
    e=a*b*c;
    ((a+b)>10)? (cout<<"Сумма: "<< d << "\n" << "Произведение: " << e << "\n") :(((a-b)>0)? (cout<<"наибольшее число из 2: "<<a) : (cout<<"наибольшее число из 2: "<<b));
    return 0;
}