#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int precision = 3;

float func(float x)
{
	return (pow(x, 3) - 2 * x - 5);
}

float funcD(float x)
{
	return (3 * pow(x, 2) - 2);
}

int precisionCheck(float f1, float f2)
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
	float next = 0, prev = 0;

	do
	{
		prev = next;
		next = prev - func(prev) / funcD(prev);

	} while (!precisionCheck(next, prev));

	printInfo();

	cout << "The solution of the equation ";
	cout << "x^3 - 2x - 5 = 0 using Newton Ralphson method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(precision) << next << endl;
}
