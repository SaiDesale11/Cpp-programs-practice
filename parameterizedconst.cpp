#include<iostream>
using namespace std;
class add{
   public:
   add(int a, int b){
    int c=a+b;
    cout<<"Sum is:"<<c;
   }
};
int main(){
    add obj(10,20);
    return 0;
}