#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter Num: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;


    return 0;
}
//Time Complexity Big O(n)