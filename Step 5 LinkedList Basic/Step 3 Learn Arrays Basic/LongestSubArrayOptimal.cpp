#include <iostream>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int maxLength = 0;  // Variable to store the maximum length of the subarray with sum k

    // Outer loop to fix the start point of the subarray
    for (int start = 0; start < n; start++) {
        int currentSum = 0;  // Initialize current sum for this starting point
        
        // Inner loop to extend the subarray and calculate its sum
        int end = start;
        while (end < n) {
            currentSum += arr[end];  // Add the current element to the sum
            
            // If we find a subarray with sum equal to k, update maxLength
            if (currentSum == k) {
                maxLength = max(maxLength, end - start + 1);  // Update max length if current subarray is longer
            }
            
            end++;  // Move the end pointer to expand the subarray
        }
    }

    return maxLength;  // Return the length of the longest subarray with sum k
}

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int k = 15;  // Desired sum

    // Call the function and print the result
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, n, k) << endl;

    return 0;
}
