#include<iostream>
#include<vector>

using namespace std;
class Queue{
    vector<int>v;
    int size=0,capacity=0;
    int f=0, r=0;
    public:
    Queue(int n){
        v.resize(n);
        f=0, r= n-1;
        capacity = n;
    }
    void push(int data){
        if(size == capacity){
                cout<<"overflow";
                return;
        }
        int r = (r+1)%capacity;
        v[r] = data;
        size++;
    }
    void pop(){
        if(size == 0){
                cout<<"underflow";
                return;
        }
        int f = (f+1)%capacity;
        size--;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size ==0;
    }
    int front(){
        if(size ==0){
            return -1;
        }
        return v[f];
    }
      int back(){
        if(size ==0){
            return -1;
        }
        return v[r];
    }


};
int main(){
    Queue q(7);
    q.push(2);
    q.push(4);
       q.pop();
     q.push(6);
    q.push(4);
       q.pop();
    q.push(9);
    q.push(8);
    q.pop();
    cout<<q.front()<<" "<<q.back();
}