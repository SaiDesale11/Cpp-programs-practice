#include<iostream>
using namespace std;
int a,c;
string b,d;
class teacher{
    public:
    void id(int a,string b){
        cout<<"Teacher id is: ";
        cin>>a;
        cout<<"Teacher name is: ";
        cin>>b;

    }
};
class student{
    public:
    void id(int c, string d){
        cout<<"Student id is: ";
        cin>>b;
        cout<<"Student name is: ";
        cin>>d;
    }
};
int main(){
    teacher obj;
    obj.id(a,b);
    student obj1;
    obj1.id(c,d);
    return 0;
}