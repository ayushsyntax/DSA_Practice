#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    // Loop variable i is now initialized to 1
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) { // Check if the divisor pair is different
                cnt++;
            }
        }
    }

    // Output the result based on the count of divisors
    if (cnt >= 2) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
