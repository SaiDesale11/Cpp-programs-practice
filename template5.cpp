#include<iostream>
using namespace std;
template<class T>
T max(T &x, T &y){
    if(x>y){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
}
int main(){
    cout<<"Greater is "<<max(3,5)<<endl;
    cout<<"Greater is "<<max(2.5,1.4)<<endl;
    cout<<"Greater is "<<max('a','b');
    return 0;
}