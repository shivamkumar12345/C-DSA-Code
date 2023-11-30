#include<iostream>
using namespace std;

int sum_of_array(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
void square_of_array(int arr[],int n){
    for(int i=0;i<n;i++){
           arr[i] = arr[i]*arr[i];
    }
}
int main(){
    int arr[5]={6,3,4,5,7};
    int n = sizeof(arr)/sizeof(int);

    // cout<<sum_of_array(arr,n);
    square_of_array(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}