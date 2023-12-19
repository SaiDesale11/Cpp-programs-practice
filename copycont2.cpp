#include<iostream>
using namespace std;
class student{
    public:
    int roll, marks;
    string name;
    student(int a,string b, int c){
        roll=a;
        name=b;
        marks=c;
    }
    student(student &x){
        roll=x.roll;
        name=x.name;
        marks=x.marks;
    }
    void display(){
        cout<<roll<<endl<<name<<endl<<marks<<endl;
    }
};
int main(){
    student obj1(1,"Sam",30);
    student obj2(obj1);
    cout<<"First object is ";
    obj1.display();
    cout<<"Second object is ";
    obj2.display();
    return 0;
}