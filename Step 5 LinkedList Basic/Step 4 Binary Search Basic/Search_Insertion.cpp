#include <iostream>
using namespace std;

// Function to search for the correct insertion index and insert the element
void searchAndInsert(int arr[], int &n, int x, int capacity)
{
    int low = 0;
    int high = n - 1;
    int ans = n;  // Default position to insert at the end of the array

    // Binary search to find the correct insertion position
    while (low <= high) 
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) 
        {
            ans = mid;  // Update answer with the correct position
            high = mid - 1;  // Search in the left half
        } 
        else 
        {
            low = mid + 1;  // Search in the right half
        }
    }

    // Insert the element at the found position if there's space
    if (n < capacity) 
    {
        // Shift elements to the right to make space for the new element
        for (int i = n; i > ans; i--) 
        {
            arr[i] = arr[i - 1];
        }
        arr[ans] = x;  // Insert x at the correct position
        n++;  // Increase the size of the array
    } 
    else 
    {
        cout << "Array is full, cannot insert new element." << endl;
    }
}

int main() 
{
    int arr[10] = {1, 2, 3, 4, 6, 7};  // Example sorted array with capacity for 10 elements
    int n = 6;  // Current number of elements in the array
    int x = 5;  // Value to insert into the array

    cout << "Array before insertion: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    searchAndInsert(arr, n, x, 10);  // Insert 'x' into the array

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
