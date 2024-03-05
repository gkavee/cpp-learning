#include <iostream>

using namespace std;

void change(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
} 

int main() {
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (size_t i = 0; i < size; i++)
    {
        change(arr, size);
    }
    delete [] arr;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
