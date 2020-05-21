#include <iostream>
using namespace std;

float func(float x, float y)
{
    return (x * x + y * y);
}

const float x0 = 1, y0 = 1.5, h = 0.1;

void printSolution(float ans)
{
    cout << "The solution to the equation" << endl;
    cout << "y' = x^2 + y^2 ; y(1) = 1.5" << endl;
    cout << "at x = 1.1 is y = " << ans << endl;
}

int main()
{
    float k1 = h * func(x0, y0);
    float k2 = h * func(x0 + h / 2, y0 + k1 / 2);
    float k3 = h * func(x0 + h / 2, y0 + k2 / 2);
    float k4 = h * func(x0 + h, y0 + k3);
    float k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    float ans = y0 + k;

    printSolution(ans);
}