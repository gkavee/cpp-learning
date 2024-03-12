#include <iostream>

using namespace std;

void change(int *arr, int size)
{
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }   
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    change(arr, size);

    cout << "изменённый массив" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}
