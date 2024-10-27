#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &arr) {
    int n = arr.size();

    // Edge case: if there's only one element
    if (n == 1) return arr[0];
    // Check the first element
    if (arr[0] != arr[1]) return arr[0];
    // Check the last element
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 1;
    int high = n - 2; // Set high to n - 2 because we will check mid + 1 and mid - 1

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is the single element
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        // Determine which half to search in
        // If mid is odd and it matches with the previous element, move to the right half
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || 
            (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }

    return -1; // Just in case, though logically this should not be reached
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5}; // Example input
    int result = singleNonDuplicate(arr);
    cout << "The single non-duplicate number is: " << result << endl;
    return 0;
}
