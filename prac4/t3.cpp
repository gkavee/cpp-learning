#include <iostream>
#include <cmath>

using namespace std;

float prod(float x, float n)
{
    float res = 1;
    for (int k = 1; k < n; k++)
    {
        res *= (k + 1) + x * sin(abs(x));
    }
    return res;
}

float f(float x, float n)
{
    return abs(x * cos(x)) + prod(x, n);
}

int main() {
    float x, n;
    cin >> x;
    cin >> n;
    cout << f(x, n) << endl;
    cout << prod(x, n);

    return 0;
}