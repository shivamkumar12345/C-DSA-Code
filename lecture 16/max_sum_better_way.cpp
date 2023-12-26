#include<iostream>
using namespace std;
int main(){
    int arr[8] = {-2,-5,2,-1,6,4,-10,12};
    int n=8;
    int cum[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];

        cum[i] = sum;
    }
    // for(int i=0;i<n;i++){
    //     cout<<cum[i]<<" ";
    // }
    int maximum =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp_sum =  cum[j] - cum[i-1];
            maximum = max(maximum, temp_sum);
        }
    }
    cout<<maximum<<endl;
}