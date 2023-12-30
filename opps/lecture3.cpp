#include<iostream>
#include<string.h>
using namespace std;
class Car{
    public:
    char* name;
    int model;
 
 Car(){

 }
 Car(string n, int model){
    this->name = new char [n.length() +1 ];
    int idx=0;
    for(auto x:n){
        name[idx] = x;
        idx++;
    }
    name[idx] = '\0';
    this->model = model;
 }
 // deep copy
    Car(Car &obj){
        name = new char[strlen(obj.name) +1];
        for(int i=0;i<=strlen(obj.name); i++){
            this->name[i] = obj.name[i];
        }
        model = obj.model;
    }
 void print(){
    cout<<name<<" "<<model<<endl;
 }
};
int main(){
    Car obj1("BMW",12345);
    obj1.print();
    Car obj2(obj1);
    char temp[5] = "Audi";
    for(int i=0;i<=strlen(obj2.name);i++){
        obj2.name[i]= temp[i];
    }
    obj2.print();
    obj1.print();
}