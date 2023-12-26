#include<iostream>
using namespace std;
int stringToInt(string &s, int n){
    if(n==0)return 0;
    int chhota_ans =  stringToInt(s,n-1);
    return (s[n-1]-'0')  + chhota_ans*10;
}
int main(){
    string s;
    cout<<"Enter numberic char only\n";
    cin>>s;
    cout<<stringToInt(s,s.length());
}