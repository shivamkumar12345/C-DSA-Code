#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4}; //alternate way to initialize array
    // cin>>arr[0];
    // cin>>arr[1];
    // cin>>arr[2];
    // cin>>arr[3];
    int size = sizeof(arr)/ sizeof(int);
    cout<<size<<endl;
    /*when we have to get input from user*/
    // for(int index =0;index < size;index ++){
    //     cin>>arr[index];
    // }
    //print 4 number
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    for(int index=0;index < size;index++){
        cout<<arr[index]<<" "; //to print the number of following index
    }
}