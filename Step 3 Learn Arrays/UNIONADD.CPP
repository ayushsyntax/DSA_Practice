#include <bits/stdc++.h>
using namespace std;

vector<int> SortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    
    // Insert elements from vector 'a'
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    // Insert elements from vector 'b'
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    // Move elements from set to a vector
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 3, 6, 8};

    vector<int> result = SortedArray(a, b);

    // Output the result
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
