#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "m = "; cin >> x; // test

	z1 = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) + 1 - 2 * (sin(2 * x) * sin(2 * x)));
	z2 = 2 * sin(x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();

	return 0;
}