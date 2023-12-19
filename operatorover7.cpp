#include<iostream>
using namespace std;
class mul{
    public:
    int real;
    int imag;
    mul(int x,int y){
        real=x;
        imag=y;
    }
    mul operator *(mul x){
        real=real*x.real;
        imag=imag*x.imag;
        display();
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    mul obj(10,20);
    mul obj1(30,40);
    mul obj2(0,0);
    //obj.display();
    //obj1.display();
    obj2=obj*obj1;
    obj2.display();
    return 0;

}