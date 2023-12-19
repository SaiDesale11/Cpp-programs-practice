#include<iostream>
using namespace std;
class demo{
    public:
    void display(){
        cout<<"hi"<<endl;
    }
};
int main(){
    demo obj;
    demo *ptr;
    ptr=&obj;  //ptr to obj
    obj.display();
    ptr->display();
    return 0;
}