#include<iostream>
using namespace std;
int i,j;
template<class m>
void read(m a[3][3]){
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
}
template<class m>
void display(m a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
template<class m>
void trans(m a[3][3]){
    m c[3][3];
    for(int i=0;i<3;i++){
         for(int j=0;j<=2;j++){
            c[i][j]=a[i][j];
         }
    }
}
template<class m, class n>
void add(m a[3][3], n b[3][3]){
    n d[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    display(d);
}
template<class m, class n>
void sub(m a[3][3], n b[3][3]){
    n e[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            e[i][j]=a[i][j]-b[i][j];
        }
    }
    display(e);
}
//template<class m, class n>
/*void multi(m a[3][3], n b[3][3]){
    n k[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<=3;j++){
        for(int k=0;k<=3;k++)
            k[i][j]=k[i][j]+(a[i][k]*b[k][j]);
        
    }
    }
    display(k);
}*/
int main(){
    int a[3][3],b[3][3],ch;
    do{
        cout<<"1.Read matrix 1\n2.Read matrix 2\n3.Display\n4.Transpose\n5.Multiplication\n6.Subtract\n7.Add\n8.Exit\nENTER CHOICE: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter elements for matrix 1:\n";
            read(a);
            break;
            case 2:
            cout<<"enter elements for matrix 2:\n";
            read(b);
            break;
            case 3:
            cout<<"\nmatrix 1:\n";
            display(a);
            cout<<"\nmatrix 2:\n";
            display(b);
            break;
            case 4:
            cout<<"\ntranspose: "<<endl;
            trans(a);
            display(a);
            trans(b);
            display(b);
            break;
            //case 5:
            //cout<<"\nmultiplication: "<<endl;
            //multi(a,b);
            //break;
            case 6:
            cout<<"\nsubtraction: "<<endl;
            sub(a,b);
            break;
            case 7:
            cout<<"\naddition: "<<endl;
            add(a,b);
            break;
        }
    }
    while(ch!=8);
}