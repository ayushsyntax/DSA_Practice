#include <iostream>
#include <vector>
using namespace std;

vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    int floor = -1;  // Initialize floor as -1 (indicating no floor found yet)
    int ceil = -1;   // Initialize ceil as -1 (indicating no ceil found yet)

    while (low <= high) {
        int mid = low + (high - low) / 2;  // To prevent overflow

        if (arr[mid] == x) {
            // If we find x, both floor and ceil are the same, which is x
            return {x, x};
        }

        if (arr[mid] < x) {
            // Update floor to arr[mid] and search right
            floor = arr[mid];
            low = mid + 1;
        } else {
            // Update ceil to arr[mid] and search left
            ceil = arr[mid];
            high = mid - 1;
        }
    }

    return {floor, ceil};  // Return both floor and ceil in a vector
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 10};  // Example sorted array
    int x = 5;  // Value for which to find floor and ceil

    vector<int> result = getFloorAndCeil(x, arr);  // Call the function

    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;

    return 0;
}
/*Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)*/
