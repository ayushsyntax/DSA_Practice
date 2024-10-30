#include <stdio.h>

// Defining the student structure
struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    // Creating an array of structures
    struct student students[3]; // Array to hold 3 students

    // Initializing the student records
    students[0] = (struct student){1, "Alice", 90.5};
    students[1] = (struct student){2, "Bob", 85.0};
    students[2] = (struct student){3, "Charlie", 95.5};

    // Displaying the records of each student
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0; // Return statement indicating successful completion of the program
}
