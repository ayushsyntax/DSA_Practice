#include<iostream>
using namespace std;

// Character Hashing array
// general case
int main()
{
    string s;
    cin>>s;


    // pre compute

    int hash[256] = {0};
    for (int i = 0; i<s.size();i++)
    {
        hash[s[i]]++;

    }

    // queries

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;

        // fetch
        cout<<hash[c]<<endl;

    }
}