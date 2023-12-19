#include<iostream>
using namespace std;
class co{
    private:
    int a,b,c;
    public:
    co(){
        cout<<"a:";
        cin>>a;
        cout<<"b:";
        cin>>b;
    }

    co(int x,int y){
        a=x;
        b=y;

    }
    co(co &z){
        a=z.a;
        b=z.b;

    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
    ~co(){
        cout<<"deleted"<<endl;
    }

};
int main(){
    int a,b;
    cout<<"Numbers are: "<<endl;
    cin>>a>>b;
    co obj1;
    co obj2(a,b);
    co obj3(obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}