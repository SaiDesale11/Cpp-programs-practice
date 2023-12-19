#include<iostream>
using namespace std;
class box{
   public:
   float height;
   float length;
   float breadth;
   float calc(){
    return height*length*breadth;
   }
   float area(){
    return length*breadth;
   }
};
int main(){
    box box1;
    box1.height=5;
    box1.length=7;
    box1.breadth=5;
    //float volume=0.0;
    //box1.calc();
    cout<<"volume is: "<<box1.calc()<<endl;
    cout<<"area is: "<<box1.area();
    return 0;
}