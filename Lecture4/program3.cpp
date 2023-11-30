#include<iostream>
using namespace std;
#define decimal float
int main(){
    decimal i=0;
    int n;
    cout<<"Enter a number to get square root\n";
    cin>>n;
    int total_prec =0;
    cout<<"Enter total digit after decimal\n";
    cin>>total_prec;
    int curr_prec=0;
    decimal inc =1;
    while(curr_prec<= total_prec){
        while(i*i<=n){
            i+= inc;
        }
        i-= inc; 
        inc/=10;
        curr_prec++;
    }
    cout<<i<<endl;

}