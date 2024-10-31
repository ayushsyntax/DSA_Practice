// #include<iostream>
// using namespace std;


// int leftD(int arr[],int n,int d)
// {
//     d=d%n;
//     int temp[n];

//     for (int i=0;i<d;i++)
//     {
//         temp[i] = arr[i];
//     }

//     for (int i=d;i<n;i++)
//     {
//         arr[i-d] = arr[i];

//     }

//     for(int i =n-d;i<n;i++)
//     {
//         arr[i]=temp[i-(n-d)];

//     }

//     return arr[];


// }

// int main ()
// {   int n  = 5;
//     int d ;
//     cin>>d;

//     int arr[n];
//     arr = {1,2,3,4,5};


//     leftD(arr,n,d);

//     for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;


    
// }


#include<bits/stdc++.h>
using namespace std;

void leftD(int arr[], int n, int d) {
    d = d % n; // In case d is greater than n
    int temp[d];

    // Store first d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of arr to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place temp elements back at the end of arr
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
    //t.c = O(n+d)
    // s.c = O(d)
}

void leftDrev(int arr[],int n,int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n); // t.c = o(2n)
    //s.c =0(1)
    reverse(arr,arr+n);
}


int main() {
    int n = 5;
    int d;
    cin >> d;

    int arr[] = {1, 2, 3, 4, 5}; // Array initialization

    leftD(arr, n, d); // Perform the left rotation

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;


    int arr1[] = {1,2,4,5,6};
    leftDrev(arr1,n,d);


    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
