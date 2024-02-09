#include <iostream>

using namespace std;
int main() {
   int orignalarr[9][9]{   {5,3,0,0,7,0,0,0,0},
                    {6,0,0,1,9,5,0,0,0},
                    {0,9,8,0,0,0,0,6,0},
                    {8,0,0,0,6,0,0,0,3},
                    {4,0,0,8,0,3,0,0,1},
                    {7,0,0,0,2,0,0,0,6},
                    {0,6,0,0,0,0,2,8,0},
                    {0,0,0,4,1,9,0,0,5},
                    {0,0,0,0,8,0,0,7,9},
   };
    int arr[9][9]{   {5,3,0,0,7,0,0,0,0},
                    {6,0,0,1,9,5,0,0,0},
                    {0,9,8,0,0,0,0,6,0},
                    {8,0,0,0,6,0,0,0,3},
                    {4,0,0,8,0,3,0,0,1},
                    {7,0,0,0,2,0,0,0,6},
                    {0,6,0,0,0,0,2,8,0},
                    {0,0,0,4,1,9,0,0,5},
                    {0,0,0,0,8,0,0,7,9},
    } ;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
            if((j+1)%3==0){
                cout<<" ";
            }

        }
        if((i+1)%3==0){
                cout<<endl;
            }
         cout<<endl;
    }

    int x=0,y=0,contin=1,input=0,flag=0,reset=0;
    while(contin==1){
    cout<<"enter cord (0-8) example(1 2) :";
    cin>>x>>y;
    while((x<0 || y<0) ||(x>8||y>8 ) ||(arr[x][y]!=0)){
        cout<<"error invalid cords enter again :";
        cin>>x>>y;
    }
    cout<<"enter value from 0 to 9 :";
    cin>>input;
    while(input>9||input<0){
    cout<<"error!enter value from 0 to 9 :";
    cin>>input;
    }
    arr[x][y]=input;


    

    for(int i=0;i<9;i++){
        if(y==i){
            continue;
        }
        if(!(arr[x][i]^input)){
            flag=1;
        }
    }

    for(int i=0;i<9;i++){
        if(x==i){
            continue;
        }
        if(!(arr[i][y]^input)){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"repeated value entry not made!";
        arr[x][y]=0;
        flag=0;

    }


    cout<<endl;
      for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
            if((j+1)%3==0){
                cout<<" ";
            }

        }
        if((i+1)%3==0){
                cout<<endl;
            }
         cout<<endl;
    }
    //cout<<"wish to reset enter 1 :";
    //cin>>reset;
    if(reset){
        for(int i=0;i<9;i++)
           { for(int j=0;j<9;j++){
            arr[i][j]=orignalarr[i][j];
           }
        }
    reset=0;
    }
    //cout<<"wish to continue enter 1 :";
    //cin>>contin;
    }
}