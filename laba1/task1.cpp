#include <iostream>

using namespace std;

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

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        int minValue = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < minValue) {
                minIndex = j;
                minValue = arr[j];
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[11] = {5, 2, 8, 1, 3, 99, 44, 23, 1000, 11, 54};

    cout << "Массив: ";
    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }

    int choice;
    cout << "\nВыберите тип сортировки (1 - пузырьковая, 2 - выбором): ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr, 11);
            cout << "\nПузырьковая сортировка: ";
            break;
        case 2:
            selectionSort(arr, 11);
            cout << "\nСортировка выбором: ";
            break;
        default:
            cout << "Некорректный выбор.";
            return 1;
    }

    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
