#include<iostream>
using namespace std;
class calculate{
    public:
    void operations(){
        cout<<"operations can be performed"<<endl;
    }
};
class add:public calculate{
    public:
    void func(){
        cout<<"it performs addition"<<endl;
    }
};
int main(){
    add obj;
    obj.operations();
    obj.func();
}