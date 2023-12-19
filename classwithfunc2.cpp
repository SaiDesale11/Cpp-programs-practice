#include<iostream>
using namespace std;
class A{
   public:
   int id;
   string name;
   void display(){
    cout<<"display name: "<<name<<endl;
   }
   void number(){
    cout<<"display id: "<<id;
   }
};

int main(){
    A obj1;
    obj1.name="ABC";
    obj1.display();
    obj1.id=5;
    obj1.number();
}