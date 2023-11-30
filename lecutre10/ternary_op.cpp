#include<iostream>
using namespace std;
int main(){
    int n =11;

   int  m= (n>10 ? --n : n + 1); // (condition ? true code : false code);
    cout<<n<< " "<<m;
}