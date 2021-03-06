#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int precision = 3;

class Values
{
public:
    float x, y, z;
    Values(float x = 0, float y = 0, float z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

bool precisionCheck(float f1, float f2)
{
    f1 *= pow(10, precision);
    f2 *= pow(10, precision);
    return (int)f1 == (int)f2;
}

bool precisionValues(Values a, Values b)
{
    return precisionCheck(a.x, b.x) && precisionCheck(a.y, b.y) && precisionCheck(a.z, b.z);
}

Values func(Values current)
{
    float x = (17 - current.y + 2 * current.z) / 20;
    float y = (-18 - 3 * current.x + current.z) / 20;
    float z = (25 - 2 * current.x + 3 * current.y) / 20;

    Values ans(x, y, z);
    return ans;
}

void printSolution(Values ans)
{
    cout << "The solution of the equations " << endl;
    cout << "20x + y - 2z = 17" << endl;
    cout << "3x + 20y - z = -18" << endl;
    cout << "2x - 3y + 20z = 25" << endl;
    cout << "using Jacobi Method is " << endl;
    cout << "x = ";
    cout << fixed << setprecision(precision) << ans.x << endl;
    cout << "y = ";
    cout << fixed << setprecision(precision) << ans.y << endl;
    cout << "z = ";
    cout << fixed << setprecision(precision) << ans.z << endl;
}

int main()
{
    Values prev, next;

    do
    {
        prev = next;
        next = func(next);

    } while (!precisionValues(prev, next));

    printSolution(next);
}