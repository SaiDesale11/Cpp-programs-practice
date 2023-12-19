#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void values();
    A();
    void output();
};  
    void A :: values(){
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    }
    //void perform()
    A::A(){
    int c;
    c=a;
    a=b;
    b=c;
   // cout<<a<<endl<<b;
    }
    void A :: output(){
    cout<<a<<endl<<b;
    }
    

   
int main(){
   A obj1;
   obj1.values();
   //obj1.perform();
   obj1.output();
   //obj1.output();
   return 0;
}