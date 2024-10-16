/*What Are Templates?
Templates in C++ allow you to write generic and reusable code. They enable you to create functions and classes that can work with any data type. This helps to avoid code duplication and allows for more flexible and maintainable code.

Types of Templates
Function Templates: These allow you to write a single function definition that works with different data types.
Class Templates: These allow you to create a class that can operate with different data types.
*/
//function templates
#include<iostream>
using namespace std;

//function template
template <typename T>
T maximum(T a,T b)
{
    return (a>b)?a:b;

}



// ***************

// Class template
template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T a, T b) : first(a), second(b) {}
    
    T getFirst() { return first; }
    T getSecond() { return second; }
    void print() { cout << "First: " << first << ", Second: " << second << endl; }
};
    template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T a, T b) : first(a), second(b) {}
    
    void print() { cout << "First: " << first << ", Second: " << second << endl; }
};

// Specialized template for char
template <>
class Pair<char> {
private:
    char first;
    char second;
public:
    Pair(char a, char b) : first(a), second(b) {}
    
    void print() { cout << "Char Pair: " << first << " and " << second << endl; }
};


int main() {
    Pair<int> p1(1, 2);
    p1.print();
    
    Pair<char> p2('A', 'B');
    p2.print();
    

    
    return 0;
}
