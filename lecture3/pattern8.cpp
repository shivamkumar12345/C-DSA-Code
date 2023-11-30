#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"coding blocks\n";
    //for first half
    for(int row=1;row<=n;row++){
        for(int space=1;space<=2*(n-row);space++){
            cout<<"  ";
        }
        for(int count=1;count<=row;count++){
            cout<<count<<" ";
        }
        for(int space=1;space<= 2*(row-1);space++){
            cout<<"  ";
        }
        for(int count=row;count>=1;count--){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    
    //for 2nd half
    for(int row=n-1;row>=1;row--){
        for(int space=1;space<=2*(n-row);space++){
            cout<<"  ";
        }
        for(int count=1;count<=row;count++){
            cout<<count<<" ";
        }
        for(int space=1;space<= 2*(row-1);space++){
            cout<<"  ";
        }
        for(int count=row;count>=1;count--){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}