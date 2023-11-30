#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter total number\n";
    cin>>n;
    if(n%2==0){
        cout<<"entered number is even\n";
        return 0;
    }
    int ans=0;
    while(n>0){
        int x;
        cin>>x;
        ans = ans^x;
        n--;
    }
    cout<<ans<<endl;
    return 0;

}