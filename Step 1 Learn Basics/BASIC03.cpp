#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int c =n;

    int revsum=0;

    while(n>0)
    {
        int l_digit = n%10;
        n = n/10;
        revsum = (revsum*10)+l_digit;

    }
    if (c==revsum)
    {
        cout<<"Its Palindrome";
    }
    else
    {
        cout<<"Its Not palindrome";
    }

}


