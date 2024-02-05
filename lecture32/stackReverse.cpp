#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s, int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int top =s.top(); s.pop();
    insertAtBottom(s,ele);
    s.push(top);
    return;
}
void reverse(stack<int>& s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,top);
}
void printStack(stack<int>sk){
    while(!sk.empty()){
        cout<<sk.top()<<" ";
        sk.pop();
    }
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printStack(s);
    cout<<endl;
    reverse(s);
    printStack(s);

}