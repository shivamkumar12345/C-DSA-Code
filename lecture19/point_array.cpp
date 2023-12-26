#include<iostream>
using namespace std;
void printArray(int* a,int n){
    
    for(int i=0;i<n;i++){
        cout<<*(a + i)<<" ";;
    }
}
int main(){
    int a[5] = {1,2,3,4,5};
    printArray(a,5);
}