#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int row=1,char_count =n-1;
    while(row<=n){
        //print incr
        int i=0;
        while(i<=char_count){
            cout<<(char)('A'+i)<<" ";
            i++;
        }
        //print decr
        // i--;
        while(i>=0){
            cout<<(char)('A'+ i)<<" ";
            i--;
        }
        cout<<endl;
        char_count--;
        row++;
    }

    return 0;
 }