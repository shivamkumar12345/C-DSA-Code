#include<iostream>
using namespace std;
template <typename T>
class Vector{
    private:
    T* arr;
    int size, capacity;
    public:
    Vector(){
        size =0; capacity =0;
    }
    Vector(int n,int val=0 ){
        arr = new T[n];
        // for(int i=0;i<n;i++){
        //     arr[i] =val;
        // }
        size =0; capacity =n;
    }
    void push_back(T val){
        if(size >= capacity){
            T *temp = arr;
            capacity *=2;
            arr = new T[capacity];
            for(int i=0;i<size;i++){
                arr[i] =temp[i];
            }
            delete []temp;
        }
        arr[size] = val;
        size++;
    }
    T pop_back(){
        if(size ==0){
            cout<<"array is empty\n";
            return -1;
        }
        size--;
        return arr[size];
    }
    T at(int idx){
        if(idx<0 || idx >=size){
            cout<<"invalid index\n";
            return -1;
        }
        return arr[idx];
    }
    T operator[](int idx){
         if(idx<0 || idx >=size){
            cout<<"invalid index\n";
            return -1;
        }
        return arr[idx];
    }
    void erase(int idx, int len){
        for(int i= idx+len;i<=size;i++){
            arr[idx] = arr[i];
            idx++;
        }
        size -=len;
    }

};
int main(){
    // Vector<int> v(10,0);
    // for(int i=0;i<10;i++){
    //     v.push_back(i+1);
    // }
    // v.pop_back();
    // v.pop_back();
    // v.erase(2,2);
    // for(int i=0;i<8;i++){
    //     cout<<v[i]<<" ";
    // }
    Vector<char> s(5);
    for(int i=0;i<5;i++){
        s.push_back(char('a' + i));
    }
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
}