#include<iostream>
using namespace std;
class Car {
    public:
    //data member | attribute
    string name;
    int Model;
    string color;
    //default construtor
    Car(){
         cout<<"costructor1\n";
        // cout<<"Object get created\n";
    }
    //parameterized constructor
    Car(string n, string c, int m){
        cout<<"costructor2\n";
        name = n;
        color = c;
        Model = m;
    }
    Car(int m,string n, string c){
        cout<<"constructor3\n";
        name = n;
        color = c;
        Model = m;
    }
    // copy constructor
    Car( Car& obj){
        cout<<"costructor4\n"; 
        name = obj.name;
        Model = obj.Model;
        color = obj.color;
    }
    //method | function
    void print(){
        cout<<name<<" "<<Model<<" "<<color<<endl;
    }
};
int main(){

    Car obj1(123,"BMW","red");
    // obj1.name = "BMW";
    // obj1.color = "red";
    // obj1.Model = 123;
    obj1.print();
    // //cout<<obj1.name<<" "<<obj1.color<<" "<<obj1.Model<<endl;
     Car obj2;
    obj2.name = "toyota";
    obj2.color = "white";
    obj2.Model = 321;
    obj2.print();
    // cout<<obj2.name<<" "<<obj2.color<<" "<<obj2.Model<<endl;

    Car obj3(obj1);
    obj3.name = "Maruti";
    obj3.print();
    obj1.print();
}