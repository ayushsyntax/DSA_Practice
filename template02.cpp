#include <iostream>
using namespace std;

// Function template with multiple parameters
template <typename T1, typename T2>
void printPair(T1 first, T2 second) {
    cout << "First: " << first << ", Second: " << second << endl;
}

int main() {
    printPair(5, 3.14);          // T1 is int, T2 is double
    printPair("Hello", 42);      // T1 is const char*, T2 is int
    printPair(10, "World");      // T1 is int, T2 is const char*

    return 0;
}
