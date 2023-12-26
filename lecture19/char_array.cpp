#include<iostream>
using namespace std;
int main(){
    char ch[] = {'h','e','l','l','o','\0'};
    // cout<<(int*)ch;
    int n = sizeof(ch)/sizeof(char);
    cout<<n;
    char ch1[6]  = "hello";
    cout<<ch1;
}