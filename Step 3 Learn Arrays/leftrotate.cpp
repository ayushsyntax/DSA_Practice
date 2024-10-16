#include <iostream>
using namespace std;

void leftarr(int arr[], int n) {
    int temp = arr[0];

    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void print(int arr[], int n) {
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a new line after printing the array
}

int main() {
    int arr[] = {1, 3, 45, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct size calculation
    leftarr(arr, n);
    print(arr, n);
    return 0; // Main should return 0
}
