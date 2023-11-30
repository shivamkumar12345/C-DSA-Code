#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,3,2,1};
    int n= 5;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}