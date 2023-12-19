#include<iostream>
using namespace std;
class A{
    public:
    int a,b,c;
    A(int a, int b){
        int c;
        c=a;
        a=b;
        b=c;
    }
    void display(){
        cout<<"Enter a and b: ";
        cout>>a>>b;
    }

};
int main(){
    A obj;
    obj.display();
    return 0;
}