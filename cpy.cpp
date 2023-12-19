#include<iostream>
using namespace std;
class code{
    int id;
    int age;
    public:
    code(int a,int b)
    {
        id=a;
        age=b;
    }
    code(code &x)
    {
        id=x.id;
        age=x.age;
    }
    
    void display(){
        cout<<id<<endl<<age<<endl;
    }
};
int main(){
    int n,m;
    cout<<"Enter the id:";
    cin>>n;
     cout<<"age";
    cin>>m;
    code a(n,m);
    code b(a);//copy cunstructor call
    code c=a;
    cout<<"First object is";
   
    a.display();
    cout<<"second object is";
    b.display();
    cout<<"Third object is";
    c.display();
}