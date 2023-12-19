#include<iostream>
using namespace std;
class add{
    public:
    int x;
    int y;
    add(int x, int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<endl<<y;
    }
};
int main(){
    add a(10,20);
    a.display();
    return 0;
}