#include<iostream>
using namespace std;
class box{
   public:
   float height;
   float length;
   float breadth;
};
int main(){
    box box1;
    box box2;
    float volume1=0.0;
    float volume2=0.0;
    box1.height=5;
    box1.length=7;
    box1.breadth=5;
    box2.height=8;
    box2.length=9;
    box2.breadth=8;
    volume1=box1.height*box1.length*box1.breadth;
    volume2=box2.height*box2.length*box2.breadth;

    cout<<volume1<<endl;
    cout<<volume2;
}