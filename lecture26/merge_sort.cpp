#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid =(s+e)/2;
    int n1 = mid -s +1, n2 = e-mid;
    int a[n1], b[n2];
    int x=0,y=0;
    for(int i=s;i<=mid;i++){
        a[x] = arr[i]; x++;
    }
    for(int i=mid +1;i<=e;i++){
        b[y] = arr[i]; y++;
    }
    int k=s,i=0,j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i]; i++; k++;
        }else {
            arr[k] = b[j]; j++; k++;
        }
    }
    while(i<n1){
        arr[k] =  a[i]; i++; k++;
    }
    
    while(j<n2){
        arr[k] =  b[j]; j++; k++;
    }

}
void merge_sort(int arr[], int s, int e){
    if(s>= e)return;
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}
int main(){
    int arr[] = {7,2,1,9,4,3,-1,6};
    int n=8;
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}