#include<iostream>
using namespace std;
bool ratMaze(char maze[][5],int n, int m, int i, int j){
    if(i==n-1 && j==m-1){
        maze[i][j] = '1';
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                cout<<maze[row][col]<<" ";
            }
            cout<<endl;
        }
         maze[i][j] = '0';
        return false;
    }
    // aage jana
    if(j+1<m && maze[i][j+1] != 'x'){
        maze[i][j] = '1';
        bool agrRastaHai = ratMaze(maze,n,m,i,j+1);
        if(agrRastaHai){
            return true;
        }
        maze[i][j] ='0';
    }
    //niche jana
    if(i+1<n && maze[i+1][j] != 'x'){
        maze[i][j] = '1';
        bool agrRastaHai = ratMaze(maze,n,m,i+1,j);
        if(agrRastaHai){
            return true;
        }
        maze[i][j] = '0';
    }
    return false;
}
int main(){
    char maze[][5]={"0000",
                    "0x00",
                    "000x",
                    "0000",
                    "0x00"};
    if(ratMaze(maze,5,4,0,0)){
        cout<<"Reached the sweetes point";
    }else{
        cout<<"not Possible";
    }
}