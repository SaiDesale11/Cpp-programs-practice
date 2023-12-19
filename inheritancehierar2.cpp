#include<iostream>
using namespace std;
int s1,s2,s3,s4;
//int s1,s2,s3,s4,t1,t2,t3;
class shape{
    public:
    void display(){
        cout<<"There are various shapes"<<endl;
    }
};
class square:public shape{
   public:
        int sides(){
        //int s1,s2,s3,s4;
         // int s1=2,s2=2,s3=2,s4=2;
        cout<<"Enter sides :";
        cin>>s1>>s2>>s3>>s4;
        if(s1==s2 && s2==s3 && s3==s4 && s4==s1){
          cout<<"It is a square";
        }
        else{
          cout<<"It is not a square"<<endl;
        }
    }    
};
class triangle:public shape{
      public:
      int side1(){
        cout<<"\nEnter sides :";

        cin>>s1>>s2>>s3;
        if(s1==s2 && s2==s3){

          cout<<"It is an equilateral triangle";
        }
        else if (s1==s2|| s2==s3 || s1==s3){
          cout<<"It is an isosceles triangle";
        }
        else{
          cout<<"It is a scalene triangle";
        }
        
      }
};
int main(){
    square obj;
    triangle obj1;
    obj.display();
    obj.sides();
    obj1.side1();
    return 0;
}