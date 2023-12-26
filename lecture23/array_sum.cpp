#include<iostream>
using namespace std;
int sum_array(int *arr, int n){
    if(n==0)return 0;
    if(n==1)return arr[0];
    int chhota_sum =  sum_array(arr+1,n-1);
    return arr[0] + chhota_sum;
}
int sum_array1(int *arr, int n, int i){
    if(i==n)return 0;
    int chhota_sum = sum_array1(arr,n,i+1);
    return arr[i] + chhota_sum;
}
int main(){
    int arr[5] = {3,5,7,12,18};
    int n= 5;
    cout<<sum_array1(arr,n,0)<<endl;
}