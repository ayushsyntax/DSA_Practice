#include<iostream>
using namespace std;
void summ(int i,int sum)
{ // Parameterised way
    if (i<1)
    {
        cout<<sum;
        return;
    }

    summ(i-1,sum+i);


}

int sum1(int n)
{ // Functionality ways
    if (n==0)
    {
        return 0;
    }

    return n+ sum1(n-1);
}



int main ()
{
    int n ;
    cin>>n;
    cout<<sum1(n);
}

// t.c big O(N) and s.c big O(N)