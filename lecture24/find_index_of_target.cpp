#include<iostream>
using namespace std;
int find_index(int arr[],int n,int i, int target){
    if(n==i){
        return -1;
    }else if(arr[i] ==target)return i;

    int index = find_index(arr,n,i+1,target);
    return index;
}
int main(){
    int arr[5]={2,8,7,12,15};
    int n=5;
    int target =10;
    cout<<find_index(arr,n,0,target);
}