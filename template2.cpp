#include<iostream>
using namespace std;
template<class T>
T num(T x, T y){
    T res=x+y;
    return res;
}
int main(){
    int i=5;
    int j=3;
    float m=3.5;
    float n=2.5;
    cout<<"sum is: "<<num(i,j)<<endl;
    cout<<"sum is: "<<num(m,n);
    return 0;
}