#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int n_1 = fibonacci(n-1), n_2 = fibonacci(n-2);

    return n_1 + n_2;
}
int main(){
    int n;
    cin>>n;
    int ans  =  fibonacci(n);
    cout<<ans<<" ";
}