#include<iostream>
using namespace std;
int binary_search(int arr[], int n , int target){
    int l=0, h= n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            l = mid +1;
        }else {
            h = mid -1;
        }
    } 
    return -1;
    //return  index of target if present 
    // return -1 tsrget hi mila
}
int main(){
    int arr[6] = {2,5,8,9,12,15};
    int n = sizeof(arr)/sizeof(int);
    int target =5;
    int index = binary_search(arr, n, target);
    if(index == -1 ){
        cout<<"target nhi mila";
    }else {
        cout<<index;
    }
}