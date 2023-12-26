#include<iostream>
using namespace std;
void update(int* aptr){
    *aptr  +=1;
}
int main(){
    int a=10;
    int* aptr = &a;
    update(aptr);
    cout<<a;
}