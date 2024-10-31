#include <iostream>
#include <utility>      // For std::pair
#include <vector>       // For std::vector
#include <list>         // For std::list
#include <deque>        // For std::deque
#include <stack>        // For std::stack
#include <queue>        // For std::queue and std::priority_queue
#include <set>          // For std::set and std::multiset
#include <unordered_set> // For std::unordered_set
#include <map>          // For std::map and std::multimap
#include <algorithm>    // For std::sort
// or use #include<bits/stdc++.h>
using namespace std;

// Function to explain std::pair
void explainPair() {
    pair<int, int> p1 = {1, 3};
    cout << "Pair p1: " << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << "Nested Pair p2: " << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << "Second element of second pair in array: " << arr[1].second << endl;
}

// Function to explain std::vector
void explainVector() {
    vector<int> v;
    v.push_back(1); 
    v.emplace_back(2); 

    vector<pair<int, int>> vec;
    vec.push_back({1, 2}); 
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); 
    vector<int> v2(v1); 

    cout << "Vector v1 elements: ";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Vector v1 elements using range-based for loop: ";
    for (auto it : v1) {
        cout << it << " ";
    }
    cout << endl;

    v1.erase(v1.begin() + 1);
    v1.erase(v1.begin() + 2, v1.begin() + 4);

    vector<int> copy(2, 50);
    v1.insert(v1.begin(), copy.begin(), copy.end());

    cout << "Size of v1: " << v1.size() << endl;

    v1.pop_back();
    v1.swap(v2);

    v1.clear();
    cout << "Is v1 empty? " << v1.empty() << endl;
}

// Function to explain std::list
void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(3);

    cout << "List elements: ";
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;
}

// Function to explain std::deque
void explainDeque() {
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);
    dq.push_front(5);
    dq.emplace_front(1);

    dq.pop_back();
    dq.pop_front();

    cout << "Deque front: " << dq.front() << endl;
    cout << "Deque back: " << dq.back() << endl;
}

// Function to explain std::stack
void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout << "Stack top: " << st.top() << endl;
    st.pop();
    cout << "Size of stack: " << st.size() << endl;
    cout << "Is stack empty? " << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

// Function to explain std::queue
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << "Queue back: " << q.back() << endl;
    cout << "Queue front: " << q.front() << endl;

    q.pop();
    cout << "New queue front: " << q.front() << endl;
    cout << "Size of queue: " << q.size() << endl;
    cout << "Is queue empty? " << q.empty() << endl;
}

// Function to explain std::priority_queue
void explainPQ() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << "Priority Queue top: " << pq.top() << endl;
    pq.pop();
    cout << "New top of Priority Queue: " << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.push(2);
    min_pq.push(8);
    min_pq.emplace(10);

    cout << "Min Priority Queue top: " << min_pq.top() << endl;
}

// Function to explain std::set
void explainSet() {
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    cout << "Set elements: ";
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    auto it = st.find(3);
    if (it != st.end()) cout << "Found 3 in set" << endl;
    st.erase(5);
    cout << "Count of 1 in set: " << st.count(1) << endl;
}

// Function to explain std::multiset
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); 
    cout << "Count of 1 in multiset: " << ms.count(1) << endl;
}

// Function to explain std::unordered_set
void explainUnorderedSet() {
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);

    cout << "Unordered Set elements: ";
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;
}

// Function to explain std::map
void explainMap() {
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    cout << "Map elements: " << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << "Value at key 1: " << mpp[1] << endl;
    cout << "Value at key 5 (default if not found): " << mpp[5] << endl;
}

// Function to explain std::multimap
void explainMultiMap() {
    multimap<int, int> mmp;
    mmp.insert({1, 100});
    mmp.insert({1, 200});
    mmp.insert({2, 300});

    cout << "Multimap elements: " << endl;
    for (auto it : mmp) {
        cout << it.first << " " << it.second << endl;
    }
}

// Function to explain sorting algorithms
void explainExtra() {
    vector<int> v = {5, 2, 8, 1, 9};
    sort(v.begin(), v.end()); // Ascending
    cout << "Sorted vector in ascending order: ";
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>()); // Descending
    cout << "Sorted vector in descending order: ";
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainExtra();
    return 0;
}
