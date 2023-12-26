#include<iostream>
using namespace std;
int nWayMaze(int maze[][4], int i,int j){
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    int left = nWayMaze(maze,i,j-1);
    int up = nWayMaze(maze,i-1,j);
    return left + up;
}
int main(){
    int maze[4][4]={};
    int n=4;
    cout<<nWayMaze(maze,n-1,n-1);
}