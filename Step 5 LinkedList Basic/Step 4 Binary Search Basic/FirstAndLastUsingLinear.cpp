#include <iostream>
#include <vector>

using namespace std;

// Function to find the first occurrence of x using linear search
int findFirstOccurrence(const vector<int>& arr, int x)
{
    for (int i = 0;i<arr.size();i++)
    {
        if (arr[i]==x)
        return i;

    }
    return -1;
}

// Function to find the last occurrence of x using linear search
int findLastOccurrence(const vector<int>& arr, int x)
{int lastindex=-1;
    for (int i = 0;i<arr.size();i++)
    {   
        if (arr[i]==x)
        {
            lastindex= i;
        }

    }
    return lastindex;
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
The time complexity of both findFirstOccurrence and findLastOccurrence is O(n), 
where n is the size of the array because we traverse the array linearly in each function.
This approach works well for small to medium-sized arrays, but for larger arrays, 
a binary search-based solution (like the one previously shown) would be more efficient*/