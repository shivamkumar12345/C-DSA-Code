#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int total_setbit=0, count =0;
    while(count<32){
        if(n & (1<<count)){
            total_setbit ++;
        }
        count++;
    }
    cout<<total_setbit<<endl;
    return 0;
}