#include<iostream>
using namespace std;
int main(){
    char ch1[50];
    cin>>ch1;
    int freq[26]={};
    for(int i=0;i<50 && ch1[i] != '\0' ;i++){
        freq[ch1[i] - 'a'] ++;
    }
    char ch2[50];
    cin>>ch2;
    for(int i=0;i<50 && ch2[i] != '\0';i++){
        freq[ch2[i] - 'a']--;
        
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            cout<<"false";
            return 0;}
    }
    cout<<"true"<<endl;
    return 0;
}