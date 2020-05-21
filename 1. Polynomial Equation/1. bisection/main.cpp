#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int precisionCheck(float f1, float f2, int precision)
{
	f1 *= pow(10, precision);
	f2 *= pow(10, precision);
	return (int)f1 == (int)f2;
}

float func(float x)
{
	return (pow(x, 3) - 2 * x - 5);
}

void printInfo()
{
	cout << "Vatsal Gupta" << endl;
	cout << "4th Sem" << endl;
	cout << "03520803118" << endl
		 << endl;
}

int main()
{
	int precision = 3;
	//int steps = 0;
	float a = 2, b = 3, c;
	while (!precision(a, b, precision))
	{
		//steps++;
		c = (a + b) / 2;
		if (func(c) * func(a) < 0)
			b = c;
		else
			a = c;
		// cout << a << " " << b << endl;
	}

	printInfo();

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "f(x) = " << func(a) << endl
		 << endl;

	cout << "The solution of the equation ";
	cout << "x^3 - 2x - 5 = 0 using bisection method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(precision) << a << endl;
}
