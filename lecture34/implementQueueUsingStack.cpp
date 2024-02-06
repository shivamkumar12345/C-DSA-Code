#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>s1,s2;
    Queue(){}
    void push(int data){
        // copy s1 to s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        // push data to s1
        s1.push(data);

        // push copied data from s2 to s1 
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop(){
        if(s1.empty()){
            return -1;
        }
        int front = s1.top();
        s1.pop();
        return front;

    }

    int top(){
        return s1.top();
    }
};
int main(){
    Queue q();
}