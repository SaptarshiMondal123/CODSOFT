#include<bits/stdc++.h>
using namespace std;
void printboard(const vector<vector<char>>& board){
    for(const auto& row:board){
        for(char cell:row){
            cout<<cell<<" ";
        }
        cout<<endl;
    }
}
bool checkwinner(const vector<vector<char>>& board,char player){
    for(int i=0;i<3;i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
         return true;
        if(board[0][i]==player &&  board[1][i]==player && board[2][i]==player)
         return true;
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player) 
    return true;
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
     return true;
    return false;
}
bool checkdraw(const vector<vector<char>>& board){
    for(const auto& row:board){
        for(char cell:row){
            if(cell==' ') return false;
        }
    }
    return true;
}
int main() {
vector<vector<char>> board(3,vector<char>(3,' '));
vector<char> players={'X','0'};
int playerindex=0;
bool gameover=false;
while(!gameover){
    printboard(board);
    char currentplayer=players[playerindex];
    cout<<"Player "<<currentplayer<<", enter your move(row column); ";
    int row,col;
    cin>>row>>col;
    if(row>=0 && row<3 && col>=0 && col<3 &&board[row][col]==' '){
        board[row][col]=currentplayer;
        if(checkwinner(board,currentplayer)){
            printboard(board);
            cout<<"Player "<<currentplayer<<" wins!"<<endl;
            gameover=true;
        }
        else if(checkdraw(board)){
            printboard(board);
            cout<<"It is a draw!"<<endl;
            gameover=true;
        }
        else{
            playerindex=1-playerindex;
        }
    }
        else{
            cout<<"Invalid move. Try again."<<endl;
        }
    }
    char playagain;
    cout<<"Do you want to play agin? (y/n): ";
    cin>>playagain;
    if(playagain=='y' || playagain=='Y'){
        main();
    }
    else{
        cout<<"Thank you for playing!"<<endl;
    }
return 0;
}
