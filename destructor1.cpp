#include<iostream>
using namespace std;
static int count=0;
class A{
    public:
    A(){
        count++;
        cout<<"No of obj created: "<<count<<endl;
    }
    ~A(){
        cout<<"No of obj destroyed: "<<count<<endl;
        count--;
    }

};
int main(){
    A obj1,obj2,obj3;
    return 0;
}