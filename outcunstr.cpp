#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    int marks;
    public:
    student();
    void display(){
     cout<<"Roll no. entered is: "<<roll<<endl<<"Name entered is: "<<name<<endl<<"Marks entered are: "<<marks<<endl;
    }
};
student :: student(){
        cout<<"Enter RollNo:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";    
        cin>>marks;
}
  
int main(){
    student s;
    s.display();
    return 0;
}
