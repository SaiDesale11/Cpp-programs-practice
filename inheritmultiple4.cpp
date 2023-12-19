#include<iostream>
using namespace std;
int s1,s2,sum,total;
int per;
class A{
    public:
    void getdata(){
    //int s1,s2,sum,total;
    //float perc;
    cout<<"Enter marks of subject 1 and 2: ";
    cin>>s1>>s2;
    }
};
class B{
    public:
    //total=100;
    void calc(){
    sum=s1+s2;
    cout<<"sum is: "<<sum<<endl;
    }
    
};
class C:public A, public B{
    public:
    float per;
    void display(){
    per=(sum/100)*100;
    cout<<"percentage = "<<per;
    }
    
};
int main(){
    C obj;
    obj.getdata();
    obj.calc();
    obj.display();
    return 0;

}