#include<iostream>
using namespace std;
int a=0,b=1,c,n,i;
class series{
    public:
    void perform(){
        cout<<"Enter the number of terms: ";
        cin>>n;
        for(i=1;i<=n;i++){
            if(i==1){
                cout<<a<<endl;
                continue;
            }
            if(i==2){
                cout<<b<<endl;
                continue;
            }
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }

    }
};
int main(){
    series obj;
    obj.perform();
    return 0;
}