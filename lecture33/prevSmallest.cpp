#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
    vector<int>v(10),prevSmall(10,-1);
    int n =10;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    stack<int>sk;
    for(int i=0;i<n;i++){
        while(!sk.empty() && v[i] < v[sk.top()]){
            sk.pop();
        }
        if(!sk.empty()){
            prevSmall[i] = v[sk.top()];
        }
        sk.push(i);
    }
    for(auto x:prevSmall){
        cout<<x<<" ";
    }
}