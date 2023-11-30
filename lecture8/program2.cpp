#include<iostream>
using namespace std;

int factorial_fun(int n){
    int fact =1;
    for(int i=n;i>0;i--){
        fact = fact * i;
    }
    return fact;
}
 int main(){
    int n = 4;
    cout<<factorial_fun(n)<<endl;
    cout<<factorial_fun(5);
 }