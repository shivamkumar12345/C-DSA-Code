#include<iostream>
using namespace std;
 int main(){
     int a,b;
     cout<<"Enter  two number a, b\n";
     cin>>a>>b;
    //print input a,b
    cout<<"Entered number is "<<a<<" "<<b<<endl;
    a = a^b;
    b= a^b;
    a= a^b;
    //print swaped a, b
    cout<<"swaped number is "<<a <<" "<<b;
    return 0;
 }