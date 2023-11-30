#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,3,2,1};
    int n=5;
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1-j;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}