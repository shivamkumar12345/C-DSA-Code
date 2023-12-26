#include<iostream>
using namespace std;
bool search_2d_Array(int arr[4][4],int target){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] ==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int target =15;
    if(search_2d_Array(arr,target)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}