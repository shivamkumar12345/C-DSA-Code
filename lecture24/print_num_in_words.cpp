#include<iostream>
using namespace std;
void print_words(int n,char ch[][6]){
     if(n/10 ==0){
        cout<<ch[n]<<" ";
        return;
     }
    int ld = n%10;
    int remNum= n/10;
    print_words(remNum,ch);
    cout<<ch[ld]<<" ";
}
int main(){
    char ch[][6]={"zero","one","two","three","four","five","six","seven",
    "eight","nine"};
    int n;
    cin>>n;
    print_words(n,ch);
}