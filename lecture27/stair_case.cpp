#include<iostream>
using namespace std;
int kStair(int n, int k){
     if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans =0;
    for(int step = 1;step<=k;step ++){
        ans += kStair(n-step,k);
    }
    return ans;
}
int stair(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    int n=4;
   cout<< kStair(n,3);
}