#include<iostream>
using namespace std;
class personal{
    public:
    char name[20];
    char dob[20];
    char phn[12];
    char address[30];
    void read(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter date of birth: ";
        cin>>dob;
        cout<<"Enter phone number: ";
        cin>>phn;
        cout<<"Enter address: ";
        cin>>address;
    }
    void display(){
        cout<<"\n*****Personal Information*****";
        cout<<"\nName is "<<name;
        cout<<"\nDate of birth: "<<dob;
        cout<<"\nPhone number: "<<phn;
        cout<<"\nAddress: "<<address;
    }
};
class professional{
    public:
    string skill;
    char designation[20];
    int salary;
    int exp;
    void read(){
        cout<<"\nEnter skills: ";
        cin>>skill;
        cout<<"\nEnter designation: ";
        cin>>designation;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"\nEnter the number of years of experience: ";
        cin>>exp;
    }
    void display(){
        cout<<"\n*****Professional Information*****";
        cout<<"\nSkills:  "<<skill;
        cout<<"\nDesignation: "<<designation;
        cout<<"\nSalary: "<<salary;
        cout<<"\nYears of experience: "<<exp;
    }
};
class academic{
    public:
    char uni[30];
    char aggr[20];
    char branch[20];
    void read(){
        cout<<"\nEnter university name: ";
        cin>>uni;
        cout<<"\nEnter aggregate: ";
        cin>>aggr;
        cout<<"\nEnter branch: ";
        cin>>branch;
    }
    void display(){
        cout<<"\n*****Academic Information*****";
        cout<<"\nUniversity: "<<uni;
        cout<<"\nAggregate: "<<aggr;
        cout<<"\nBranch: "<<branch;
    }
};
class biodata:public personal, public professional, public academic{
    public:
    void read(){
        personal::read();
        professional::read();
        academic::read();
    }
    void display(){
        personal::display();
        professional::display();
        academic::display();
    }
};
int main(){
    biodata obj;
    obj.read();
    obj.display();
    return 0;
}