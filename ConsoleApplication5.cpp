#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, Y;
    cout << "Введіть Х: ";
    cin >> x;
    Y = 0;
    for (int i = 1; i <= 3; i++) {
        Y += pow(x, i);
    }
    Y = log(pow(x, 3) + cos(Y));
    printf("Результат: %lf", Y);
}


