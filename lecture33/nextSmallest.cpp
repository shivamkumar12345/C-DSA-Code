#include<iostream>
#include<stack>
#include<vector>

using namespace std;
int main(){
    vector<int>v(10),nextSmallest(10,-1);
    int n=10;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    stack<int>sk;
    for(int i=0;i<n;i++){
        while(!sk.empty() && v[i] < v[sk.top()]){
            nextSmallest[sk.top()] = v[i];
            sk.pop();
        }
        sk.push(i);
    }
    while(!sk.empty()){
        nextSmallest[sk.top()] = -1;
        sk.pop();
    }
    for(int i=0;i<n;i++){
        cout<<nextSmallest[i]<<" ";
    }
}