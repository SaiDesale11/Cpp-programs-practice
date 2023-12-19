#include<iostream>
using namespace std;
class A{
   public:
   string name;
   void display(){
    cout<<"display name: "<<name;
   }
};
int main(){
    A obj1;
    obj1.name="Sai";
    obj1.display();
}