#include<iostream>
using namespace std;
class emp{
    public:
    int id;
    string name;
    int salary;
    emp(int id, string name, int salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<" "<<id<<endl<<" "<<name<<endl<<" "<<salary<<endl;
    }

};
int main(){
    emp obj(1,"sam",43000);
    obj.display();
    return 0;
}