#include<iostream>
using namespace std;
class A{
    public:
    int value;
    A(){
        cout<<"Enter value: ";
        cin>>value;
    }
    void operator--(){
        value--;
    }
    void disp(){
        cout<<"Decremented value is: "<<value;
    }
};
int main(){
    A obj;
    --obj;
    obj.disp();
    return 0;
}