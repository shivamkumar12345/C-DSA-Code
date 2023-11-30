#include<iostream>
using namespace std;
int add(int a, int b){
    int sum = a+b;
    return sum;
}
float add(double a, double b){
    float sum = a+b;
    return sum;
}
int add(int a, int b, int c){
    int sum = a+b+c;
    return sum;
}
void add_two_number(int a, int b){
    cout<<(a+b);
    return ;
}
void print(){
    cout<<"Hello World!";
    return;
}
 int main(){
    float sum = add(5.5,8.0);
    cout<<sum<<endl;
    add_two_number(10,15);
    print();
    return 0;
 }