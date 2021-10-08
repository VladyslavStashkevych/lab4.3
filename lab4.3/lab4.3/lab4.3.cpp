// lab4.3.cpp
// Сташкевич Владислав
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 19


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, xFirst, xLast, dx, a, b, c, F;

	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	cout << "Enter first x: "; cin >> xFirst;
	cout << "Enter last x: "; cin >> xLast;
	cout << "Enter dx: "; cin >> dx;

	cout << fixed;
	cout << "\n---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
			    << setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xFirst; x <= xLast; x += dx) {
		if ((x < 5) && (b != 0)) F = a * pow((x + 7), 2) - b;
		else if ((x > 5) && (b == 0)) F = (x - c * a) / (a * x);
		else F = x / c;

		cout << "|" << setw(7)  << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
	}

	return 0;
}