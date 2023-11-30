#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    for(int row=1;row<=n;row++){
        int start =0;
        if(row%2 !=0){
            start =1;
        }else{
            start =0;
        }
        for(int col=1;col<=row;col++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
    return 0;
}