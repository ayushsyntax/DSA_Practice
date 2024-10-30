#include <bits/stdc++.h>
using namespace std;
int miniElement(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int minIndex = -1;
    int minValue = INT32_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[mid]) {
            if (arr[low] < minValue) {
                minValue = arr[low];
                minIndex = low;
            }
            low = mid + 1;
        } else {
            if (arr[mid] < minValue) {
                minValue = arr[mid];
                minIndex = mid;
            }
            high = mid - 1;
        }
    }
    
    return minIndex;
}
