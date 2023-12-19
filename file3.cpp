//writing from file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream new_file;
    new_file.open("new_file_write.txt",ios::out);
    if(!new_file){
        cout<<"file creation failed";
    }
    else{
        cout<<"new file created";
        new_file<<"learning";
        new_file.close();
    }
    return 0;
}