#include<iostream>
using namespace std;
int main(){
    int arr[4]={0,0,0,0};
    int index;
    int a,b,c;
    cout<<"enter index: ";
    cin>>index;
    try{
        if(index>=4)
        throw "array out of bound exception";
        cout<<"enter a and b: "<<endl;
        cin>>a>>b;
        if(b==0)
        throw 0;
        c=a/b;
        cout<<a<<"/"<<b<<"="<<c<<endl;
    }
    catch(const char *msg){
        cout<<msg;
    }
    catch(int num){
        cout<<"can't divide by 0"<<endl;
        cout<<"number should be greater than "<<num<<endl;
    }
    return 0;
}