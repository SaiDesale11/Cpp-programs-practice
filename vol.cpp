#include<iostream>
using namespace std;
class box{
   public:
   float height;
   float length;
   float breadth;
   volume=height*length*breadth;
   float calc(){
    return height*length*breadth;
   }
};
int main(){
    box box1;
    box1.height=5;
    box1.length=7;
    box1.breadth=5;
    float volume=0.0;
    box1.calc();
    cout<<"volume is: "<<volume;
}