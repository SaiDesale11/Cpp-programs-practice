#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"const created"<<endl;
    }
    ~A(){
        cout<<"destructor created";
    }
};
int main(){
    A obj;
    return 0;
}