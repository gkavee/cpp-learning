#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A[5];
    int B[5];
    int C[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "введите элемент массива A: ";
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "введите элемент массива B: ";
        cin >> B[i];
    }

    for (int i = 0; i < 5; i++)
    {
        C[i] = fmax(A[i], B[i]);
    }

    cout << "массив A: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout << "\nмассив B: ";
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }
    
    cout << "\nмассив C: ";
    for (int i = 0; i < 5; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}