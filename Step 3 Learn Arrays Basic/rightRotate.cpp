#include<bits/stdc++.h>
using namespace std;

void rightD(int arr[], int n, int d) {
    d = d % n; // In case d is greater than n
    int temp[d]; // Temporary array to store last d elements

    // Store last d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    // Place temp elements at the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

void rightDrev(int arr[], int n, int d) {
    d = d % n; // In case d is greater than n
    reverse(arr, arr + n); // Reverse the entire array
    reverse(arr, arr + d); // Reverse the first d elements
    reverse(arr + d, arr + n); // Reverse the remaining elements
}

int main() {
    int d = 3;
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Initialize array

    // Perform the right rotation using method 1
    rightD(arr, n, d); 

    // Print the rotated array (Method 1)
    cout << "Array after right rotation using temp array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reinitialize the array for the next rotation
    int arr1[] = {1, 2, 3, 4, 5, 6, 7}; 
    d = 2; // New rotation value

    // Perform the right rotation using reverse method
    rightDrev(arr1, n, d);

    // Print the rotated array (Method 2)
    cout << "Array after right rotation using reverse method: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
