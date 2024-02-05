#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n =10;
    for(int i=0;i<n;i++){
        int x= 0; cin>>x;
        v.push_back(x);
    }
    vector<int>nextGreater(n,-1);
    stack<int>sk;
    for(int i=0;i<n;i++){
       
        while(!sk.empty() && v[i] > v[sk.top()]){
            nextGreater[sk.top()] = v[i];
            sk.pop(); 
        }
        sk.push(i);
    
    }
    for(int i=0;i<n;i++){
        cout<<nextGreater[i]<<" ";
    }
}