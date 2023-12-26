#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n,int i){
    if(n==1){
        return ;
    }
    if(i<n-1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        bubble_sort(arr,n,i+1);
    }else{
        bubble_sort(arr,n-1,0);
    }
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
 
}
int main(){
    int arr[6] = {2,5,12,3,8,7};
    int n= 6;
    bubble_sort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}