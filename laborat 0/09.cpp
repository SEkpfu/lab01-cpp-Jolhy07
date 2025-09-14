#include <iostream>
using namespace std;

int main()
{
    int N, hours, minutes, seconds;
    cin >> N;
    hours = N / 3600;
    minutes = (N % 3600) / 60;
    seconds = N % 60;
    cout << "Часы: " << hours << "\n";
    cout << "Минуты: " << minutes << "\n";
    cout << "Секунды: " << seconds;
    return 0;
}