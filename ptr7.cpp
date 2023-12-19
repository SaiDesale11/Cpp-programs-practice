#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void display(){
       cout<<"x is: "<<x<<endl;
    }
};
class B:public A{
    public:
    int y;
    void display(){
        cout<<"x is: "<<x<<endl<<"y is: "<<y;
    }
};
int main(){
    B obj;
    B *P;
    P=&obj;
    P->x=10;
    P->y=20;
    P->display();
    return 0;
}