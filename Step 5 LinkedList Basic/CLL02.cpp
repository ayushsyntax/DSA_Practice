#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;


    Node(int val): data(val),next(NULL) {}
};


Node* CLLArr(int arr[],int n)
{
    if (n==0) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i =1;i<n;i++)
    {
        Node* newnode = new Node(arr[i]);
        temp->next = newnode;
        temp = newnode;
    }

    temp->next = head;

    return head;
}

void printCLL(Node* head,int n)
{
    if (head==NULL) return;
    Node* temp = head;
    for (int i =0;i<n;i++)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<< "head"<<endl;


}

// int main()
// {
//     int arr[] ={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);


//     Node* head = CLLArr(arr,n);

//     printCLL(head,n);
// wsw}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create the circular linked list from the array
    Node* head = CLLArr(arr, n);

    // Print the circular linked list
    printCLL(head, n);

    return 0;
}
