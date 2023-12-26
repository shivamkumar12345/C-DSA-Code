#include<iostream>
using namespace std;
bool isSafe(char board[][5], int n, int i, int j){
    //vertical dir me check krna hai
    for(int k=i-1;k>=0;k--){
        if(board[k][j]=='Q'){
            return false;
        }
    }
    // left diagonal me check krna hai

    for(int x=i-1,y=j-1; x>=0 && y>=0; x--, y--){
        if(board[x][y]=='Q'){
            return false;
        }
    }
     // right diagonal me check krna hai

    for(int x=i-1,y=j+1; x>=0 && y<n; x--, y++){
        if(board[x][y]=='Q'){
            return false;
        }
    }
    //safe hai
    return true;
}
bool NQueen(char board[][5],int n, int i){
    if(i==n){
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                cout<<board[row][col]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //pure column me check kiya
    for(int j=0;j<n;j++){
        if(isSafe(board,n,i,j)){
            board[i][j] = 'Q';
            bool ydiPssibleHai = NQueen(board,n,i+1);
            if(ydiPssibleHai){
                return true;
            }
            board[i][j] = '0';
        }
       
    }
    return false;

}
int main(){
    char board[4][5]= {"0000",
                    "0000",
                    "0000",
                    "0000"};
    int n=4;
    NQueen(board,n,0);

}