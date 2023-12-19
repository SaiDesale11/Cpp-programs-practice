#include<iostream>
using namespace std;
class getval{
    public:
    void add(int a,int b){
        cout<<"Addition of integers is: "<<a+b<<endl;
    }
    void add(float c,float d, float e){
        cout<<"Addition of decimal nos is: "<<c+d+e<<endl;
    }
    void add(string a,string b){
        cout<<"Concatenation of strings is: "<<a+b<<endl;
    }
};
int main(){
    getval obj;
    obj.add(5,6);
    obj.add(7.5,2.2);
    obj.add("abc","def");
    return 0;
}