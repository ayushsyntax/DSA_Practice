#include <bits/stdc++.h>
using namespace std;

int miniElement(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int ans = INT32_MAX;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the current section is sorted, update ans and move to the next section
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        } else {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum element is " << miniElement(arr, n) << endl;
    return 0;
}
