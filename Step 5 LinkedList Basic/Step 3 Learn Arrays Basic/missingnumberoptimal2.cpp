#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int N) {
    // Sum of first N natural numbers
    int total_sum = N * (N + 1) / 2;

    // Sum of all elements in the array
    int array_sum = 0;
    for (int i = 0; i < N - 1; i++) {
        array_sum += arr[i];
    }

    // The missing number is the difference between total_sum and array_sum
    return total_sum - array_sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5}; // Example array with one missing number
    int N = 5; // Total numbers should be from 1 to N

    int missingNumber = findMissingNumber(arr, N);
    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}

/* 
Time Complexity (T.C.): O(N)
- We traverse the array once to calculate the array_sum, so the time complexity is O(N).

Space Complexity (S.C.): O(1)
- We use only a constant amount of extra space (for variables `total_sum` and `array_sum`), so the space complexity is O(1).
*/
