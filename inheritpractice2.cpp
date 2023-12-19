#include<iostream>
using namespace std;
int t1,t2,s1,s2;
class school{
    public:
    void display(){
        cout<<"This is school's data"<<endl;
    }
};
class teacher: public school{
    public: 
    void getvalues(){
    cout<<"Enter teacher id: ";
    cin>>t1;
    cout<<"Enter teacher salary: ";
    cin>>t2;
    cout<<"Teacher id and salary is "<<t1<<" "<<"and"<<" "<<t2<<endl;
    }
};
class student: public school{
    public:
    void getvalues2(){
        cout<<"Enter student roll no: ";
        cin>>s1;
        cout<<"Enter student marks: ";
        cin>>s2;
        cout<<"Student roll number and marks are  "<<s1<<" "<<"and"<<" "<<s2<<endl;
    }
};
int main(){
    teacher obj;
    obj.display();
    obj.getvalues();
    student obj2;
    obj2.getvalues2();
    return 0;
}