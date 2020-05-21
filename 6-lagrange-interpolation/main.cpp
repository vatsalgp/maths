#include <iostream>
using namespace std;

class Pair
{
public:
    int x, y;
    Pair(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
};

const Pair pairs[] = {{5, 12}, {6, 13}, {9, 14}, {11, 16}};
const int length = 4;
const int x = 10;

int product(int constant, int skip)
{
    int output = 1;
    for (int i = 0; i < length; i++)
        if (i != skip)
            output *= (constant - pairs[i].x);
    return output;
}

void printSolution(float ans)
{
    cout << "For the polynomial passing through the points (5,12), (6,13), (9,14), (11,16)" << endl;
    cout << "The value it has for x = 10 is y = " << ans << endl;
}

int main()
{
    float sum = 0;
    for (int i = 0; i < length; i++)
        sum += (float)pairs[i].y * product(x, i) / product(pairs[i].x, i);

    printSolution(sum);
}