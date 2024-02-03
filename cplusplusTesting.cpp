#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// Задание 1
#define t 1
#define z 3
#define y sin(t)
#define x 4 * pow(y, 2) / (4 * z - 2 * pow(t, 3))

// Задание 2
//int z;
//#define x 1.24
//#define y 2.55
//#define w (pow(x, 2) * sqrt(y) - pow(y, 2) * sqrt(x)) / (pow(x, 2) + pow(y, 2))
//#define f pow((x + y + pow(z, 3)), 2) / ((x + z) / pow(z, 2))

int main(void)
{
	setlocale(LC_ALL, "Russian");

	// Задание 1
	cout << x;
	return 0;

	// Задание 2
	//cout << "Введите z\n";
	//cin >> z;
	//cout << "f = " << f << "\n";

	// Задание 3
	/*double pi = 3.14159265358979323846;
	int a;
	int A;

	cout << "Введите a\n";
	cin >> a;

	cout << "Введите A\n";
	cin >> A;

	double y = sin(pi / 2 + 3 * a) / (1 - sin(3 * A - pi));

	cout << "y = " << y;*/
}
