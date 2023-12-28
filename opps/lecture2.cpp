#include<iostream>
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
 //copy
    Car(Car &obj){
        name = obj.name;
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
    for(int i=0;obj2.name[i]!='\0';i++){
        obj2.name[i]= temp[i];
    }
    obj2.print();
    obj1.print();
}