#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a number a , b, c\n";
    cin>>a>>b>>c;
    cout<<"Largest of three ";
    if(a>b && a>c){
        cout<<a;
    }else if(b>a && b>c){
        cout<<b;
    }else {
        cout<<c;
    }
    cout<<endl;

    cout<<"smallest number is ";
    if(a<b && a<c){
        cout<<a;
    }else if(b<a && b<c){
        cout<<b;
    }else {
        cout<<c;
    }
    cout<<endl;
    return 0;
}