#include<iostream>
using namespace std;
template<class T1, class T2> //func template with multiple parameters
void num(T1 x, T2 y){
    cout<<x<<" "<<y<<endl;
}
int main(){
    num(10,2);
    num(2.5,7);
    num('a',3.5);
    return 0;
}