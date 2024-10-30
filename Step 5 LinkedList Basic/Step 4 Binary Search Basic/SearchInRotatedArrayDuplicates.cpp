#include <iostream>
#include <vector>

using namespace std;



#include <vector>

class Solution {
public:
    int searchInRotatedWithDuplicates(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;  // Target found
            }

            // Handling duplicates by skipping over identical elements
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            }
            // Left half is sorted
            else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;  // Target is in the left sorted half
                } else {
                    low = mid + 1;  // Target is in the right half
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;  // Target is in the right sorted half
                } else {
                    high = mid - 1;  // Target is in the left half
                }
            }
        }
        return -1;  // Target not found
    }
};

/*
Example usage:

    std::vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    int result = Solution().searchInRotatedWithDuplicates(nums, target);

    // If target is found, result will be its index; otherwise, result will be -1.

Time Complexity (T.C.): Average case O(log n), but can degrade to O(n) in worst cases due to duplicates
Space Complexity (S.C.): O(1)
*/
