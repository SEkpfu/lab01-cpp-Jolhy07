#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double R, V;
    cout << "Радиус: ";
    cin >> R;
    V = 4.0 / 3.0 * PI * R * R * R;
    cout << "Объем: " << V;
    return 0;
}