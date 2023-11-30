#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers n: "<<endl;
    cin>>n;
    int i=0;
    int largest=INT_MIN;
    int smallest=INT_MAX;

    while(i<n){
        int x=0;
        cout<< "Enter " <<i<<"th number"<<endl;
        cin>>x;
         if(x > largest){
            largest = x;
         }
         
         if(x < smallest){
             smallest = x;
         }
         i++;
         }
         cout<<"Largest among the numbers:"<<largest<<endl;
         cout<<"Smallest among the numbers:"<<smallest<<endl;
        return 0;
    }