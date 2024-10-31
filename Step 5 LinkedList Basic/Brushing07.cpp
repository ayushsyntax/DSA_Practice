#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Constructor with parameter
    MyClass(int value) {
        // Using 'this' to differentiate between the member variable and the parameter
        this->value = value;
    }

    // Function to set value
    void setValue(int value) {
        this->value = value; // 'this->value' refers to the member, 'value' to the parameter
    }

    // Function to get the value
    int getValue() {
        return this->value; // Accessing member variable using 'this'
    }
};

int main() {
    MyClass obj(10); // Create an object with initial value 10
    cout << "Initial value: " << obj.getValue() << endl;

    obj.setValue(20); // Set a new value
    cout << "Updated value: " << obj.getValue() << endl;

    return 0;
}
