#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextSmallest(vector<int>&rect, int n, vector<int>&next){
     stack<int>sk;
    for(int i=0;i<n;i++){
        while(!sk.empty() && rect[i] < rect[sk.top()]){
            next[sk.top()] = i;
            sk.pop();
        }
        sk.push(i);
    }
    while(!sk.empty()){
        next[sk.top()] = -1;
        sk.pop();
    }
}
void prevSmallest(vector<int>&rect, int n, vector<int>&prev){
    stack<int>sk;
    for(int i=0;i<n;i++){
        while(!sk.empty() && rect[i] < rect[sk.top()]){
            sk.pop();
        }
        if(!sk.empty()){
            prev[i] = sk.top();
        }
        sk.push(i);
    }
}
int main(){
    vector<int>rect;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        rect.push_back(x);
    }
    vector<int>prevSmall(n,-1),nextSmall(n,-1);
    prevSmallest(rect,n,prevSmall);
    nextSmallest(rect,n,nextSmall);

    for(int i=0;i<n;i++){
        cout<<prevSmall[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nextSmall[i]<<" ";
    }
    int max_area =0, curr_Area=0;
    for(int i=0;i<n;i++){
        int l= prevSmall[i] == -1? 0 : prevSmall[i] +1;
        
        int r= nextSmall[i] == -1? n-1 : nextSmall[i]-1;
        int w = r- l +1;
        max_area = max(max_area, rect[i] * w);
    }
    cout<<max_area<<endl;
}