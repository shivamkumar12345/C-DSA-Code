#include<iostream>
using namespace std;
// #define M 50
// #define N 50
int main(){
    int arr1[8]={1,4,9};
    int arr2[5]={2,5,6,10,12};
    int n= sizeof(arr2)/sizeof(int);
    int size1 =  sizeof(arr1)/sizeof(int);
    int m = size1 - n;

    int k= size1 -1;
    int j = n-1;
    int i = m-1;
    while(i>=0 && j>=0){
        if(arr1[i] > arr2[j]){
                arr1[k] = arr1[i];
                i--;
                

        }else {
            arr1[k] = arr2[j];
            j--;
        
        }
        k--;
    }
    
     while(j>=0){
        arr1[k] = arr2[j];
        k--; j--;
    }
    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
}