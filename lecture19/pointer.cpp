#include<iostream>
using namespace std;
int main(){
    // int a =10;
    // int* aptr = &a;
    // cout<<a<<endl;
    // cout<<aptr<<endl;
    // cout<<&a<<endl;
    // cout<<*aptr<<endl;
    // float f =1.11;
    // float* fptr = &f;
    // cout<<f<<endl;
    // cout<<fptr<<endl;
    // cout<<&f<<endl;
    // cout<<*fptr<<endl;

    char ch = 'A'; 
    char *chptr = &ch;
    cout<<ch<<endl;
    cout<<(float *)chptr;
}