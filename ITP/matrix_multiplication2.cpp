#include<iostream>

using namespace std;
int main(){
    int a,b,c,d;
    cout<<"2 matrix dimensions sperated by space (e.g 2 2 2 2)"<<endl;
        cin>>a>>b>>c>>d;
    while(b!=c){
        cout<<"invalid input";
        cout<<"2 matrix dimensions sperated by space (e.g 2 2 2 2)"<<endl;
        cin>>a>>b>>c>>d;
    }
    int matrix1[a][b]{},matrix2[c][d]{},matrix3[a][d]{};
    srand(static_cast<unsigned int>(time(0)));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           
           matrix1[i][j]=rand()%3;


        }
        cout<<endl;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
           
           matrix2[i][j]=rand()%3;

        }
        cout<<endl;
    }
   cout<<"matrix1"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           cout<<matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"matrix2"<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
           cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

  
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
            matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
            }
            
        }
    }

    cout<<"matrix3 "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
           cout<<matrix3[i][j]<<"\t";
        }
        cout<<endl;
    }
    


}