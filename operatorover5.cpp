#include<iostream>
using namespace std;
class sum{
    public:
    int real;
    int imag;
    sum(int x,int y){
        real=x;
        imag=y;
    }
    sum operator +(const sum& x){
        real=real+x.real;
        imag=imag+x.imag;
        display();
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    sum obj(10,20);
    sum obj1(30,40);
    sum obj2(0,0);
    //obj.display();
    //obj1.display();
    obj2=obj+obj1;
    obj2.display();
    return 0;

}