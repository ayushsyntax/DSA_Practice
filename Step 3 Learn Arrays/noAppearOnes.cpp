#include <iostream>
#include <vector>
using namespace std;

int findSingleBruteForce(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        // Count the number of times nums[i] appears in the array
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        // If it appears exactly once, return it
        if (count == 1) {
            return nums[i];
        }
    }
    return -1;  // In case no element is found (shouldn't happen in valid input)
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Element appearing once: " << findSingleBruteForce(nums) << endl;
    return 0;
}
