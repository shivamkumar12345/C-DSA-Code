#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex {
    public:
    int real; int imaginary;
    Complex(int r, int i){
        real = r;
        imaginary = i;
    }
    void add(Complex c){
        real += c.real;
        imaginary += c.imaginary;
    }
    void print(){
        cout<<real<<" "<<imaginary<<endl;
    }
    void operator += (Complex c){
        real += c.real;
        imaginary += c.imaginary;
    }
    ostream operator<< (ostream &os, Complex &c){
        cout<<c.real<<" "<<c.imaginary<<" ";
        return os;
    }
};
int main(){
    Complex c1(2,3);
    Complex c2(5,-2);
    // c1.add(c2); 
    // c1+=c2;
    c1.print();
    c2.print();
    
    cout<<c1;
    
    return 0;
    
}