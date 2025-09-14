#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    b = a / 1000;
    c = a % 10;
    cout << "Первая цифра: " << b << "\n";
    cout << "Последняя цифра: " << c;
    return 0;
}