#include<iostream>
using namespace std;
class base{
    public:
    virtual void show()=0;
};
class derived:public base{
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->show();
    return 0;
}