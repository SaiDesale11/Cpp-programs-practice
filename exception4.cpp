#include<iostream>
using namespace std;
class exp{
    int m,km;
    public:
    class demo{
        public:
        string x;
        int y;
        demo(string p,int q){
            x=p;
            y=q;
        }
    };
    exp(){
        m=0;
        km=0;
    }
    exp(int a,int b){
        if (b>=1000)
        throw demo("parameterised const",b);
        km=a;
        m=b;
    }
    void accept(){
        cout<<"enter kms: ";
        cin>>km;
        cout<<"enter meters: ";
        cin>>m;
        if(m>=1000)
        throw demo("accept function",m);
    }
    void display(){
        cout<<km<<" "<<m<<endl;
    }
};
int main(){
    try{
        exp obj1(15,750);
        obj1.display();
        exp obj2;
        obj2.accept();
        obj2.display();
    }
    catch(exp::demo d){
        cout<<"error in "<<d.x<<" "<<"value of "<<d.y<<" is > 1000";
    }
    return 0;
}