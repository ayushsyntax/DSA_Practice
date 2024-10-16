#include <bits/stdc++.h>  // Standard library header for competitive programming
using namespace std;

vector<int> findArrayIntersection(vector<int>& A, vector<int>& B, int n, int m) {
    vector<int> ans;
    vector<int> vis(m, 0);  // Initialize a visited array of size m with all zeros

    // Traverse through array A
    for (int i = 0; i < n; i++) {
        // Traverse through array B
        for (int j = 0; j < m; j++) {
            // If elements match and B[j] has not been used (vis[j] == 0)
            if (A[i] == B[j] && vis[j] == 0) {
                ans.push_back(A[i]);  // Add element to the result array
                vis[j] = 1;           // Mark B[j] as visited
                break;                // Move to the next element in A
            }

            // Since B is sorted, we can stop early if B[j] > A[i]
            if (B[j] > A[i]) break;
        }
    }
    
    return ans;
}

int main() {
    vector<int> A = {1, 2, 2, 3, 4};  // Array A
    vector<int> B = {2, 2, 3, 5};     // Array B
    int n = A.size();  // Size of A
    int m = B.size();  // Size of B

    vector<int> result = findArrayIntersection(A, B, n, m);

    cout << "Intersection of the two arrays is: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
