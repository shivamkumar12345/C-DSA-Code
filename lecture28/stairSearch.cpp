#include<iostream>
using namespace std;
void stairSearch(int arr[][5], int n,int target){
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(arr[i][j] > target){
            j--;
        }else if(arr[i][j]< target){
            i++;
        }else {
            cout<<i<<" "<<j<<endl;
            return;
        }
    }
    return;
}
int main(){
    int arr[5][5]={};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    stairSearch(arr,n,target);
}