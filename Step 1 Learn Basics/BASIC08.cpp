#include <iostream>
using namespace std;

// Function to compute GCD using a brute-force approach
int gcd(int a, int b) {
    int minValue = min(a, b);
    int result = 1;

    // Iterate from 1 to min(a, b)
    for (int i = 1; i <= minValue; ++i) {
        if (a % i == 0 && b % i == 0) {
            result = i; // Update result if i is a common divisor
        }
    }

    return result;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}
