#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"base class"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"derived class"<<endl;
    }
};
int main(){
    derived obj;
    base *ptr,obj2;
    ptr=&obj2;
    ptr->display();
    ptr=&obj;
    ptr->display();
    return 0;
}