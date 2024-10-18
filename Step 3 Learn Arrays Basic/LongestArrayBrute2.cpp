#include <iostream>
#include <vector>
using namespace std;

int findMaxLenSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int max_len = 0;

    // Iterate over all starting points of the subarray
    for (int i = 0; i < n; i++) {
        int curr_sum = 0; // Reset current sum for each starting point

        // Iterate over all ending points of the subarray
        for (int j = i; j < n; j++) {
            curr_sum += arr[j]; // Add the element to the current sum

            // If the sum equals k, check the length
            if (curr_sum == k) {
                max_len = max(max_len, j - i + 1);
            }
        }
    }

    return max_len;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6}; // Example array
    int k = 6; // Target sum
    int max_len = findMaxLenSubarray(arr, k);

    cout << "The maximum length of subarray with sum " << k << " is: " << max_len << endl;

    return 0;
}
/*Time Complexity: 
𝑂
(
𝑛
2
)
O(n 
2
 )
Space Complexity: 
𝑂
(
1
)
O(1)*/