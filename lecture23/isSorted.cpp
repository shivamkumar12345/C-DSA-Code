#include<iostream>
using namespace std;
bool isSorted(int* arr, int n){
    if(n==0 || n==1)return true;
    bool is_smaller_sorted = isSorted(arr+1,n-1);
    return is_smaller_sorted && (arr[0]<=arr[1]); 
}
int main(){
    int arr[5] = {2,5,4,12,18};
    int n=5;
    cout<<isSorted(arr,n)<<endl;
}