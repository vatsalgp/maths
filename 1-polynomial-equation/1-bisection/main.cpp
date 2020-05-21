#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int precision = 3;

int precisionCheck(float f1, float f2)
{
	f1 *= pow(10, precision);
	f2 *= pow(10, precision);
	return (int)f1 == (int)f2;
}

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
	cout << "x^3 - 2x - 5 = 0 using bisection method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(precision) << a << endl;
}

int main()
{
	float a = 2, b = 3, c;

	while (!precisionCheck(a, b))
	{
		c = (a + b) / 2;
		if (func(c) * func(a) < 0)
			b = c;
		else
			a = c;
	}

	printSolution(a, b);
}
