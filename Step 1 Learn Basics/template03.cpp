#include <iostream>
using namespace std;

template <typename T1 = int, class T2 = float, class T3 = char>
class Ayush {
public:
    T1 a;
    T2 b;
    T3 c;

    // Constructor to initialize the class members
    Ayush(T1 x, T2 y, T3 z) : a(x), b(y), c(z) {}

    // Method to display the values of the class members
    void display() const {
        cout << "value of a, b, and c" << endl;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

int main() {
    // Creating an object with explicit template arguments
    Ayush<int, float, char> a(2, 3.14f, 'v');
    a.display();
    return 0;
}
