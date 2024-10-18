#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int>& A, vector<int>& B, int n, int m) {
    int i = 0, j = 0;
    vector<int> ans;

    // Traverse both arrays
    while (i < n && j < m) {
        // If the element in A is smaller, move i
        if (A[i] < B[j]) {
            i++;
        }
        // If the element in B is smaller, move j
        else if (B[j] < A[i]) {
            j++;
        }
        // If both elements are equal, add to the result and move both i and j
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> A = {1, 2, 4, 5, 7};  // Sorted array A
    vector<int> B = {2, 4, 6, 7, 8};  // Sorted array B
    int n = A.size();
    int m = B.size();

    vector<int> result = findArrayIntersection(A, B, n, m);

    // Output the result
    cout << "Intersection of the two arrays is: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
