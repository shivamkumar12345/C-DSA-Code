#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int>v;
    int size=0;
    public:
    Stack(){

    }
    void push(int data){
        v.push_back(data);
        size++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty can't pop\n";
            return -1;
        }
       return v[--size];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty , not possible\n";
            return -1;
        }
        return v[size -1];
    }
    bool isEmpty(){
        return size==0;
    }

};
int main(){
    Stack s = Stack();
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    
}