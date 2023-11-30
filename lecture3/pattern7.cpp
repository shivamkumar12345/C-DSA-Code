#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int space =1;space<=(n-row);space++){
            cout<<"  ";
        }
        int num=row;
        for(int count=1;count<=row;count++){
            cout<<num<<" ";
            num++;
        }
        num-=2;
        for(int count=1;count<row;count++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;

    }

}