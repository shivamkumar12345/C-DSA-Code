#include<iostream>
using namespace std;
void phoneKeyPad(string phone[], int num,string& out){
if(num ==0){
    cout<< out<<" ";
    return;
}
    int lastDigit = num%10;
    int remDigit =  num/10;
    for(auto x: phone[lastDigit]){
        out =  x + out ;
        phoneKeyPad(phone,remDigit,out);
        out.erase(0,1);
    }

}
int main(){
    string phone[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
   int num;
   cin>>num;
   string out="";
    phoneKeyPad(phone,num,out);
}