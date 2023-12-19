#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter p1= ";
    cin>>a;
    cout<<"enter p2= ";
    cin>>b;
    int *p1=&a, *p2=&b;
    cout<<"before swap: p1= "<<*p1<<endl<<"p2= "<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout<<"after swap: p1= "<<*p1<<endl<<"p2= "<<*p2<<endl;
    return 0;
}