#include<iostream>
using namespace std;
int main(){
    // int n; cin>>n;
    // int *arr  = new int[n];
    // for(int i=0;i<n;i++){
    //     arr[i] = i+1;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // delete []arr;
    // arr = NULL; //segmentation fault
    // //nhi aayega garbage

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    //2-d array

    int n,m;
    cin>>n>>m;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = i+j+1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete []arr;
    arr= NULL;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}