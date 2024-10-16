#include <bits/stdc++.h>  // Standard library header for competitive programming
using namespace std;

vector<int> sortedArrayUnion(vector<int>& a, vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    // Traverse both arrays
    while (i < n1 && j < n2) {
        // If a[i] is smaller, add it to unionArr if not already added
        if (a[i] < b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        // If b[j] is smaller, add it to unionArr if not already added
        else if (a[i] > b[j]) {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
        // If both elements are equal, add any one and move both pointers
        else {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Process remaining elements of array a
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }

    // Process remaining elements of array b
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 5, 6, 7};

    vector<int> result = sortedArrayUnion(a, b);

    cout << "Union of the two sorted arrays is: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
