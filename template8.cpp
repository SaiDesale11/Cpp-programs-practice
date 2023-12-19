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
    add<int> a(10,20);
    add<float> b(2.5,3.4);
    a.sum();
    b.sum();
    return 0;
}