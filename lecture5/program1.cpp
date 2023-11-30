#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n\n";
    cin>>n;
    cout<<"top to bottom\n";
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"bottom to top\n";
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}