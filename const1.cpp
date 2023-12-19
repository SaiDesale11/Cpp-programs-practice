#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    int marks;
    public:
    student(){
        cout<<"Enter RollNo:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";    
        cin>>marks;
    }
    void display(){
        cout<<"Roll no. entered is: "<<roll<<endl<<"Name entered is: "<<name<<endl<<"Marks entered are: "<<marks<<endl;
    }
};
int main(){
    student obj;
    obj.display();
}