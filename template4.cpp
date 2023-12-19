#include<iostream>
using namespace std;
template<class T>
T swap(T x, T y){
    T temp;
     temp=x;
     x=y;
     y=temp;
    cout<<x<<y<<endl;
}
int main(){
    
    cout<<swap(20,30);
 //   cout<<swap(10.5,2.6);
    return 0;
}