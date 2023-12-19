#include<iostream>
using namespace std;
int a,b,result;
class A{
    public:
    void getvalues(){
    cout<<"Enter a: ";
    cin>>a;
    }
};
class B{
    public:
    void getvalues2(){
    cout<<"Enter b: ";
    cin>>b;
    }
};
class C: public A, public B{
    public:
    void res(){
    result=a+b;
    cout<<"Addition is: "<<result;
    }
};
int main(){
    C obj;
    obj.getvalues();
    obj.getvalues2();
    obj.res();
return 0;
    
}