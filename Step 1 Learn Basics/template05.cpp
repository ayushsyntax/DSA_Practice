#include <iostream>
using namespace std;

// Function template to swap two values
template<typename T>
void swaap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Example with int
    int x = 10;
    int y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swaap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Example with double
    double d1 = 1.5;
    double d2 = 2.5;
    cout << "Before swap: d1 = " << d1 << ", d2 = " << d2 << endl;
    swaap(d1, d2);
    cout << "After swap: d1 = " << d1 << ", d2 = " << d2 << endl;

    // Example with char
    char c1 = 'A';
    char c2 = 'B';
    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swaap(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
