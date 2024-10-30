#include <iostream>
#include <vector>

using namespace std;

int firstOccur(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int first = -1;  // Initialize first as -1 to handle cases when x is not found.
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x) {
            first = mid;    // Update first with mid index.
            high = mid - 1; // Move left to check for earlier occurrence.
        } 
        else if (arr[mid] < x) {
            low = mid + 1;  // Move right to search in the right half.
        } 
        else {
            high = mid - 1; // Move left to search in the left half.
        }
    }
    return first;  // Return the index of the first occurrence or -1 if not found.
}

int lastOccur(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int last = -1;  // Initialize last as -1 to handle cases when x is not found.
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x) {
            last = mid;    // Update last with mid index.
            low = mid + 1; // Move right to check for later occurrence.
        } 
        else if (arr[mid] < x) {
            low = mid + 1;  // Move right to search in the right half.
        } 
        else {
            high = mid - 1; // Move left to search in the left half.
        }
    }
    return last;  // Return the index of the last occurrence or -1 if not found.
}

// Function to find first and last occurrence of x
vector<int> findFirstAndLastOccur(int arr[], int n, int x) {
    int first = firstOccur(arr, n, x);
    
    // If the element is not found, return {-1, -1}.
    if (first == -1) {
        return {-1, -1};
    }
    
    // Otherwise, find the last occurrence.
    int last = lastOccur(arr, n, x);
    
    // Return both first and last occurrence as a vector.
    return {first, last};
}

// Function to count occurrences of x
int count(int arr[], int n, int x) {
    int first = firstOccur(arr, n, x);
    
    // If x is not found in the array, return 0
    if (first == -1) {
        return 0;
    }
    
    int last = lastOccur(arr, n, x);
    
    // Count of occurrences is (last - first + 1)
    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;

    // Call the findFirstAndLastOccur function
    vector<int> result = findFirstAndLastOccur(arr, n, x);
    
    // Print the result
    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    
    // Call the count function and print the total occurrences
    int totalCount = count(arr, n, x);
    cout << "Total Occurrences of " << x << ": " << totalCount << endl;

    return 0;
}
