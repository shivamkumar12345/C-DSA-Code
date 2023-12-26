#include<iostream>
using namespace std;
int main(){
    // string s;
    // // cin>>s;
    // getline(cin,s);
    // cout<<s<<endl; 
    // cout<<s.length();
    // for(int i=0;i<s.length();i++){
    //     cout<<s[i]<<" ";
    // }
    string s_arry[5];
    for(int i=0;i<5;i++){
        cin>>s_arry[i];
    }
    for(int i=0;i<5;i++){
        cout<<s_arry[i]<<endl;
    }
}