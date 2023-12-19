#include<iostream>
using namespace std;
template<class T>
T max(T &x, T &y){
    if(x>y){
        //cout<<"greater is "<<x<<endl;
        return x;
    }
    else{
        //cout<<"greater is "<<y<<endl;
        return y;
    }
}
int main(){
    int m;
    int n;
    cout<<"enter two numbers: ";
    cin>>m>>n;
    //cout<<max(m,n)<<endl;
    cout<<"Greater is "<<max(m,n)<<endl;
    cout<<"Greater is "<<max(2.5,1.4)<<endl;
    cout<<"Greater is "<<max('a','b');
    return 0;
}