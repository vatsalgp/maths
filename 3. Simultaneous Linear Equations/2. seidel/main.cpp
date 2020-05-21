#include <iostream>
#include <iomanip>
#include <math.h>
#include <array>

using namespace std;

int precision(float f1, float f2, int precision)
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

array<float, 3> f(array<float, 3> x)
{
    /*Equations are : 
        20x + y - 2z = 17
        3x + 20y - z = -18
        2x - 3y + 20z = 25

        which form:
        x = (17 - y + 2z ) / 20
        y = (-18 - 3x + z) / 20
        z = (25 - 2x + 3y) / 20  
    */
    float a = (17 - x[1] + 2 * x[2]) / 20;
    float b = (-18 - 3 * a + x[2]) / 20;
    float c = (25 - 2 * a + 3 * b) / 20;
    array<float, 3> ans = {a, b, c};
    return ans;
}

int main()
{
    int precision = 3;

    array<float, 3> next = {0}, prev = {0};
    do
    {
        prev[0] = next[0];
        prev[1] = next[1];
        prev[2] = next[2];

        next = f(prev);

    } while (!precision(next[0], prev[0], precision));
    cout << "The solution of the equations \n \n";
    cout << "20x + y - 2z = 17" << endl;
    cout << "3x + 20y - z = -18" << endl;
    cout << "2x - 3y + 20z = 25" << endl;
    cout << "\nusing Seidel Method is \n \n";
    cout << "x = ";
    cout << fixed << setprecision(precision) << next[0] << endl;
    cout << "y = ";
    cout << fixed << setprecision(precision) << next[1] << endl;
    cout << "z = ";
    cout << fixed << setprecision(precision) << next[2] << endl;
}