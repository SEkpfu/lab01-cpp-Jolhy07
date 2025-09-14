#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, sum;
    cin >> a;
    cin >> b;
    c = a % 10;
    d = b % 10;
    sum = c + d;
    cout << "Сумма последних цифр: " << sum;
    return 0;
}