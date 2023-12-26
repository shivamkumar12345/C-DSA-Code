#include<iostream>
using namespace std;
void subseq(string& s, int idx, string out){
    if(idx  == s.length()){
        cout<<out<<" ";
        return;
    }
    //out me s[idx] lenge
    subseq(s,idx+1, out+ s[idx]);

    //out me s[idx]  nhi lenge
    subseq(s,idx +1, out);

}
void subseq1(string s, string out){
    if( s.length() ==0){
        cout<<out<<" ";
        return;
    }
    string remString = s.substr(1);
    //out me s[idx] lenge
    subseq1(remString, out+ s[0]);

    //out me s[idx]  nhi lenge
    subseq1(remString, out);

}
int main(){
    string s= "abcd";
    string out ="";
    subseq1(s,out);

}