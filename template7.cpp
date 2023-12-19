#include<iostream>
using namespace std;
template <class T>  //class template
class add{
    private:
    T n1,n2,n3;
    public:
    add(T x, T y, T z){
        n1=x;
        n2=y;
        n3=z;
    }
    void avg(){
        cout<<"average is "<<((n1+n2+n3)/3)<<endl;
    }
};
int main(){
    add<int> a(10,20,30);
    add<float> b(10.2,20.8,30.7);
    a.avg();
    b.avg();
    return 0;
}