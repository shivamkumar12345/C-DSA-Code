#include<iostream>
#include<stack>
using namespace std;
bool isBracket(char ch){
    if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' ||ch == ']' )
        return true;
    
    return false;
}
int main(){
    string exp;
    cin>>exp;
    stack<char>s;
    for(auto x: exp){
        if(!isBracket(x))continue;

        if(x=='(' || x== '{' || x=='['){
            s.push(x);
        }else if(s.empty() || (s.top()=='(' && x != ')') 
        ||  (s.top()=='{' && x != '}') 
        || (s.top()=='[' && x != ']')){
            break;

        }else {
            s.pop();
        }
    }
    if(s.empty()){
        cout<<"valid\n";

    }else{
        cout<<"not valid\n";
    }
}