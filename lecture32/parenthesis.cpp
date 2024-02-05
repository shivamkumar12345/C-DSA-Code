#include<iostream>
#include<stack>
using namespace std;
int main(){
    string parenthesis;
    cin>>parenthesis;
    stack<char> s;
    for(auto x:parenthesis){
        if(x == '('){
            s.push(x);
        }else if(s.empty() || s.top() == ')'){
                cout<<"not valid";
                break;
        }else{
            s.pop();
        }     
    }

    if(s.empty()){
        cout<<"valid parenthesis\n";
    }else{
        cout<<"not valid\n";
    }
}