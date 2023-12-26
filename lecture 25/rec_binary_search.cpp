#include<iostream>
using namespace std;
int binary_search(int arr[],int n, int l,int h, int tar){
    if(l>h)return -1;
    int mid = (l+h)/2;
    if(arr[mid] ==tar)return mid;

    if(arr[mid]<tar){
        return binary_search(arr,n,mid +1, h,tar);
    }
    
    if(arr[mid]>tar){
        return binary_search(arr,n,l,mid -1,tar);
    }
    return -1;
}
int main(){
    int arr[6]={2,4,8,12,15,20};
    int n=6;
    int tar =17;
    cout<<binary_search(arr,n,0,n-1,tar);
}