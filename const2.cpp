#include<iostream>
using namespace std;
class calculate{
    int r,s,l,b,h;
    float a1,a2,a3,a4;
    public:
    calculate();
    void circle();
    void sqr();
    void rect();
    void tri();
};
calculate::calculate(){
    cout<<"Calculation for area of circle-"<<endl;
    cout<<"Enter radius: ";
    cin>>r;

    cout<<"Calculation for area of square-"<<endl;
    cout<<"Enter side of square: ";
    cin>>s;

    cout<<"Calculation for area of rectangle-"<<endl;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;

    cout<<"Calculation for area of triangle-"<<endl;
    cout<<"Enter base of triangle: ";
    cin>>b;

    cout<<"Enter height of triangle: ";
    cin>>h;
}
void calculate::circle(){
   a1=3.14*r*r;
   cout<<"Area of circle is: "<<a1<<endl;
}
void calculate::sqr(){
    a2=s*s;
    cout<<"Area of square is: "<<a2<<endl;
}
void calculate::rect(){
    a3=l*b;
    cout<<"Area of rectangle is: "<<a3<<endl;
}
void calculate::tri(){
    a4=0.5*b*h;
    cout<<"Area of triangle is: "<<a4;
}
int main(){
    calculate obj;
    obj.circle();
    obj.sqr();
    obj.rect();
    obj.tri();
    return 0;
}