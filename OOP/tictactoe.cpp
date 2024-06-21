#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

class tictactoe{
    int board [3][3]{};
public:
void clearboard(){
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        board[i][j]=0;
    }
   }
}
void to_string(){
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        cout<<board[i][j];
        if(j<2){
            cout<<"|";
        }
    }
    cout<<endl<<"--------"<<endl;
   }
}

int gameStatus(){
    for(int i = 0; i < 3; ++i) {
            if(board[i][0] != 0 && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
                return board[i][0];
            }
        }
        for(int j = 0; j < 3; ++j) {
            if(board[0][j] != 0 && board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
                return board[0][j];
            }
        }
        if(board[0][0] != 0 && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            return board[0][0];
        }
        if(board[0][2] != 0 && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
            return board[0][2] ;
        }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (board[i][j]==0){
                return 0;
            }         
        }   
        }

return 3;
}

bool move(int player,int row, int col){
    if(board[row][col]==0){
        board[row][col]=player;
        return true;
    }
    return false;

}
};

int main(){
    tictactoe i;
    int row,column,k=1;
    while(true){
    
        i.to_string();
        cout<<"enter row column :";
        cin>>row>>column;
        i.move(k,row,column);

        

        k=(k==1)?2:1;

        if(i.gameStatus()==3){
            cout<<"draw";
            break;
        }
        else if(i.gameStatus()!=0)
           { cout<<"player"<<i.gameStatus()<<"wins";
            break;
            }
            

        }
        


    }

