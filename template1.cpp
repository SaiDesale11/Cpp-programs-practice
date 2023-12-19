#include<iostream>
using namespace std;
template<class T>
T num(T x){
    cout<<x<<endl;
}
int main(){
    num(10);
    num(2.5);
    num('a');
    return 0;
}