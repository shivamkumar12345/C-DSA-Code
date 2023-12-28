#include<iostream>
using namespace std;
int partion(int arr[], int s, int e){
    int i= s-1;
    for(int j=s;j<=e;j++){
        if(arr[j]<arr[e]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quickSort(int arr[], int s, int e){
    if(s>=e)return;
    int p = partion(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[8] = {8,3,7,2,5,6,4,1};
    int n=8;
    quickSort(arr,0,7);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}