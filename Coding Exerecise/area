#include<iostream>
using namespace std;
class calculate{
    public:
    double l,w,ar;
    calculate(){
        cout<<"Enter floor length (inches): ";
        cin>>l;
        if((!l>0) || (!isdigit(l) && l != 0)){
            cout<<"Invalid length"<<endl;
            cin.clear();
            return;
        }
        cout<<"Enter floor width (inches): ";
        cin>>w;
        if((!w>0) || (!isdigit(w) && w != 0)){
            cout<<"Invalid width"<<endl;
            cin.clear();
            return;
        }
    }
    void area(){
        ar=l*w;
        if(ar>0){
        cout<<"Area of floor is "<<ar;
        }
        else{
            cout<<"Please check for invalid input and try again with valid numbers!";
        }
    }
};
int main(){
    calculate obj;
    obj.area();
    return 0;
}
