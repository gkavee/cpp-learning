#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ofstream out;
    out.open("hello.txt");
    if (out.is_open())
    {
        int x, n, summa;
        cout << "введите x: ";
        cin >> x;
        cout << "введите n: ";
        cin >> n;

        for (int k = 1; k < n; k++)
        {
            summa += pow(x, 1/k) + abs(cos(x));
        }

        int res = x + summa;

        out << "x: " << x << endl;
        out << "n: " << n << endl;
        out << "result: " << res << endl;

    }

    out.close();

    ifstream inputFile("hello.txt");
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}
