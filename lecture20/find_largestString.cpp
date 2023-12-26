#include<iostream>
using namespace std;
void input_char(char *ch, int n){
    char temp = cin.get();
    int i=0;
    while(temp !='\0' && i<n){
        ch[i] = temp;
        i++;
        temp = cin.get();
    }
}
int get_length(char* ch){
    int size =0;
    while(ch[size] != '\0' && ch[size] != '\n'){
        size ++;
    }
    return size;
}
int main(){

    int n;
    cin>>n;
    int ans=0;
    char result[10];
    while(n--){
        char temp[50];
        cin.getline(temp,10);
        int temp_length = get_length(temp); 
        if(temp_length > ans){
            ans=temp_length;
            int i=0;
            //copy temp into result char array
            while(temp[i] != '\0' && temp[i] != '\n' && i <10){
                result[i] =temp[i];
                i++;
            }
        }
    }
    cout<<ans<<" "<<result<<endl;
}