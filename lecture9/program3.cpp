#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[50];
    cout<<"Enter size of array max(50)";
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    //read array from index 0 to size-1
    for(int i=0;i<size;i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    cout<<maximum<<" ";
}