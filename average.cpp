#include <iostream>
using namespace std;

int main(){
    int s1,s2,s3,sum;
    float avg;
    cout<<"Enter marks of s1,s2,s3";
    cin>>s1>>s2>>s3;
    sum=s1+s2+s3;
    avg=sum/3;
    cout<<"Sum is: "<<sum;
    cout<<"\nAverage is: "<<avg;
    return 0;
}