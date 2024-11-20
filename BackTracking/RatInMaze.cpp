#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x,int y,vector<vector<char>> &board,vector<vector<bool>> &visited){
    int rowSize=board.size();
    int colSize=board[0].size();

    if((x>=0 && x<rowSize) && (y>=0 && y<rowSize) && (visited[x][y]==false) && (board[x][y]=='.')){
        return true;
    }
    else{
        return false;
    }
}

bool solve(int srcx,int srcy,int destx,int desty,vector<vector<char>> &board,vector<vector<bool>> &visited,string op){
    //base case
    if(srcx==destx && srcy==desty){
        cout<<"Path is "<<op<<endl;
        return true;
    }

    //DOWN
    int newx=srcx+1;
    int newy=srcy;
    bool downAns=false;
    if(isSafe(newx,newy,board,visited)){
        visited[newx][newy]=true;
        downAns=solve(newx,newy,destx,desty,board,visited,op+"D");
        //Backtrack
        visited[newx][newy]=false;
    }

    //right
    newx=srcx;
    newy=srcy+1;
    bool rightAns=false;
    if(isSafe(newx,newy,board,visited)){
        visited[newx][newy]=true;
        rightAns=solve(newx,newy,destx,desty,board,visited,op+"R");
        //Backtrack
        visited[newx][newy]=false;
    }

    //left
    newx=srcx;
    newy=srcy-1;
    bool leftAns=false;
    if(isSafe(newx,newy,board,visited)){
        visited[newx][newy]=true;
        leftAns=solve(newx,newy,destx,desty,board,visited,op+"L");
        //Backtrack
        visited[newx][newy]=false;
    }

    //UP
    newx=srcx-1;
    newy=srcy;
    bool upAns=false;
    if(isSafe(newx,newy,board,visited)){
        visited[newx][newy]=true;
        upAns=solve(newx,newy,destx,desty,board,visited,op+"U");
        //Backtrack
        visited[newx][newy]=false;
    }

    if(downAns || upAns || leftAns || rightAns){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int srcx=0;
    int srcy=0;

    int destx=3;
    int desty=3;

    vector<vector<char>> board(4,vector<char>(4,'.'));
    board[0][3]='*';
    board[1][1]='*';
    // board[2][1]='*';
    board[1][2]='*';
    board[3][1]='*';

    vector<vector<bool>> visited(4,vector<bool>(4,false));

    cout<<"Printing the board"<<endl;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Printing the Visited Array"<<endl;
    for(int i=0;i<visited.size();i++){
        for(int j=0;j<visited[i].size();j++){
            cout<<visited[i][j]<<" ";
        }cout<<endl;
    }
    visited[0][0]=true;
    string op="";
    bool ans=solve(srcx,srcy,destx,desty,board,visited,op);
    cout<<"Src to dest is possible or not"<<ans<<endl;
    return 0;
}