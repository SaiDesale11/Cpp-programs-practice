#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char str[50];
    ofstream fout;
    fout.open("sample");
    cout<<"enter string ";
    cin>>str;
    fout<<str<<endl;
    fout.close();

    ifstream fin;
    fin.open("sample");
    fin>>str;

    cout<<"string is "<<str;
    fin.close();
    return 0;
}