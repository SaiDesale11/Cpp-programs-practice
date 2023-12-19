#include<iostream>
using namespace std;
class father{
    public:
    void display(){
        cout<<"father"<<endl;
    }
};
class mother{
    public:
    void display2(){
        cout<<"mother"<<endl;
    }
};
class son:public father, public mother{
    public:
    void display3(){
        cout<<"son";
    }
};
int main(){
    son obj;
    obj.display1();
    obj.display2();
    obj.display3();
    return 0;

}