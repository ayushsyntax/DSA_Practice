#include<bits/stdc++.h>
using namespace std;
//iterative way


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]==target)
            return mid;
            else if (target> nums[mid])
            {
                low = mid +1;
            }
            else
            high = mid -1;

        }

        return -1;
        
        
    }
};

/* Time C:- O(logbase2N)
 S.C :- O(1)*/
 /* best mid way to take and caution for overflow condition
 mid =  low+(high-low)/2 */