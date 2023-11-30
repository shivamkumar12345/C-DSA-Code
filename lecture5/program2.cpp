#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int row=1, space =0, star =n;
    while (row<=2*n)
    {   // print star
        for(int i=1;i<=star;i++){
            cout<<"* ";
        }
        //print space
        for(int i=1;i<=space; i++){
            cout<<"  ";
        }

        //print star
        for(int i=1;i<= star;i++){
            cout<<"* ";
        }
        cout<<endl;
        if(row<n){
            space +=2;
            star-=1;
        }else if(row>n){
            space -=2;
            star +=1;
        }
            /* code */
        row++;
    }
    
    return 0;
}