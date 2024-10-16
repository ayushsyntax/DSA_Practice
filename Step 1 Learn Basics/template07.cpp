#include <iostream>
using namespace std;

// Function template for integer type
template <typename T>
void process(T value) {
    cout << "Processing value: " << value << endl;
}

// Overloaded function template for double type
template <>
void process<double>(double value) {
    cout << "Processing double value: " << value << endl;
}

// Overloaded function template for specific behavior with int
template <>
void process<int>(int value) {
    cout << "Processing int value with special behavior: " << value << endl;
}

int main() {
    process(10);          // Calls process<int>(int)
    process(3.14);        // Calls process<double>(double)
    process("Hello");    // Calls process<const char*>(const char*)
    
    return 0;
}
