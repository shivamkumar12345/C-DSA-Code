#include<iostream>
using namespace std;
void merge(int a[],int b[], int c[], int n1, int n2, int n3){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k] = a[i]; i++; k++;
        }else {
            c[k] = b[j]; j++; k++;
        }
    }
    while(i<n1){
        c[k] =  a[i]; i++; k++;
    }
    
    while(j<n2){
        c[k] =  b[j]; j++; k++;
    }
}
int main(){
    int a[]={2,5,7,8,11,13};
    int b[]={1,3,6,13,19,21};
    int n1=6,n2=6;
    int n= 12;
    int c[12];
    merge(a,b,c,n1,n2,n);
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }

}