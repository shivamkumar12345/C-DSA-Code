#include<iostream>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c){
    if(n==1){
        cout<< "putting "<< n <<" from "<< a<< " to "<< c<<endl;
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    cout<< "putting "<< n <<" from "<< a<< " to "<< c<<endl;
    towerOfHanoi(n-1,b,a,c);
}
int main(){
    char a='A',b= 'B',c='C';
    int n=3;
    towerOfHanoi(n,a,b,c);
}