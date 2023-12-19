#include<iostream>
using namespace std;
int r,r2,a,b;
float area,circum;
class getval{
    public:
    getval();
    void perform(int r);
};
class getval2{
    public:
    void perform(int r2);
    void perform(int a, int b);
};
getval::getval(){
    cout<<"Enter radius:";
    cin>>r;
}
void getval::perform(int r){
    area=3.14*r*r;
    cout<<"Area is: "<<area<<endl;
}
void getval2::perform(int r2){
    cout<<"Enter r2:"<<endl;
    cin>>r2;
    circum=2*3.14*r2;
    cout<<"Circumference is: "<<circum<<endl;
}
void getval2::perform(int a,int b){
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition is: "<<a+b;
}
int main(){
    getval obj;
    getval2 obj2;
    obj.perform(r);
    obj2.perform(r2);
    obj2.perform(a,b);
    return 0;

}