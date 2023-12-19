#include<iostream>
using namespace std;
class student{
    public:
    int x;
    student(int a){
        x=a;
    }
    student(student &i){
        x=i.x;
    }
};
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    student obj(n);
    student obj1(obj);
    cout<<obj.x<<endl;
    cout<<obj1.x;
    return 0;
}