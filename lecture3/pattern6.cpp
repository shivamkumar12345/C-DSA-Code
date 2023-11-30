#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int row=1;
    while(row<=n){
        int count=1;
        while(count<=row){
            cout<<count<<" ";
            count++;
        }
        int star =1;
        while(star<= (2*(n-row)-1)){
            cout<<"* ";
            star++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}