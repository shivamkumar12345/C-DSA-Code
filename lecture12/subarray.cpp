#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    // int start_index =1;
    for(int start_index=0;start_index<n;start_index ++){
        for(int i=start_index;i<n;i++){ //i = end index
                cout<<"{ "<<start_index << " to "<<i<<" } ";
                for(int k=start_index ; k<=i;k++){ // print subarray from start_index to end_indexsni
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
    }
   

}