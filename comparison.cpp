#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter values of n1,n2,n3 ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
       cout<<"n1 is greater than n2 and n3: "<<"\t"<<n1;
    else if(n2>=n1 && n2>=n3)
       cout<<"n2 is greater than n1 and n3"<<n2;
    else 
       cout<<"n3 is greater than n1 and n2"<<n3;
    
    return 0;
}