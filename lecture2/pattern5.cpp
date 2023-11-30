#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int count_star = -1;
    for(int row=0;row<n;row++){
        for(int num=1;num<=(n-row);num++){
            cout<<num<<" ";
        }
        for(int star =1;star<= count_star;star++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        count_star +=2;
    }
    return 0;
}