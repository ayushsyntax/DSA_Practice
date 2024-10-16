#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> &v)
{
    for(int i =0;i<5;i++)
    {
        cout<<v[i];
        cout<<"\n";
    }
}

int main()
{
    vector<int> v1;
    int c;
    for (int i =0;i<5; i++)
    {
        cout<<"Enter element: ";
        cin>>c;
        v1.push_back(c);
    }
    v1.pop_back();
    vector <int> :: iterator iter = v1.begin();
    v1.insert (iter,8,67);
    display(v1);
}