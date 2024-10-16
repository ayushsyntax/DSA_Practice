//Method 01
// #include<iostream>
// using namespace std;

// int  main()
// {
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;

//     int count=0;
//     int r;
//     while(n>0)
//     {
//        // r=n%10;
//         count++;
//         n=n/10;
//     }
//     cout<<"Total digit: "<<count<<endl;
    
//     return 0;
// }



/***********************/
// Method 02
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int cnt = (int) (log10(n)+1);
    cout<<"\n"<<cnt;
}

//T.C -> big o (log10(n))