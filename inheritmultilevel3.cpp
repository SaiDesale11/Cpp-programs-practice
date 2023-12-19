#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"animals can eat"<<endl;
    }
};
class mammals: public animal{
    public:
    void birth(){
        cout<<"mammals can directly give birth to babies"<<endl;
    }
};
class dog:public mammals{
    public:
    void sound(){
        cout<<"dog barks";
    }
};
int main(){
    dog obj2;
    obj2.eat();
    obj2.birth();
    obj2.sound();
    return 0;
}