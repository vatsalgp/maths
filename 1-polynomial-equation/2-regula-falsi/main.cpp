#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int precision = 3;

float func(float x)
{
	return (pow(x, 3) - 2 * x - 5);
}

void printSolution(float a, float b)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "f(x) = " << func(a) << endl;
	cout << "The solution of the equation ";
	cout << "x^3 - 2x - 5 = 0 using Regula Falsi method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(precision) << a << endl;
}

int main()
{
	float a = 2, b = 3, c = 3;
	for (int i = 0; i < 100; i++)
	{
		c = a - func(a) * (b - a) / (func(b) - func(a));

		if (func(c) * func(a) < 0)
			b = c;
		else
			a = c;
	}

	printSolution(a, b);
}
