#include<iostream>
using namespace std;

int fibo(int n)
{
    if (n<=1)
    return n;
    int last= fibo(n-1);
    int slast = fibo(n-2);
    return last+slast;
}


void printfibo(int n)
{
    if (n==0)
    {cout<<"0"<<endl;
    return;
    }
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i=2;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<"\n";
}

int main()
{
   int n;
   cin>>n;
   printfibo(n); 
}