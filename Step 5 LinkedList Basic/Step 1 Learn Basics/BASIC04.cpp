#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int x) {
    if (x < 0) return false; // Negative numbers cannot be Armstrong numbers

    int n = log10(x) + 1; // Calculate the number of digits
    int sum = 0;
    int temp = x; // Copy the value

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return sum == x;
}

int main() {
    int x; // Example Armstrong number
    cout << "Enter a value: ";
    cin >> x; // Use >> for input

    if (isArmstrong(x))
        cout << x << " is an Armstrong number." << endl;
    else
        cout << x << " is not an Armstrong number." << endl;

    return 0;
}
