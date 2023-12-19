#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"hi"<<endl;
    }
};
class B: public A{
    public:
    void display2(){
        cout<<"hello"<<endl;
    }
};
class C:public B{
    public:
    void display3(){
        cout<<"multilevel";
    }
};
int main(){
    A obj;
    obj.display();
    B obj1;
    obj1.display2();
    C obj2;
    obj2.display3();

}