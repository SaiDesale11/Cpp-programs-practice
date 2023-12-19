#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    void get1(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    virtual void display(){
        cout<<endl<<"*****welcome*****"<<endl;
        cout<<"Name of person is "<<name<<endl<<"Age of person is "<<age<<endl;
    }
};
class staff:public person{
    public:
    int exp;
    int salary;
    void get2(){
        cout<<"Enter number of years of experience: ";
        cin>>exp;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display(){
        cout<<"Experience is "<<exp<<" years"<<endl<<"Salary is "<<salary<<endl;
    }
};
class student:public person{
    public:
    int grade;
    int marks;
    void get3(){
        cout<<endl<<"Enter grade: ";
        cin>>grade;
        cout<<"Enter marks obtained: ";
        cin>>marks;
    }
    void display(){
        cout<<"Grade is "<<grade<<endl<<"Marks are "<<marks<<endl;
    }
};
int main(){
    person *ptr,obj;
    staff obj1;
    student obj2;
    obj.get1();

    obj1.get2();
    obj.display();
    ptr=&obj1;
    ptr->display();

    obj2.get3();
    obj.display();
    ptr=&obj2;
    ptr->display();
    return 0;
}