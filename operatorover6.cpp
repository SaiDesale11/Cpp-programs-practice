#include<iostream>
using namespace std;
class sub{
    public:
    int real;
    int imag;
    sub(int x,int y){
        real=x;
        imag=y;
    }
    sub operator -(sub x){
        real=real-x.real;
        imag=imag-x.imag;
        display();
    }
    void display(){
        cout<<real<<"-"<<imag<<"i"<<endl;
    }
};
int main(){
    sub obj(80,50);
    sub obj1(30,40);
    sub obj2(0,0);
    //obj.display();
    //obj1.display();
    obj2=obj-obj1;
    obj2.display();
    return 0;

}