#include <stdio.h>

// Defining a structure named 'Student'
struct Student
{
    int rollno;          // Integer to hold the roll number of the student
    char name[20];       // Array of characters to hold the student's name
    float marks;         // Float to hold the student's marks
};

// Initializing a 'Student' struct variable 'S' with roll number 1, name "ayush", and marks 99.99
struct Student S = {1, "ayush", 99.99};

int main()
{
    struct Student *ptr; // Declaring a pointer to a 'Student' struct
    ptr = &S;           // Getting the base address of 'S' and storing it in 'ptr'
    
    // Using dot operator directly on the struct variable 'S' to access roll number
    printf("rollno (using struct directly): %d\n", S.rollno); // Corrected syntax here

    // Using the arrow operator to access roll number via pointer 'ptr'
    printf("rollno (using pointer and arrow operator): %d\n", ptr->rollno); 

    // Using the dereference operator (*) to access roll number through pointer 'ptr'
    printf("rollno (using dereference operator): %d\n", (*ptr).rollno);

    return 0; // Return statement indicating successful completion of the program
}
