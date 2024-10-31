#include <stdio.h>

// Defining a structure named 'student'
struct student {
    int rollno;          // Member to hold the roll number of the student
    char name[20];       // Member to hold the name of the student
    float marks;         // Member to hold the marks of the student
};

// Initializing an instance of 'student' structure
struct student S = {1, "ayush", 99.89}; // This initialization is valid

// Anonymous structure declaration (without a name)
struct {
    int rollno;          // Cannot initialize here because it's anonymous
    char name[20];       // Cannot initialize here because it's anonymous
    float marks;         // Cannot initialize here because it's anonymous
}; 

int main() {
    // Creating another instance of 'student' structure and initializing it
    struct student S1 = {1, "ayush", 98.33}; // This is valid

    // Displaying the data of student S1
    printf("Roll No: %d\n", S1.rollno);
    printf("Name: %s\n", S1.name);
    printf("Marks: %.2f\n", S1.marks);

    return 0; // Return statement indicating successful completion of the program
}



/*
Pros:
1. Grouping: Structures allow grouping different data types together, which helps in organizing complex data.
2. Code Clarity: Using structures can improve code readability by providing meaningful names for data collections.
3. Reusability: Structures can be reused throughout the program, which reduces code duplication.

Cons:
1. Memory Overhead: Structures can introduce some memory overhead due to alignment and padding.
2. Complexity: Managing structures can be more complex than using primitive data types, especially with nested structures.
3. Cannot Initialize Anonymous Structures: When using anonymous structures, you cannot initialize them directly upon declaration.
*/
