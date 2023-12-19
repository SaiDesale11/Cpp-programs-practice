#include<iostream>
using namespace std;
template<class T>
class add{
    private:
    T n1,n2,n3;
    public:
    add(T x, T y){
        n1=x;
        n2=y;
    }
    void sum(){
        cout<<"sum is "<<n1+n2<<endl;
    }
};
int main(){
    /*int i,j;
    cout<<"enter 2 integer numbers: "<<endl;
    cin>>i>>j;
    add<int> a(i,j);*/
    float m,n;
    cout<<"enter 2 numbers: "<<endl;
    cin>>m>>n;
    add<float> b(m,n);
    //a.sum();
    b.sum();
    return 0;
}