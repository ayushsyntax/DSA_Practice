#include <iostream>
using namespace std;

template <typename T>
class MyClass {
public:
    // Member function template to display value
    void display(T value) {
        cout << "Value: " << value << endl;
    }
    
    // Member function template with a different behavior based on type
    void printDetails(T value) {
        cout << "Details of value: " << value << endl;
    }
};

int main() {
    MyClass<int> intObj;
    intObj.display(10);        // Calls display(int)
    intObj.printDetails(20);   // Calls printDetails(int)
    
    MyClass<double> doubleObj;
    doubleObj.display(5.5);    // Calls display(double)
    doubleObj.printDetails(6.7); // Calls printDetails(double)
    
    return 0;
}
