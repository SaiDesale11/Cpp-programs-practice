#include<iostream>
using namespace std;
class factorial{
    int n,fact;
public:
    factorial(int x){
        n=x;
    }
    factorial(factorial &y){
        n=y.n;

    }
    
    int calculate(){
        fact=1;
        for (int i=1;i<=n;i++){
            fact=fact*i;
        }
    
        return fact;
    }
    
};

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    factorial obj(a);
    factorial obj1=obj;
    cout<<"Factorial is:"<<obj.calculate()<<endl;
    cout<<"Factorial is:"<<obj1.calculate();
    return 0;
}