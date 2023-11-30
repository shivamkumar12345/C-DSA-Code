#include<iostream>
using namespace std;
int main(){
    int arr[50];
    cout<<"Enter size of the array max(50)";
    int size;
    cin>>size;

    //loop to get value of array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // reverse the number
    for(int i=0;i< (size/2 ); i++){
        // swap number at index i and n-i-1
        // int temp = arr[i];
        // arr[i] = arr[size- 1 - i];
        // arr[size-1-i] = temp;
        swap(arr[i], arr[size-i-1]);
    }
    //print the reversed number
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}