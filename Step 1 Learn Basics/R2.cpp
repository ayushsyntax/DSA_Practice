// print n times using recursion
#include<iostream>
using namespace std;
void print1(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"Ayush\n";
    print1(i+1,n);
    // t.c and s.c is big o(n)
}
void print2(int i,int n)
{
    if (i>n)
    {
        return ;
    }
    cout<<i<<" ";
    print2(i+1,n);
}
void print3(int i, int n)
{
   
   if (i<1)
   {
    return ;
   }
   cout<<i<<" ";
   print3(i-1,n);

}
void print4(int i,int n)
{
    if (i<1)
    {
        return;
    }
    //Backtracing in Recursion
    
    print4(i-1,n);

    cout<<i<<" ";

}
void print5 (int i,int n)
{
    if (i>n)
    {
        return;
    }
// backtraacing in recursion
// for 10 9 ....1
    print5(i+1,n);
    cout<<i<< " ";

}

int main()
{
    int i, n;
    cin >>i;
    cin>>n;
    print5(i,n);
    

}

