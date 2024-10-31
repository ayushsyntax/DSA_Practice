#include <iostream>
using namespace std;

int function(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;  // Initialize with 'n', will remain 'n' if no element >= x is found

    while (low <= high) 
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x) 
        {
            ans = mid;  // Update answer with mid
            high = mid - 1;  // Search in the left half
        } 
        else 
        {
            low = mid + 1;  // Search in the right half
        }
    }

    return ans;  // Return the index of the smallest element >= x, or n if none found
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};  // Example sorted array
    int x = 5;  // Value to find in the array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    int y = function(arr, n, x);  // Call the function to get the index
    if (y != n) 
    {
        cout << "The smallest index with value > " << x << " is: " << y << endl;
    } 
    else 
    {
        cout << "No element is greater than " << x << endl;
    }

    return 0;
}
/*T.C = O(logbase2N)
S.C = O(1)*/
