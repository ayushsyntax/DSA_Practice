#include<iostream>
using namespace std;
int cnt=0;
void print()
{
    if (cnt ==2)
    {
        return;
    }
    
    cout<<"Hi "<<cnt<<endl;
    cnt++;
    print();
}
int main ()
{
    print();
}