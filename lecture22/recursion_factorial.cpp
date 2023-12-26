#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)return 1;
    int chhota = factorial(n-1);
    return n*chhota;
}
int main(){
    int n;
    cin>>n;
    int fact = factorial(n);
    cout<<fact<<" ";
}