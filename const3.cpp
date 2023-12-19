#include<iostream>
using namespace std;
class swap{
    int a,b,c;
    public:
    
    swap(){
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    }             
    
    void display(){
   
    cout<<a<<endl<<b;
    }
    
};
swap::swap(){
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
   
}
void swap::display(){
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b;
}
int main(){
    
   swap s;
   cout<<s.display();
   return 0;
}