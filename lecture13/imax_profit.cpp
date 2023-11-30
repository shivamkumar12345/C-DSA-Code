#include<iostream>

using namespace std;
#define N (long long)1e17
int main(){
    int price[5] = {1,5,3,6,9};
    long long c=1;
    for(int i=0;i<N;i++){c = c +1; cout<<c<<" ";}
    // cout<<(long long)c;

    // int profit =0,min_cost =price[0];
    // for(int i=0;i<5;i++){
    //     if(price[i] < min_cost){
    //         min_cost =  price[i];
    //     }
    //     if(profit < (price[i] - min_cost)){
    //         profit = price[i] - min_cost;
    //     }
    // }
    // cout<< profit<<" ";
}