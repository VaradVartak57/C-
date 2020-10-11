// PROGRAM TO FIND LARGEST NUMBER AMONG THREE NUMBERS //
//
//
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"\n Enter the three numbers:- ";
    cin>>a>>b>>c;
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
    cout<<"\n c="<<c;

    if(a>b)
    {
        if(a>c)
        cout<<"\n a="<<a<<" is largest\n";
        else
        cout<<"\n c="<<c<<" is largest\n";
    }
    else
    {
        if(b>c)
        cout<<"\n b="<<b<<" is largest\n";
        else
        cout<<"\n c="<<c<<" is largest\n";
    }
   return 0; 
}