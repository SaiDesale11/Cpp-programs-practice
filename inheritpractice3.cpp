#include<iostream>
using namespace std;
class vehicle{
    public:
    void display(){
        cout<<"There are various types of vehicles"<<endl;
    }
};
class bike:public vehicle{
    public:
    void display2(){
        cout<<"Bikes can be e-bikes and fuel bikes"<<endl;
    }
};
class ebike:public bike{
    public:
    void display3(){
        cout<<"E-bikes run on electricity"<<endl;
    }
};
class fbike:public bike{
    public:
    void display4(){
        cout<<"Fuel bikes"<<endl;
    }
};
int main(){
    bike obj1;
    obj1.display();
    obj1.display2();
    ebike obj2;
    obj2.display3();
    fbike obj3;
    obj3.display4();
    return 0;
}