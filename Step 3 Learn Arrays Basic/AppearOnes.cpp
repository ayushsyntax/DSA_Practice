#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findSingleUsingHashMap(vector<int>& nums) {
    unordered_map<int, int> freqMap;
    
    // Count the frequency of each element
    for (int num : nums) {
        freqMap[num]++;
    }
    
    // Find the element with frequency 1
    for (auto it : freqMap) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return -1;  // In case no element is found (shouldn't happen in valid input)
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Element appearing once: " << findSingleUsingHashMap(nums) << endl;
    return 0;
}
