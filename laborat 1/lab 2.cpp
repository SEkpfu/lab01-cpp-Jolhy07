#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g;
    cin >> a;
    b=a/100*100;
    c=a/100;
    d=a/10*10-b;
    e=a-b-d;
    f=e*100;
    g=f+d+c;
    cout << g;
    return 0;
}