#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=4;j<n;j++){
            if(arr[min]> arr[j])min =j;
        }
        if(arr[min] < arr[i]){
            swap(arr[min], arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}