#include <iostream>
#include <vector>

using namespace std;

// Function to find the lower bound of x (first element >= x)
int lowerBound(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int result = arr.size();  // Default to size of the array if no element is >= x
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= x) {
            result = mid;     // Found an element >= x, continue searching in the left half
            high = mid - 1;
        } else {
            low = mid + 1;    // Continue searching in the right half
        }
    }
    
    return result;
}

// Function to find the upper bound of x (first element > x)
int upperBound(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int result = arr.size();  // Default to size of the array if no element is > x
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] > x) {
            result = mid;      // Found an element greater than x, search in the left half
            high = mid - 1;
        } else {
            low = mid + 1;     // Keep searching in the right half
        }
    }
    
    return result;
}

// Function to find the first occurrence of x using lower_bound
int findFirstOccurrence(const vector<int>& arr, int x) {
    int lower = lowerBound(arr, x);
    if (lower < arr.size() && arr[lower] == x) {
        return lower;  // First occurrence found at the lower bound
    }
    return -1;  // Element not found
}

// Function to find the last occurrence of x using upper_bound
int findLastOccurrence(const vector<int>& arr, int x) {
    int upper = upperBound(arr, x);
    if (upper > 0 && arr[upper - 1] == x) {
        return upper - 1;  // Last occurrence is just before the upper bound
    }
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
    int x = 5;
    
    int firstOccurrence = findFirstOccurrence(arr, x);
    int lastOccurrence = findLastOccurrence(arr, x);
    
    if (firstOccurrence == -1) {
        cout << "Element " << x << " not found in the array." << endl;
    } else {
        cout << "First occurrence of " << x << " is at index: " << firstOccurrence << endl;
        cout << "Last occurrence of " << x << " is at index: " << lastOccurrence << endl;
    }
    
    return 0;
}


/*Time Complexity:
The time complexity of both findFirstOccurrence and findLastOccurrence is O(log n) because both rely on binary search methods (lower_bound and upper_bound).
Therefore, the total time complexity for finding both occurrences is O(log n).*/