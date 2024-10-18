#include<bits/stdc++.h>
using namespace std;
//Recursive way

class Solution {
public:
    int search(vector<int>& nums, int low, int high, int target) {
        // Base case: if the search space is empty
        if (low > high) {
            return -1;
        }
        
        // Calculate the mid-point of the current search space
        int mid = low + (high - low) / 2;
        
        // If the target is found at the mid-point
        if (nums[mid] == target) {
            return mid;
        }
        
        // If target is less than the middle element, search the left half
        if (target < nums[mid]) {
            return search(nums, low, mid - 1, target);
        }
        
        // Otherwise, search the right half
        return search(nums, mid + 1, high, target);
    }
    
    // Helper function to initiate the binary search
    int search(vector<int>& nums, int target) {
        return search(nums, 0, nums.size() - 1, target);
    }
};


/* Time C:- O(logbase2N)
 S.C :- O(1)*/
