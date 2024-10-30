#include <iostream>
using namespace std;

// Function to move zeros to the end of the array
void MoveZero(int arr[], int n) {
    int j = -1; // Pointer for the position of the last zero found

    // Find the first zero in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i; // Update the position of the last zero found
            break; // Exit the loop once the first zero is found
        }
    }

    // If there are no zeros in the array, return early
    if (j == -1) return;

    // Move non-zero elements to the position of the last zero found
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); // Swap non-zero with the last zero position
            j++; // Move the last zero position forward
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {0, 1, 0, 3, 12}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to move zeros
    MoveZero(arr, n);

    // Print the modified array
    printArray(arr, n);

    return 0;
}
// T.c = O(n)
//s.c = o(1)