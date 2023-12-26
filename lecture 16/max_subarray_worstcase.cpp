#include<iostream>
using namespace std;
int main(){
    int arr[8] = {-2,-5,2,-1,6,4,-10,12};
    int maximum =0;
    int n=8;
    for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum =0;
                for(int k=i;k<=j;k++){
                    sum+= arr[k];
                }
                maximum = max(maximum, sum);
            }
    }
    cout<<maximum<<endl;
}