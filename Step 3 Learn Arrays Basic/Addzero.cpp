#include <iostream>
#include <vector>

using namespace std;

// Function to move zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int temp[n]; // Temporary array to store non-zero elements
    int index = 0; // Index to track position in temp

    // Iterate through the original array
    for (int i = 0; i < n; i++) {
        // Store non-zero elements in temp
        if (arr[i] != 0) {
            temp[index++] = arr[i]; // Add non-zero element to temp
        }
    }

    // Fill remaining positions in temp with zeros
    for (int i = index; i < n; i++) {
        temp[i] = 0; // Add zeros at the end
    }

    // Copy the temp array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i]; // Now arr contains all non-zero elements followed by zeros
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
    moveZerosToEnd(arr, n);

    // Print the modified array
    printArray(arr, n);

    return 0;
}
