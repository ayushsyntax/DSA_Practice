#include <bits/stdc++.h>
using namespace std;

int PeakElement(int arr[], int n) {
    // Handle edge cases
    if (n == 1) return 0; // Only one element
    if (arr[0] > arr[1]) return 0; // First element is a peak
    if (arr[n - 1] > arr[n - 2]) return n - 1; // Last element is a peak

    int low = 1, high = n - 2; // Start searching between first and last element
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid index
        // Check if mid is a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid; // Found a peak
        }
        // Move towards the side where a greater element exists
        else if (arr[mid] > arr[mid - 1]) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }
    return -1; // Should not reach here if the input guarantees a peak
}


int main() {
    int arr[] = {1, 3, 20, 4, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peakIndex = PeakElement(arr, n);
    
    if (peakIndex != -1) {
        cout << "Peak element: " << arr[peakIndex] << " at index " << peakIndex << endl;
    } else {
        cout << "No peak element found." << endl;
    }
    
    return 0;
}
