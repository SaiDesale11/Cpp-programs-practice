#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Animals can eat"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){  
        cout<<"Dog can eat as well as bark"<<endl;
    }
};
int main(){
    dog obj;
    obj.eat();
    obj.bark();
}