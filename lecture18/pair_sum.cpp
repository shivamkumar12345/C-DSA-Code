#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,5,7,11,19};
    int n =5;
    int target =12;
    int l =0, h = n-1;
    while(l<=h){
        if(arr[l] + arr[h] > target){
            h--;
        }else if(arr[l] +  arr[h] < target){
            l++;
        }else {
                cout<< arr[l]<<" "<<arr[h]<<endl;
                l++;
                h--;
        }
    }
}