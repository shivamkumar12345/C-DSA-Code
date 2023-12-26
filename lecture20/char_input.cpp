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
    while(ch[size] != '\0'){
        size ++;
    }
    return size;
}
int main(){
    char ch[20];
    // input_char(ch, 10);
    // cin.getline(ch,11);
    // cout<<ch;
    int n;
    // cin>>n;
    // cin>>ch;
    // cout<<n<<" "<<ch;
    cin>>ch;
    cout<<get_length(ch);

}