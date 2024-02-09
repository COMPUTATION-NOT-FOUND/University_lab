#include<iostream>

using namespace std;
int main(){
    int matrix1[3][3]{},matrix2[3][3]{},matrix3[3][3]{},matrix4[3][3]{3};
    srand(static_cast<unsigned int>(time(0)));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
           matrix1[i][j]=rand()%3;
           matrix2[i][j]=rand()%3;

        }
        cout<<endl;
    }
   cout<<"matrix1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"matrix2"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    //+matrix1[i][k]*matrix2[k][j]+matrix1[i][k]*matrix2[k][j];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
            matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
            }
        }
    }
            
            for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix4[i][j]=matrix1[i][0]*matrix2[0][j]+matrix1[i][1]*matrix2[1][j]+matrix1[i][2]*matrix2[2][j];
    }
    }
    cout<<"matrix3 different computation"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix3[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"matrix4"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix4[i][j]<<"\t";
        }
        cout<<endl;
    }

}