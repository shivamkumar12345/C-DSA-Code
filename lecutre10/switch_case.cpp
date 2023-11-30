#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter a fruit name\n";
    char fruit ='A';
    // cin>>fruit;  //cout<<fruit;
    float t;
    cin>>t;
    switch (t)
    {
    case 0:
        cout<<"Apple is costly";
        break;
    case 1:
        cout<<"Banana is not that costly\n";
    default:
        cout<<"I love fruit";
        break;
    }
    int i=1;
    while(i){
        if(fruit == 'A'){
            cout<<"Apple";
            continue;
        }
        i--;
    }
   
}