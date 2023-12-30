#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.reserve(5);
    cout<<"capacity "<< v.capacity();
    cout<<"size "<< v.size();
    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    swap(v[0],v[2]);
    sort(v.begin(),v.end());
}