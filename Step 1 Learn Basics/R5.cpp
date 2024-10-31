#include<bits/stdc++.h>
using namespace std;
void fn(int i,int arr[],int n)
{
    // i, n-i-1 use for reverse i<=n/2
    if (i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]); // using swap fn
    fn(i+1,arr,n);
}




int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    fn(0,arr,n);
    for(int i=0;i<n;i++)
    cout<<endl<<arr[i]<<" ";
}