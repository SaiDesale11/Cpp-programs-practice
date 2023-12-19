#include<iostream>

using namespace std;

int main()
{
    int a,b,q,r;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    q=b/a;
    r=b%a;
    cout<<"Quotient is: "<<q;
    cout<<"\nRemainder is: "<<r;
    return 0;
}