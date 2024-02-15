#include<iostream>
using namespace std;

int add(int x,int y)
{
    int z= x+y;
    return z;
}

int main()
{
    int a,b,c;

    cout<<"Enter the 1st no : \n";
    cin>>a;

    cout<<"Enter the 2nd no : \n";
    cin>>b;

    c=add(a,b);

    cout<<"Addition :"<<c<<"\n";


    return 0;
}
