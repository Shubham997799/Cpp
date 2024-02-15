#include<iostream>
using namespace std;

int add(int x,int y)         /// Addition
{
    int z= x+y;
    return z;
}

int sub(int no1,int no2)      /// Substraction
{
    int no3;
    if(no1>no2)
    {
        no3=no1-no2;
    }
    else
    {
        no3=no2-no1;   
    }
    

    return  no3;
}


int mul(int mNo1,int mNo2)      ///Multiplication
{
    int mNo3= mNo1*mNo3;
    return mNo3;
}

int divi(int dNo1,int dNo2) //////division
{
    int dNo3;
    if(dNo1>dNo2)
    {
        dNo3=dNo1/dNo2;
    }
    else
    {
        dNo3=dNo2/dNo1;   
    }
    

    return  dNo3;
}

int main()
{
    int a,b,c;

    cout<<"Enter the 1st no : \n";
    cin>>a;

    cout<<"Enter the 2nd no : \n";
    cin>>b;

    c=add(a,b);

    int d=sub(a,b);
    int e = mul(a,b);
    int f= divi(a,b);

    cout<<"Addition :"<<c<<"\n";
    cout<<"Diff of two no is  :"<<d<<"\n";
    cout<<"Product of two no is  :"<<e<<"\n";
    cout<<"Div of two no is  :"<<f<<"\n";


    return 0;
}
