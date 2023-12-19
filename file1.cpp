#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream MyFile("name.txt");
    MyFile<<"hi";
    MyFile.close();
}