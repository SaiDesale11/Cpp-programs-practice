#include<iostream>
using namespace std;
class A{
    public:
    int x,y;
    A(){
        cout<<"Enter values of x and y: ";
        cin>>x>>y;
    }
    void operator ++(){
        x=++x;
        y=++y;
    }
    void operator --(){
        x=--x;
        y=--y;
    }
    void operator -(){
        x=-x;
        y=-y;
    }
    void operator !(){
        x!=x;
        y!=y;    
        }
    void operator *(){
        x=x*x;
        y=y*y;
    }
    void display(){
        cout<<"new x: "<<x<<endl;
        cout<<"new y: "<<y<<endl;
    }
};
int main(){
    A obj;
    ++ obj;
    obj.display();
    -- obj;
    obj.display();
    - obj;
    obj.display();
    ! obj;
    obj.display();
    * obj;
    obj.display();
    return 0;
}