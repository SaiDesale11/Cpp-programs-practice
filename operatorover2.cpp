#include<iostream>
using namespace std;
class A{
    int x,y,z;
    public:
    A(int p,int q,int r){
        x=p;
        y=q;
        z=r;
    }
    void display(){
        cout<<x<<" "<<y<<" "<<z<<endl;    
    }
    void operator -(){
        x=-x;
        y=-y;
        z=-z;
    }
};
int main(){
    A obj(10,-20,-30);
    obj.display();
    -obj;
    obj.display();
    return 0;
}