#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int N) {
    int XOR = 0;

    // XOR all the elements in the array and XOR all numbers from 1 to N in a single loop
    for (int i = 0; i < N; i++) {
        if (i < N - 1) {
            XOR ^= arr[i];  // XOR the elements of the array
        }
        XOR ^= (i + 1);  // XOR the numbers from 1 to N
    }

    // The result is the missing number
    return XOR;
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
- We use a single loop that runs from 0 to N, so the time complexity is O(N).

Space Complexity (S.C.): O(1)
- We only use a constant amount of extra space (for the XOR variable), so the space complexity is O(1).
*/
