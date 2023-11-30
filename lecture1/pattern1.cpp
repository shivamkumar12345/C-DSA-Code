#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to print a pattern\n";
    cin>>n;
    int row=1;
    for(; row<=n;row = row +1){
        for(int col=1;col<=(n-row +1); col = col +1){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}