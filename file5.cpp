#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int marks[5],i;
    cout<<"enter marks: ";
    for(i=0;i<=5;i++)
    cin>>marks[i];
    ofstream fout;
    fout.open("example.txt");
    fout.write((char*)& marks,sizeof(marks));
    fout.close();
    ifstream fin;
    fin.open("example.txt",ios::in);
    fin.read((char*)& marks,sizeof(marks));
    cout<<"marks are: ";
    for(i=0;i<=5;i++)
    cout<<marks[i]<<endl;
 
    fin.close();
    return 0;
}