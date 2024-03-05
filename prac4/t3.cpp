#include <iostream>
#include <cmath>

using namespace std;

int prod(int x, int n, int k)
{
    int res = 1;
    for (int k = 1; k < n; k++)
    {
        res *= (k + 1) + x * sin(abs(x));
    }
    return res;
}

int f(int x, int n, int k)
{
    return abs(x * cos(x)) + prod(x, n, k);
}

int main()
{
    int x, int n, int k;
    cin >> x;
    cin >> n;
    cin >> k;
    cout << f(x, n, k);

    return 0;
}