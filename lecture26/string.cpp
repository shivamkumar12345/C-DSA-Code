#include<iostream>
using namespace std;
int main(){
    // string s= "hello world";
    // string s1(s);
    // string s2("hello world");
    // char ch[]="hello world";
    // string s3 = ch;
    // cout<<s1<<endl;
    
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    // // cout<<s1<<endl;
    // cout<<s.length();
    // s.resize(15);
    // cout<<s<<endl;
    // cout<<s.capacity();
    //  string a= "eatz", b= "end";
    //  if(a.compare(b) ==0){
    //     cout<<"both are equal";
    //  }else if (a.compare(b) <0)
    //  {
    //     cout<<" a is smallest";
    //  }else{
    //     cout<<"a is gratest";
    //  }
     
    string x = "abcde";
    // cout<<x.substr(1);
    // int n =10;
    // auto n1 ='a';

    //for each loop
    // for(int i=0;i<x.length();i++){
    //     cout<<x[i]<<" ";
    // }
    for(auto ch: x){
        cout<<ch<<" ";
    }
}