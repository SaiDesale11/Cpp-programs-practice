#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no.: ";
    cin>>a;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p;
    return 0;
}
