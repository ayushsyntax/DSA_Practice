#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int N) {
    // Loop through all numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        bool flag = false;  // Initialize flag to false for each number
        
        // Check if the current number 'i' is present in the array
        for (int j = 0; j < N - 1; j++) { // N-1 because one number is missing
            if (arr[j] == i) {
                flag = true;  // Set flag to true if number is found
                break;        // Break out of the inner loop since number is found
            }
        }
        
        // If flag remains false, the number is missing
        if (!flag) {
            return i;
        }
    }
    
    // No missing number (should not happen in valid input)
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5}; // Example array with one missing number
    int N = 5; // Total numbers should be from 1 to N

    int missingNumber = findMissingNumber(arr, N);
    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}
