#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            // left sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // right sorted
            else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

/*
   Time Complexity (T.C.): O(log n)
   - In each iteration, the algorithm halves the search space, making it a logarithmic time complexity.
   - Therefore, the time complexity is O(log n), where n is the number of elements in the array.

   Space Complexity (S.C.): O(1)
   - The algorithm uses only a constant amount of extra space for variables like low, high, and mid.
   - Therefore, the space complexity is O(1).
*/
