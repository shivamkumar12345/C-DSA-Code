#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char ch_array[50];
    cout<<"Enter size f array max(50)";
    int size;
    cin>>size;// input size

    for(int i=0;i<size;i++){
        cin>>ch_array[i];
    }
    int x=0, y=0; // x-cordinate and y-cordinate
     // read ch_array
     for(int i=0;i<size ;i++){
        if(ch_array[i] == 'E'){
            x++;
        }else if( ch_array[i] == 'W'){
            x--;
        }else if(ch_array[i] == 'N'){
            y++;
        }else {
            y--;
        }
     }
    //cout<<x << y<<" ";

    double distance = sqrt((x*x + y*y));
    cout<<"distance from origin "<<distance;
}