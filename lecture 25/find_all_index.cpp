#include<iostream>
using namespace std;
void print_all_index(int arr[], int n,int tar){
    if(n==0)return;
    print_all_index(arr,n-1,tar);
    if(arr[n-1]==tar)cout<<n-1<<" ";
}
int main(){
    int arr[6]={2,5,7,4,5,7};
    int n= 6;
    int tar=7;
    print_all_index(arr,n,tar);
}