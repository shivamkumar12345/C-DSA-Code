#include<iostream>
using namespace std;
int main(){
    int arr[6] = {0,1,2,4,5,6};
    int n= sizeof(arr)/ sizeof(int);
    // int total  = (n*(n+1))/2;
    int array_xor =0;
    for(int i=0;i<n;i++){
        array_xor ^= arr[i]; // xor with array element
    }
    int total_xor=0;
    for(int i=0;i<=n;i++){
        total_xor ^= i; // xor with number from 0 to n
    }
    cout<< (total_xor ^  array_xor)<<endl;
}