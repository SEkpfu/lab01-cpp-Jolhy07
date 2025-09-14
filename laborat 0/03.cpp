#include <iostream>
using namespace std;

int main()
{
    double tC, tF, tK;
    cout << "Температура в Цельсиях: ";
    cin >> tC;
    tF = 9.0 / 5.0 * tC + 32.0;
    tK = tC + 273.0;
    cout << "Фаренгейт: " << tF << "\n";
    cout << "Кельвин: " << tK;
    return 0;
}