#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to get square root\n";
    cin>>n;
    int i=0;
    while(i*i<=n){
        i++;
    }
    i--;
    cout<<"Square root of given input is "<<i<<endl;
    return 0;
}