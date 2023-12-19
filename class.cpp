#include<iostream>

using namespace std;
class MyClass{
   public:
   int num;
   string name;
};
int main(){
    MyClass obj;
    obj.num=5;
    obj.name="Sai";

    cout<<obj.num<<endl;
    cout<<obj.name;
}