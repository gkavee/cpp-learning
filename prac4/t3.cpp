#include <iostream>
#include <cmath>

using namespace std;

float prod(int x, int n)
{
    float res = 1;
    for (int k = 1; k < n; k++)
    {
        res *= (k + 1) + x * sin(abs(x));
    }
    return res;
}

float f(int x, int n)
{
    return abs(x * cos(x)) + prod(x, n);
}

int main()
{
    int x, int n;
    cin >> x;
    cin >> n;
    cout << f(x, n);

    return 0;
}