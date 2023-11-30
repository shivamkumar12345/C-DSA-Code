#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int target =12;
    for(int i=0;i<n;i++){
        if(arr[i]>= target){
            cout<<i<<endl;
            break;
        }
    }
    if(arr[n-1]< target){
        cout<<n<<endl;
    }
    return 0;
}