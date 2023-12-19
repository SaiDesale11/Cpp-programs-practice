#include<iostream>
using namespace std;
class A{
    public:
    int value;
    A(){
        value = 8;
    }
    void operator++(){
        value++;
    }
    void disp(){
        cout<<" "<<value;
    }
};
int main(){
    A obj;
    ++obj;
    obj.disp();
    return 0;
}