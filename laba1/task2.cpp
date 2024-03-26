#include <iostream>
#include <algorithm>

using namespace std;

const int rows = 5;
const int cols = 5;

void printArray(int arr[][cols], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortOddRows(int arr[][cols], int rows, int cols) {
    for (int i = 1; i < rows; i += 2) {
        bubbleSort(arr[i], cols);
    }
}

int main() {
    int array[rows][cols] = {
        {5, 2, 8, 1, 3},
        {9, 4, 6, 7, 2},
        {1, 8, 3, 5, 4},
        {7, 6, 2, 9, 1},
        {4, 5, 3, 2, 8}
    };

    cout << "Исходный массив:" << endl;
    printArray(array, rows, cols);

    sortOddRows(array, rows, cols);

    cout << "\nМассив после сортировки нечетных строк по возрастанию:" << endl;
    printArray(array, rows, cols);

    return 0;
}
