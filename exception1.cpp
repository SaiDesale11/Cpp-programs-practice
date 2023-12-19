#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    try{
        if(age>=18){
            cout<<"access given"<<endl;
        }
        else{
            throw age;
        }
    }
    catch(int no){
        cout<<"access denied"<<endl;
        cout<<"age is: "<<no<<endl;
    }
    return 0;
}