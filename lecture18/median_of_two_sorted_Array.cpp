#include<iostream>
using namespace std;
int main(){
    int arr1[5] = {1,4,5,8,10};
    int arr2[8]={-2, 3 ,5, 7,9,11, 13,15};
    int n =5, m= 8;
    int k = (n+m)/2;
    int i=n-1, j= m-1;
    while(k>0){
        if(arr1[i] > arr2[j]){
            i--;
        }else{
            j--;
        }
        k--;
    }
    if((n+m) %2 ==0){
        cout<<(arr1[i] + arr2[j])/2<<endl;
    }else{
        cout<<arr2[j]<<endl;
    }
    
}