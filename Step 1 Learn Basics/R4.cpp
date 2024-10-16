#include<iostream>
using namespace std;
unsigned long long int fact(int n)
{
    if (n==0)
    {
        return 1;

    }
    return n*fact(n-1);
}

int main ()
{
    long long int n;
    cin>>n;
    cout<<fact(n);
}
