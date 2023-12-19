#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"hi"<<endl;
    }
};
class B{
    public:
    void display2(){
        cout<<"hello"<<endl;
    }
};
class C:public A, public B{
    public:
    void display3(){
        cout<<"multilevel";
    }
};
int main(){
    A obj;
    B obj1;
    C obj2;
    obj2.display();
    obj2.display2();
    obj2.display3();
    return 0;

}