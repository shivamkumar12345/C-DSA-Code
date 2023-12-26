#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    // cout<<arr[0][2];

    for(int row =0;row<3;row++){
        for(int col =0;col <3;col++){
            cin>>arr[row][col];
        }
    }
    for(int row =0;row<3;row++){
        for(int col =0;col <3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    char ch[][5] = {{'a','m','a','n'},{'a','m','i','t'}};
    cout<<ch[0];
} 