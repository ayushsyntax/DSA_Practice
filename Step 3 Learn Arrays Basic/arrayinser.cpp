#include<iostream>
using namespace std;

void fn(int arr[],int size)
{
    for (int i =0;i<size;i++)
    {
        cout<<endl<<arr[i]<<" ";
    }
}

void fn1(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int p;
    cout<<"enter position";
    cin>>p;
    int num ;
    cin>>num;
    int arr[n];
    fn1(arr,n);
    
    for(int i=n-1;i<=0;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[p-1]=num;
    ///
    fn(arr,n);
    for(int i=p-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    //
    fn(arr,n);



}