#include <iostream>
#include <vector>
using namespace std;

int findMaxLenSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int max_len = 0;

    // Iterate over all subarray starting points
    for (int i = 0; i < n; i++) {
        // Iterate over all subarray ending points
        for (int j = i; j < n; j++) {
            int curr_sum = 0;

            // Calculate the sum of the subarray from i to j
            for (int l = i; l <= j; l++) {
                curr_sum += arr[l];
            }

            // If sum equals k, check the length
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
/*Conclusion:
Time Complexity: 
𝑂
(
𝑛
3
)
O(n 
3
 )
Space Complexity: 
𝑂
(
1
)
O(1) */