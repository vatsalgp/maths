#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const float x = 0.1;
const int precision = 3;

float y(float x)
{
    return (1 - x + pow(x, 2) / 2 - pow(x, 3) / 6);
}

int main()
{
    cout << "The solution of the equation " << endl;
    cout << "y' = x^2 - y ; y(0) = 1" << endl;
    cout << "at x = 0.1 is y = ";
    cout << setprecision(precision) << y(x) << endl;
}