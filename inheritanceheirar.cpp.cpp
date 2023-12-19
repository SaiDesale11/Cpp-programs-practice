#include<iostream>
using namespace std;
class vehicle{
    public:
    void fuel(){
        cout<<"fuel is reqd"<<endl;
    }
};
class car:public vehicle{
    public:
    void wheel(){
        cout<<"4 wheels"<<endl;
    }
};
class moped:public vehicle{
    public:
    void wheel(){
        cout<<"Two wheels";
    }
};
int main(){
    car obj;
    moped obj1;
    obj.fuel();
    obj.wheel();
    obj1.fuel();
    obj1.wheel();
    return 0;
}