#include<iostream>
using namespace std;
class bill{
    public:
    int units,t1;

    void value(){
        cout<<"Enter the number of units: ";
        cin>>units;
    }
    void perform(){
        if(units>=1 && units<=100){
            t1=3*units;
            //cout<<"Total bill is: "<<t1<<endl;
        }
        else if(units>100 && units<=200)
        {
            t1=4*units;
            //cout<<"Total bill is: "<<t1;
        }
        else{
            t1=5*units;
            //cout<<"Total bill is: "<<t1;
        }
    }
    void print(){
        cout<<"Total bill: "<<t1;
    }

};
int main(){
    bill obj;
    obj.value();
    obj.perform();
    obj.print();
    return 0;
}