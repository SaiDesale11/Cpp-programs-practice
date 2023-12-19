#include<iostream>
using namespace std;
class calculate{
    int r;
    float area;
    public:
    calculate();
    void circle();
};
calculate::calculate(){
    cout<<"Enter radius: ";
    cin>>r;
}
void calculate::circle(){
   area=3.14*r*r;
   cout<<"area is: "<<area;
}
int main(){
    calculate obj;
    obj.circle();
    return 0;
}