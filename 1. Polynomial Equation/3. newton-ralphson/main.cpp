#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float f(float x)
{
	return (pow(x, 3) - 2 * x - 5);
}

float fd(float x)
{
	return (3 * pow(x, 2) - 2);
}

int precisionCheck(float f1, float f2, int precision)
{
	f1 *= pow(10, precision);
	f2 *= pow(10, precision);
	return (int)f1 == (int)f2;
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
	float next = 0, prev = 0;
	do
	{
		prev = next;
		next = prev - f(prev) / fd(prev);

	} while (!precision(next, prev, precision));

	printInfo();

	cout << "The solution of the equation ";
	cout << "x^3 - 2x - 5 = 0 using Newton Ralphson method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(precision) << next << endl;
}
