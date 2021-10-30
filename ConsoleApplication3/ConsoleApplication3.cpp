#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введіть номер цифри: ";
	cin >> a;
	switch (a) 
	{
		case 0:case 1:cout << "Літери відсутні!"; break;
		case 2:cout << "A, B, C"; break;
		case 3:cout << "D, E, F"; break;
		case 4:cout << "G, H, I"; break;
		case 5:cout << "J, K, L"; break;
		case 6:cout << "M, N, O"; break;
		case 7:cout << "P, Q, R, S"; break;
		case 8:cout << "T, U, V"; break;
		case 9:cout << "W, X, Y, Z"; break;
		default:cout << "Не існує!"; break;
	}
}

