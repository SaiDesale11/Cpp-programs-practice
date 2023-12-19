#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void display(int x){
        cout<<" a is: "<<x;
    }
};
int main(){
    A obj;
    A *ptr;
    ptr=&obj;
    void (A::*f)(int)=&A::display;
    (obj.*f)(10);
    (ptr->*f)(20);
    return 0;
}