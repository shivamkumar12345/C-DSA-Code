#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n\n";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i ==0){
            cout<<"not prime\n";
            return 0;
        }
    }
    cout<<"prime\n";

    return 0;
}