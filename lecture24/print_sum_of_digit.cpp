#include<iostream>
using namespace std;
int sum_of_digit(int n){
    if(n/10 ==0)return n;
    int ld = n%10;
    int remNum= n/10;
    int chhota_sum = sum_of_digit(remNum);
    return chhota_sum + ld;
}
int main(){
    int n;
    cin>>n;
    int sum = sum_of_digit(n);
    cout<<sum<<" ";
}