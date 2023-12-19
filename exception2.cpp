#include<iostream>
using namespace std;
int main(){
    int num,deno,res;
    cout<<"enter numerator and denominator: ";
    cin>>num>>deno;
    try{
        if(deno==0)
        throw 0;
        res=num/deno;
        cout<<"division is: ";
        cout<<num<<"/"<<deno<<"="<<res<<endl;
    }
    catch(int exc){
        cout<<"can't divide by "<<exc;
    }
    return 0;
}