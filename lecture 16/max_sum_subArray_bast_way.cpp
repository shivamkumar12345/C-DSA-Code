#include<iostream>
using namespace std;
int main(){
    int arr[8] = {-2,-5,2,-1,6,4,-10,12};
    int n=8;
    int temp_max =0 , total_max=0;
    for(int i=0;i<n;i++){
        temp_max += arr[i];
        if(temp_max < 0){
            temp_max =0;
        }
        if(temp_max > total_max){
            total_max = temp_max;
        }
    }
    cout<<total_max<<endl;
}