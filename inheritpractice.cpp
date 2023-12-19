#include<iostream>
using namespace std;
int c,n1,n2;
class calculate{
    public:
    void getvalue(){
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
    }
    void perform(){
        cout<<"Operations: 1= Addition, 2=Subtraction, 3=Multiplication, 4=Division"<<endl;
        cout<<"Enter choice: ";
        cin>>c;
    }

};
class calculate2: public calculate{
    public:
    int perform2(){
        if(c==1){
            c=n1+n2;
            cout<<"Addition is: "<<c;
        }
        else if(c==2){
            c=n1-n2;
            cout<<"Subtraction is: "<<c;
        }
        else if(c==3){
            c=n1*n2;
            cout<<"Multiplication is: "<<c;
        }
        else{
            c=n1/n2;
            cout<<"Division is: "<<c;
        }
    }
};
int main(){
    calculate2 obj;
    obj.getvalue();
    obj.perform();
    obj.perform2();
    return 0;
}