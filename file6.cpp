#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int x;
    ifstream fin;
    fin.open("myfile.txt",ios::in);
    fin>>x;
    while(!fin.eof())
    {
        cout<<x<<endl;
        fin>>x;
    }
    fin.close();
    return 0;
}