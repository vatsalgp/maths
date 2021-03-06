#include <iostream>
using namespace std;

const float steps = 10, a = 0, b = 1;
const float width = (b - a) / steps;

float func(float x)
{
    return (1 / (1 + x * x));
}

float f(int i)
{
    return func(a + i * width);
}

void printSolution(float ans)
{
    cout << "The integral of the equation 1/x^2 over (0,1) is " << ans << endl;
}

int main()
{
    float p1 = func(a) + func(b);

    float p2 = 0;

    for (int i = 1; i < steps; i++)
        p2 += f(i);

    float sum = (p1 + 2 * p2) * width / 2;

    printSolution(sum);
}