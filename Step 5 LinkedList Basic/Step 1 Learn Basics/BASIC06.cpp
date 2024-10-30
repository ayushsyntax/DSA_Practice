#include <iostream>
#include <cmath>   // For sqrt function
#include <vector>  // For vector
#include <algorithm> // For sort function

using namespace std;

void printSortedDivisors(int n) {
    vector<int> divisors;

    // Collect divisors
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) { // Check if i is a divisor
            divisors.push_back(i); // Add divisor i
            if (i != n / i) { // Check if n / i is different from i
                divisors.push_back(n / i); // Add the corresponding divisor n / i
            }
        }
    }

    // Sort the divisors
    sort(divisors.begin(), divisors.end());

    // Print the sorted divisors
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Divisors of " << number << " are: ";
    printSortedDivisors(number);
    
    return 0;
}
