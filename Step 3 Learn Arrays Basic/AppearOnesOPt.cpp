#include <iostream>
#include <vector>
using namespace std;

int findSingleUsingXOR(vector<int>& nums) {
    int result = 0;
    
    // XOR all elements together
    for (int num : nums) {
        result ^= num;
    }
    
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Element appearing once: " << findSingleUsingXOR(nums) << endl;
    return 0;
}
