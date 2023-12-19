#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
    int roll,i,n;
    int flag;
    char name[20];
    int marks;
    student(){   //constr
    flag=0;
    }
    void create();
    void display();
    void add();
    void modify();
    void del();
}p[20];
void student::create(){
    int i;
    cout<<"Enter the number of records you want to create: ";
    cin>>n;
    ofstream outfile;
    outfile.open("file.txt");
    cout<<"\nEnter the data: ";
    for(i=0;i<n;i++){
        cout<<"\nEnter the roll number of "<<i+1<<"st student:\n";
        cin>>p[i].roll;
        outfile<<p[i].roll<<"\t";
        cout<<"\nEnter the name of "<<i+1<<"st student:\n";
        cin>>p[i].name;
        outfile<<p[i].name<<"\t";
        cout<<"\nEnter the marks of "<<i+1<<"st student:\n";
        cin>>p[i].marks;
        outfile<<p[i].marks<<"\t";
        }
}
void student::display(){
    int i;
    cout<<"\nRoll no\tName\tMarks\n";
    for(i=0;i<n;i++){
        cout<<"\n"<<p[i].roll<<"\t"<<p[i].name<<"\t"<<p[i].marks<<"\n";
    }
}
void student::add(){
    i=n;
    cout<<"\nEnter the data you want to add ";
    cout<<"\nEnter the roll no. of student: ";
    cin>>p[i].roll;
    cout<<"\nEnter the name of student: ";
    cin>>p[i].name;
    cout<<"\nEnter the marks of student: ";
    cin>>p[i].marks;
    n++;

}
void student::del(){
    int j;
    int d;
    cout<<"\nEnter the roll no of student you want to delete: ";
    cin>>d;
    flag=0;
    for(i=0;i<n;i++){
        if(p[i].roll=d){
            flag=1;
            for(j=1;j<n;j++){
                p[j]=p[j+1];
            }
            n--;
        }
    }
    if(flag==0){
        cout<<"\nData not found!!!";
    }
    else{
        cout<<"\nData deleted successfully!!!";
    }
}
void student::modify(){
    int d;
    int j;
    flag=0;
    cout<<"\nEnter the roll no of student whose data you want to modify: ";
    cin>>d;
    for(i=0;i<n;i++){
        if(p[i].roll==d){
            cout<<"\nEnter the new data: ";
            cout<<"\nEnter the roll no of student: ";
            cin>>p[i].roll;
            cout<<"\nEnter the name of student: ";
            cin>>p[i].name;
            cout<<"\nEnter the marks of student: ";
            cin>>p[i].marks;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"\nData not found!!!";
    }
    else{
        cout<<"\nData Modified Successfully!!!";
    }
}
int main(){
    int ch;
    char ans;
    student p;
    do{
        cout<<"\n*****MENU*****";
        cout<<"\n1.CREATE DATABASE";
        cout<<"\n2.DISPLAY DATABASE";
        cout<<"\n3.ADD A RECORD";
        cout<<"\n4.DELETE A RECORD";
        cout<<"\n5.MODIFY A RECORD";
        cout<<"\n6.EXIT";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            p.create();
            break;
            case 2:
            p.display();
            break;
            case 3:
            p.add();
            break;
            case 4:
            p.del();
            break;
            case 5:
            p.modify();
            break;
            case 6:
            exit(0);
        }
    }
    while(ch<8);
}