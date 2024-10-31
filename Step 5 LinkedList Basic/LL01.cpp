#include <iostream>
#include <cstdlib> // For malloc

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Using malloc (C-style) for memory allocation
    struct Node *P;
    P = (struct Node*) malloc(sizeof(struct Node));
    if (P == nullptr) {
        cout << "Memory allocation failed for P using malloc." << endl;
        return 1;
    }
    P->data = 10;
    P->next = nullptr;

    // Using new (C++-style) for memory allocation
    struct Node *p1;
    p1 = new Node;
    p1->data = 20;
    p1->next = nullptr;

    // Display data to verify allocation
    cout << "Data in P (allocated with malloc): " << P->data << endl;
    cout << "Data in p1 (allocated with new): " << p1->data << endl;

    // Free memory allocated by malloc
    free(P);
    // Free memory allocated by new
    delete p1;

    return 0;
}
