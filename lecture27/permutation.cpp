#include<iostream>
using namespace std;
void permut(string s, int idx){
    if(idx==s.length()){
        cout<<s<<endl;
        return;
    }
    for(int j=idx;j<s.length();j++){
        swap(s[idx],s[j]);
        permut(s,idx+1);
        swap(s[idx], s[j]);
    }
}
int main(){
    string s="abcd";
    string out="";
    permut(s,0);
}