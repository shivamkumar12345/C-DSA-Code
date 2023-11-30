#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    while(b%a !=0){
        int temp =a;
        a= b%a;
        b=temp;
    }
    cout<<a<<endl;
}