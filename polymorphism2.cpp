#include<iostream>
using namespace std;
int l,b,s;
float r;
class calculate{
    public:
    void perform(int l,int b){
        cout<<"Enter length and bredth of rect: ";
        cin>>l>>b;
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
    void perform(int s){
        cout<<"Enter side of square: ";
        cin>>s;
        cout<<"Area of sqr is: "<<s*s<<endl;
    }
    void perform(float r){
        cout<<"Enter radius of circle: ";
        cin>>r;
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
};
int main(){
    //int l,b,s;
    //float r;
    calculate obj;
    obj.perform(l, b);
    obj.perform(s);
    obj.perform(r);
    return 0;
}