#include <bits/stdc++.h>
using namespace std;

int MinElement(int arr[], int n) {
    int low = 0, high = n - 1;
    int ans = INT32_MAX;

    while (low <= high) {
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        } else {
            int mid = low + (high - low) / 2;
            ans = min(ans, arr[mid]);

            // Check if the mid element is in the left or right rotated section
            if (arr[mid] >= arr[low]) {
                low = mid + 1; // Move to the right half
            } else {
                high = mid - 1; // Move to the left half
            }
        }
    }
    
    return ans;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum element is " << MinElement(arr, n) << endl;
    return 0;
}
