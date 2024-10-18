#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0;  // To store the maximum number of consecutive ones
    int cnt = 0;   // To count the current streak of consecutive ones

    // Loop through the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cnt++;  // If we find a 1, increase the current count
            maxi = max(maxi, cnt);  // Update maxi if cnt is larger
        } else {
            cnt = 0;  // Reset count if we encounter a 0
        }
    }

    return maxi;  // Return the maximum number of consecutive ones
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};  // Example array
    cout << "Maximum consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}

/*
Time Complexity (T.C.): O(N)
- We traverse the array once, so the time complexity is O(N), where N is the size of the array.

Space Complexity (S.C.): O(1)
- We use constant space to store a few integer variables (maxi, cnt), so the space complexity is O(1).
*/
