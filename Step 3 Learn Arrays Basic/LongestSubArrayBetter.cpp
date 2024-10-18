#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSumMap;  // Stores prefix sums and their first occurrence index
    int n = arr.size();                    // Size of the array
    int prefixSum = 0;                     // Prefix sum to accumulate the sum of elements
    int maxLength = 0;                     // To store the maximum length of subarray with sum k

    // Traverse through the array
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];               // Add current element to the prefix sum

        // If the entire subarray from index 0 to i has sum k
        if (prefixSum == k) {
            maxLength = i + 1;
        }

        // Check if prefixSum - k is in the map
        if (prefixSumMap[prefixSum - k] != 0) {
            // Subarray with sum k found
            maxLength = max(maxLength, i - prefixSumMap[prefixSum - k]);
        }

        // Store the prefix sum if it's not already present
        if (prefixSumMap[prefixSum] == 0) {
            prefixSumMap[prefixSum] = i + 1; // Store the 1-based index to distinguish between non-existent and index 0
        }
    }

    return maxLength; // Return the maximum length of subarray found
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9}; // Example array
    int k = 15;                            // Desired sum
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
/*Brute-Force: O(n²) time, straightforward but inefficient for large arrays.
Better (Prefix Sum + Hash Map): O(n) time, optimal for arrays with positive and negative numbers.
Optimal (Sliding Window): O(n) time, works only when the array contains positive integers.*/