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

int pres(float f1, float f2, int p)
{
	f1 *= pow(10, p);
	f2 *= pow(10, p);
	return (int)f1 == (int)f2;
}

void info()
{
	cout << "Vatsal Gupta" << endl;
	cout << "4th Sem" << endl;
	cout << "03520803118" << endl
		 << endl;
}

int main()
{
	int p = 3;
	float next = 0, prev = 0;
	do
	{
		prev = next;
		next = prev - f(prev) / fd(prev);

	} while (!pres(next, prev, p));

	info();

	cout << "The solution of the equation ";
	cout << "x^3 - 2x - 5 = 0 using Newton Ralphson method is" << endl;
	cout << "x = ";
	cout << fixed << setprecision(p) << next << endl;
}
