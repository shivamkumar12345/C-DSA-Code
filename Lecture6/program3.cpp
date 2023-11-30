#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int space = 2*(n-1), star =1;
    int row=1;
    while(row<= n){
        int i=1;
        //print star
        while(i<= star){
            cout<<"* ";
            i++;
        }
        i=1;
        //print space
        while(i<= space){
            cout<<"  ";
            i++;
        }
        i=1;
        //print star
        while (i<= star)
        {
            cout<<"* ";
            i++; 
        }
        cout<<endl;
        space -=2;
        star ++;
        row++;
        
    }
    return 0;
}