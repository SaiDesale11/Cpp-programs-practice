#include<iostream>
using namespace std;
class grandfather{
    public:
    void display1(){
        cout<<"hi"<<endl;
    }
};
class father: public grandfather{
    public:
    void display2(){
        cout<<"hello"<<endl;
    }
};
class son:public father{
    public:
    void display3(){
        cout<<"multilevel"<<endl;
    }
};
int main(){
    //grandfather obj;
    //father obj1;
    son obj2;
    obj2.display3();
    obj2.display2();
    obj2.display1();

}